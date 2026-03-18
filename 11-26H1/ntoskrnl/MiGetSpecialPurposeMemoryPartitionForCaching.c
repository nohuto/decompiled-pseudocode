/*
 * XREFs of MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14046CEE0
 * Callers:
 *     MiGetExtendedStandbyPage @ 0x140703824 (MiGetExtendedStandbyPage.c)
 *     MiCreatePagefileMemoryExtents @ 0x14087E204 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

__int64 __fastcall MiGetSpecialPurposeMemoryPartitionForCaching(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rsi
  signed __int64 *v9; // rbp
  struct _KTHREAD *CurrentThread; // r14
  volatile unsigned __int8 *v11; // rdx
  _BYTE *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v16; // rcx

  if ( a2 )
    *a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    return 0LL;
  v5 = (_QWORD *)(a1 + 21416);
  v6 = *(_QWORD *)(a1 + 21416);
  if ( v6 == a1 + 21416 )
    return 0LL;
  if ( !a2 )
    return *(_QWORD *)(v6 - 8);
  v9 = (signed __int64 *)(a1 + 21448);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire(a1 + 21448, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, (LegacyAutoBoost *)v12, (struct _KTHREAD *)v9);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v11) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v12 + 33), v11, 1);
    }
    else
    {
      v12[10] = 1;
    }
  }
  if ( (_QWORD *)*v5 != v5 )
  {
    v13 = *v5 - 72LL;
    ++*(_QWORD *)(v13 + 88);
    *a2 = v13;
    v8 = *(_QWORD *)(v13 + 64);
  }
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((unsigned __int64)v9);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v16 = &CurrentThread->152;
    if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v16->ApcState.ApcListHead[0].Flink != v16 )
      KiCheckForKernelApcDelivery((__int64)v16, v14);
  }
  return v8;
}
