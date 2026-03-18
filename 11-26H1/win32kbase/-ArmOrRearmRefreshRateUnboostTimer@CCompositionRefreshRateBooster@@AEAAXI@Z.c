/*
 * XREFs of ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x14006ED8C
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer(
        CCompositionRefreshRateBooster *this,
        unsigned int a2)
{
  int v4; // ecx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v6; // r8d
  void *v7; // r14
  union _LARGE_INTEGER DueTime; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h]

  DueTime.QuadPart = -10000LL * (int)a2;
  CPushLock::AcquireLockExclusive(this);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (__int64)((unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 3))) / gliQpcFreq.QuadPart) >= 10
    || a2 > *((_DWORD *)this + 5) )
  {
    v7 = *(void **)(*(_QWORD *)(W32GetUserSessionState(
                                  v4,
                                  (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 3)))
                                % gliQpcFreq.QuadPart,
                                  v6)
                              + 3104)
                  + 80LL);
    if ( ZwCancelTimer(v7, 0LL) < 0 )
    {
      v9 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 481LL);
    }
    if ( ZwSetTimer(v7, &DueTime, 0LL, 0LL, 0, 0, 0LL) < 0 )
    {
      v9 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 492LL);
    }
    *((LARGE_INTEGER *)this + 3) = PerformanceCounter;
    *((_DWORD *)this + 5) = a2;
  }
  CPushLock::ReleaseLock(this);
}
