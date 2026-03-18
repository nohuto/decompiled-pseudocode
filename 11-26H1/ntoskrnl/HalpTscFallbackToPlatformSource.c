/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x140583CE4
 * Callers:
 *     HalpTimerReportIdleStateUsage @ 0x1404F30D0 (HalpTimerReportIdleStateUsage.c)
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140577D58 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTscTraceStatus @ 0x14058430C (HalpTscTraceStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HalpTscFallbackToPlatformSource(PCEVENT_DESCRIPTOR EventDescriptor)
{
  KIRQL v2; // bl
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)Context = 0LL;
  HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Context[0]) = HIDWORD(Context[0]);
  v2 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscFallback, (ULONG_PTR)Context);
  HalpTimerSchedulePeriodicQueries();
  KeReleaseSpinLock(&HalpTscFallbackLock, v2);
  return HalpTscTraceStatus(EventDescriptor);
}
