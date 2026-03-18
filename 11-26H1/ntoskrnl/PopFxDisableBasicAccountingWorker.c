/*
 * XREFs of PopFxDisableBasicAccountingWorker @ 0x140604D80
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404E23A0 (PopFxReinitializeAccountingInstance.c)
 */

void __fastcall PopFxDisableBasicAccountingWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v5; // rdx
  _BYTE *v6; // rbx
  ULONG_PTR i; // rbx
  unsigned int j; // edi
  __int64 v9; // rsi
  KIRQL v10; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (_BYTE *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&qword_140F123D0.Header.Lock,
      0,
      (LegacyAutoBoost *)v6,
      &qword_140F123D0);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v5) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v6 + 33), v5, 1);
    }
    else
    {
      v6[10] = 1;
    }
  }
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
      if ( *(_DWORD *)(v9 + 16) == 1 )
        PopFxReinitializeAccountingInstance(v9, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v10);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
