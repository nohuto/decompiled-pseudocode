/*
 * XREFs of PpmParkReportForceParkChange @ 0x14042C088
 * Callers:
 *     PpmPerfAction @ 0x1402532A0 (PpmPerfAction.c)
 * Callees:
 *     KeInterlockedSetProcessorAffinityEx @ 0x14042C030 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x14042C170 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KeCheckProcessorAffinityEx @ 0x14042D260 (KeCheckProcessorAffinityEx.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x14042D33C (PpmEventCoreParkingForceParkedStateChange.c)
 */

__int64 __fastcall PpmParkReportForceParkChange(struct _KPRCB *a1)
{
  unsigned int Number; // r14d
  unsigned __int8 v3; // si
  char v4; // bp
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  Number = a1->Number;
  v3 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask, Number) )
  {
    v4 = 1;
    v5 = 3;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask, Number) )
    {
      v3 = 1;
      v5 = 2;
    }
  }
  KeTransitionProcessorParkState(a1, v5);
  v6 = a1->Number;
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx((__int64)&PpmParkForceParkingMask, v6);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, v6);
  v7 = a1->Number;
  if ( v3 )
    KeInterlockedSetProcessorAffinityEx((__int64)&PpmParkSoftParkingMask, v7);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, v7);
  LOBYTE(v8) = v4;
  a1->PowerState.SoftParked = v3;
  return PpmEventCoreParkingForceParkedStateChange(a1, v8);
}
