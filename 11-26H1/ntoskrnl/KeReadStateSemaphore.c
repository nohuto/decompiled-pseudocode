/*
 * XREFs of KeReadStateSemaphore @ 0x140479F40
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140564940 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140564B44 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140564D48 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
