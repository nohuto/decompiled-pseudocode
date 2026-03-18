/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14077CA64
 * Callers:
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AA0FF0 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1392LL) && (*(_DWORD *)(a1 + 1872) & 2) != 0;
}
