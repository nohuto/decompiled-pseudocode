/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x1404EF1D4
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140C37578 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
