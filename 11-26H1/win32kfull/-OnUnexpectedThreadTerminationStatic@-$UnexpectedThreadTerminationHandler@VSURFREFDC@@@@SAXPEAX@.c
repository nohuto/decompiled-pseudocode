/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x14031D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFACE **a1)
{
  SURFREFDC::vUnlock(a1);
}
