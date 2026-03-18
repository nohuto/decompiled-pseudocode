/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1404E6E00
 * Callers:
 *     CcInitializeProcessor @ 0x14078A07C (CcInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140794008 (IopQueryProcessorInitValues.c)
 *     ObInitializeProcessor @ 0x1407C2494 (ObInitializeProcessor.c)
 *     PsChangeQuantumTable @ 0x140966954 (PsChangeQuantumTable.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140FBE22C;
}
