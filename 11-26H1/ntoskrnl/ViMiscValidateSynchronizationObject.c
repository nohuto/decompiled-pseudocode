/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140C26524
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140C42920 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140C429B0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140C42A20 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140C42D60 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140C42D90 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140C42DC0 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C4CEBC (ViMiscValidateKeWaitUsage.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140C4E0B0 (VfMiscKeInitializeEvent_Entry.c)
 * Callees:
 *     MmIsNonPagedSystemAddressValid @ 0x1404F0620 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1404F67A8 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall ViMiscValidateSynchronizationObject(PVOID VirtualAddress, ULONG_PTR a2, __int64 a3)
{
  BOOLEAN result; // al

  VfMiscCheckKernelAddress((ULONG_PTR)VirtualAddress, a2, a3);
  result = MmIsNonPagedSystemAddressValid(VirtualAddress);
  if ( !result )
    return CarReportRuleViolationFromNt(0xC4u, 0xE1uLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL, 11, a3);
  return result;
}
