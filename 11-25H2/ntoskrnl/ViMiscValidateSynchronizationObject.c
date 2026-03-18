/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140B8F6C8
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140B8D8D0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B8D960 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140B8D9D0 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140B8DD10 (VfMiscKeInitializeEvent_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140B8DD40 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140B8DD70 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140B8DDA0 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B8F584 (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     MmIsNonPagedSystemAddressValid @ 0x1404ABE70 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall ViMiscValidateSynchronizationObject(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  BOOLEAN result; // al

  VfMiscCheckKernelAddress(BugCheckParameter2, a2, a3);
  result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
  if ( !result )
    return CarReportRuleViolationFromNt(196, 225LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a3);
  return result;
}
