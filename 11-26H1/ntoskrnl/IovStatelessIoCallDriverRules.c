/*
 * XREFs of IovStatelessIoCallDriverRules @ 0x140C30AEC
 * Callers:
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     IovCheckAddressForIrp @ 0x140C308F0 (IovCheckAddressForIrp.c)
 *     IovValidateDeviceObject @ 0x140C30C5C (IovValidateDeviceObject.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall IovStatelessIoCallDriverRules(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rdx
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    CarReportRuleViolationFromNt(0xC9u, 0x10uLL, CurrentIrql, 0LL, 0LL, 4, a3);
  if ( *(_WORD *)BugCheckParameter2 != 6 )
    CarReportRuleViolationFromNt(0xC9u, 3uLL, BugCheckParameter2, 0LL, 0LL, 4, a3);
  if ( !(unsigned __int8)IovValidateDeviceObject(a2) )
    CarReportRuleViolationFromNt(0xC9u, 4uLL, a2, 0LL, 0LL, 4, a3);
  v7 = *(_QWORD *)(BugCheckParameter2 + 184);
  if ( !*(_BYTE *)(v7 - 72) )
  {
    v8 = *(_QWORD *)(v7 - 24);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 80) & 0x204000) == 0x204000 )
        CarReportRuleViolationFromNt(0xC9u, 0xFuLL, a2, BugCheckParameter2, v8, 4, a3);
    }
  }
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(0xC4u, 0xC0uLL, BugCheckParameter2, 0LL, 0LL, 4, a3);
  if ( !*(_BYTE *)(BugCheckParameter2 + 64) && !*(_QWORD *)(BugCheckParameter2 + 8) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x10) != 0 )
      v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    else
      v9 = *(_QWORD *)(BugCheckParameter2 + 112);
    IovCheckAddressForIrp(BugCheckParameter2, v9, a3);
  }
}
