/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x140610EB0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x1405E6280 (KdCallPowerHandlers.c)
 */

__int64 __fastcall PopFxDebuggerPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  if ( PopAutomaticDebuggerTransitions )
    PopFxBugCheck(0x61EuLL, 0LL, 0LL, 0LL);
  if ( a3 )
  {
    KdCallPowerHandlers(1u);
    return KdPowerTransitionEx(-2147483647, 1);
  }
  else
  {
    KdPowerTransitionEx(-2147483644, 1);
    return KdCallPowerHandlers(4u);
  }
}
