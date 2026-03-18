/*
 * XREFs of PpmParkReportUnparkedCore @ 0x14025336C
 * Callers:
 *     PpmPerfAction @ 0x1402532A0 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x14042C170 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x1404CB1F8 (PpmEventCoreParkingStateChange.c)
 */

_PPM_IDLE_STATES *__fastcall PpmParkReportUnparkedCore(struct _KPRCB *a1)
{
  __int64 Number; // rdx
  _PPM_IDLE_STATES *result; // rax

  KeTransitionProcessorParkState(a1, 0);
  Number = a1->Number;
  a1->PowerState.Parked = 0;
  KeInterlockedClearProcessorAffinityEx(&PpmPerfCoreParkingMask, Number);
  KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, a1->Number);
  if ( a1->PowerState.SoftParked )
  {
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, a1->Number);
    a1->PowerState.SoftParked = 0;
  }
  PpmEventCoreParkingStateChange(a1);
  PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
  result = a1->PowerState.IdleStates;
  if ( result )
  {
    if ( result->EnforceStateConstraints )
      a1->PowerState.IdlePolicy.ForceLightIdle = 1;
  }
  return result;
}
