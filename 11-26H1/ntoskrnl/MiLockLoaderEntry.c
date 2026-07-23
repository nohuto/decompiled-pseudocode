/*
 * XREFs of MiLockLoaderEntry @ 0x1405208A8
 * Callers:
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 *     MmFreeDriverInitialization @ 0x14086AA84 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140275DA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rbx
  ULONG_PTR v8; // rcx
  AutoBoost *v9; // rax
  volatile unsigned __int8 *v10; // rdx
  AutoBoost *v11; // rdi
  volatile unsigned __int8 *v12; // rdx
  _BYTE *v13; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 232);
  v8 = a1 + 232;
  --CurrentThread->SpecialApcDisable;
  if ( !a2 )
  {
    v9 = (AutoBoost *)KeAbPreAcquire(v8, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v10) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v10, 1);
      }
      else
      {
        *((_BYTE *)v11 + 10) = 1;
      }
    }
LABEL_16:
    *(_QWORD *)(a1 + 240) = CurrentThread;
    return;
  }
  if ( a2 != 2 )
  {
    ExAcquireAutoExpandPushLockExclusive(v8, 0LL);
    if ( a2 > 1 )
      return;
    goto LABEL_16;
  }
  v13 = (_BYTE *)KeAbPreAcquire(v8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v5, 0, (LegacyAutoBoost *)v13, (struct _KTHREAD *)v5);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v12) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v13 + 33), v12, 1);
    }
    else
    {
      v13[10] = 1;
    }
  }
}
