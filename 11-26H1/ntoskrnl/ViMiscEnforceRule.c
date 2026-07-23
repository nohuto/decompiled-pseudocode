/*
 * XREFs of ViMiscEnforceRule @ 0x140C44440
 * Callers:
 *     VfMiscMmAllocateContiguousMemoryEx_Entry @ 0x140C430A0 (VfMiscMmAllocateContiguousMemoryEx_Entry.c)
 *     VfMiscMmAllocateContiguousMemory_Entry @ 0x140C430D0 (VfMiscMmAllocateContiguousMemory_Entry.c)
 * Callees:
 *     VfUtilIsSignedDriver @ 0x1406443D8 (VfUtilIsSignedDriver.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall ViMiscEnforceRule(__int64 a1, __int64 a2, char a3)
{
  if ( (VfRuleClasses & 0x400000) != 0 || !VfUtilIsSignedDriver() )
  {
    if ( a3 )
      CarReportRuleViolationFromNt(196, 139LL, 0LL, 0LL, 0LL, 0xBu, a2);
  }
}
