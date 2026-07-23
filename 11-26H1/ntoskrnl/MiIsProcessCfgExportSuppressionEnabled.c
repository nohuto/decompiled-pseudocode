/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14077F558
 * Callers:
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AA2AB4 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1392LL) && (*(_DWORD *)(a1 + 1872) & 2) != 0;
}
