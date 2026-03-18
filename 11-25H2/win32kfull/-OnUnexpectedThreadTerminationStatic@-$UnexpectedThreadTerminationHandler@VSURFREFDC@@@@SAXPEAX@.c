/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1403318B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400D78E8 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFREFDC *a1)
{
  SURFREFDC::vUnlock(a1);
}
