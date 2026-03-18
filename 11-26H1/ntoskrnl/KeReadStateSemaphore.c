/*
 * XREFs of KeReadStateSemaphore @ 0x140480600
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140562430 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BC154 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
