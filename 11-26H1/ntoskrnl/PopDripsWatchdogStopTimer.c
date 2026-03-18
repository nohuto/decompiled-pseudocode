/*
 * XREFs of PopDripsWatchdogStopTimer @ 0x140B51AE8
 * Callers:
 *     PopDripsWatchdogStopWatchdog @ 0x140A3CCE0 (PopDripsWatchdogStopWatchdog.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 */

unsigned __int8 __fastcall PopDripsWatchdogStopTimer(__int64 a1)
{
  unsigned __int8 result; // al

  result = KeCancelTimer2(a1);
  if ( result )
    *(_DWORD *)(a1 + 180) &= ~2u;
  return result;
}
