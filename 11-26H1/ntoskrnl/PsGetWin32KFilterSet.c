/*
 * XREFs of PsGetWin32KFilterSet @ 0x1404807C0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[3].PerProcessorCycleTimes);
}
