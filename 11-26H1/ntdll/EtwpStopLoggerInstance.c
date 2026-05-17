/*
 * XREFs of EtwpStopLoggerInstance @ 0x18007840C
 * Callers:
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x180076070 (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x1800784D0 (RtlWakeAllConditionVariable.c)
 *     EtwpDisableTraceProviders @ 0x1800E8BDC (EtwpDisableTraceProviders.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v3; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 312), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(unsigned int *)(a1 + 20));
  v3 = *(void **)(a1 + 544);
  if ( v3 )
  {
    NtClose(v3);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable(a1 + 64);
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
