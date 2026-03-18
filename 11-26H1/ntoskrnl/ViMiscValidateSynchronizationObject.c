/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140C20518
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140C3C910 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140C3C9A0 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140C3CA10 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140C3CD50 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140C3CD80 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140C3CDB0 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C46EAC (ViMiscValidateKeWaitUsage.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140C480A0 (VfMiscKeInitializeEvent_Entry.c)
 * Callees:
 *     MmIsNonPagedSystemAddressValid @ 0x1404F7010 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
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
