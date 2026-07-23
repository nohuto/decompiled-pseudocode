/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x140B3FDC4
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)stru_140FC11F0.KernelStack >> 36) & 0xF) == 6;
}
