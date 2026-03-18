/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405079A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeCancel()
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&stru_140F0F620.WaitBlockFill11[64], Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&stru_140F0F620.WaitBlock[2]) )
      return KeSetEvent((PRKEVENT)&stru_140F0F620.WaitBlockFill11[64], 0, 0);
    else
      return KeWaitForSingleObject(&stru_140F0F620.WaitBlockFill11[64], Executive, 0, 0, 0LL);
  }
  return result;
}
