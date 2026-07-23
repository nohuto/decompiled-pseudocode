/*
 * XREFs of PopFxIsDirectedPowerTransitionSupported @ 0x14050C900
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFxIsDirectedPowerTransitionSupported(__int64 a1, int *a2)
{
  int v2; // r8d
  char result; // al

  v2 = 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x900) == 0x100 )
  {
    result = 0;
    v2 = 2;
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x20) != 0 )
  {
    result = 1;
  }
  else
  {
    result = 0;
    v2 = 1;
  }
  if ( a2 )
    *a2 = v2;
  return result;
}
