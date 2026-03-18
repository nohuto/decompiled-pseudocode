/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x140B3DCE4
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)stru_140FC01F0.KernelStack >> 36) & 0xF) == 6;
}
