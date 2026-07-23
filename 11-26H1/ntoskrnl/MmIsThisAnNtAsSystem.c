/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1404E02A0
 * Callers:
 *     CcInitializeProcessor @ 0x14078CBAC (CcInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140796B38 (IopQueryProcessorInitValues.c)
 *     ObInitializeProcessor @ 0x1407C54F4 (ObInitializeProcessor.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140FBF22C;
}
