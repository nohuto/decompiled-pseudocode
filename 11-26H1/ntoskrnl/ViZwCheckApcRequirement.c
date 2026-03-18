/*
 * XREFs of ViZwCheckApcRequirement @ 0x140C330B8
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140C32880 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140C32CE0 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140C32D50 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140C32F30 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    return CarReportRuleViolationFromNt(196, 230LL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable, 8u, a1);
  result = KeAreAllApcsDisabled();
  if ( result )
    return CarReportRuleViolationFromNt(196, 230LL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable, 8u, a1);
  return result;
}
