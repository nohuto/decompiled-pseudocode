/*
 * XREFs of KdPowerTransition @ 0x14052B940
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14050A220 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
