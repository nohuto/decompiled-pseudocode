/*
 * XREFs of PpmParkReportSoftParkChange @ 0x140420608
 * Callers:
 *     PpmPerfAction @ 0x140254C00 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140421B1C (PpmEventCoreParkingSoftParkedStateChange.c)
 */

__int64 __fastcall PpmParkReportSoftParkChange(struct _KPRCB *a1)
{
  unsigned int Number; // r14d
  char v3; // bp
  unsigned __int8 v4; // si
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx

  Number = a1->Number;
  v3 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask, Number) )
  {
    v4 = 1;
    v5 = 2;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask, Number) )
    {
      v3 = 1;
      v5 = 3;
    }
  }
  KeTransitionProcessorParkState(a1, v5);
  v7 = a1->Number;
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, v7, v6);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, v7);
  v9 = a1->Number;
  if ( v3 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, v9, v8);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, v9);
  LOBYTE(v10) = v4;
  a1->PowerState.SoftParked = v4;
  PpmEventCoreParkingSoftParkedStateChange(a1, v10);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
