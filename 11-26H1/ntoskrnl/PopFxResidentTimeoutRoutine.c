/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x140393C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x14021A008 (PopFxArmResidentTimer.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 */

void __fastcall PopFxResidentTimeoutRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int i; // edi
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v5, &qword_140F123D0);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  if ( (ULONG_PTR *)qword_140F123E0 != &qword_140F123E0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v11);
    v7 = qword_140F123E0;
    v8 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v7 != &qword_140F123E0 )
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 868); ++i )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 872) + 8LL * i);
        if ( *(int *)(v9 + 96) > 0
          && v8 - *(_QWORD *)(v9 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 0xFFFFFFFF);
          _InterlockedAdd((_DWORD *)&stru_140F12420.SwapListEntry + 2, 0xFFFFFFFF);
          PopFxIdleComponent(v7, i);
        }
      }
      v7 = *(_QWORD *)v7;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
  PopFxArmResidentTimer(1);
}
