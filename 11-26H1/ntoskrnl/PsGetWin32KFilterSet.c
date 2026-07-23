/*
 * XREFs of PsGetWin32KFilterSet @ 0x14047A100
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[3].PerProcessorCycleTimes);
}
