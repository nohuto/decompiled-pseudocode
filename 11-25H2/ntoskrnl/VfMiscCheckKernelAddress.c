/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1404B11E4
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x140609050 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B85EB0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B860E0 (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B8DB30 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B8DB90 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B8DC00 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140B8DC90 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140B8DCD0 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140B8DDD0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140B8DEE0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140B8DF40 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140B8DF70 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140B8DFA0 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B8DFF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140B8E4A0 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140B8E580 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140B8E5B0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140B8E610 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B8F6C8 (ViMiscValidateSynchronizationObject.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140B98170 (ViMiscCheckReleaseSpinlock.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

unsigned __int64 __fastcall VfMiscCheckKernelAddress(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  unsigned __int64 result; // rax

  result = BugCheckParameter2 + BugCheckParameter3 - 1;
  if ( !BugCheckParameter3 )
    result = BugCheckParameter2;
  if ( result >= BugCheckParameter2 )
  {
    result = BugCheckParameter3 + BugCheckParameter2 - 1;
    if ( !BugCheckParameter3 )
      result = BugCheckParameter2;
    if ( result <= 0x7FFFFFFEFFFFLL )
      return CarReportRuleViolationFromNt(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL, 11, a3);
  }
  return result;
}
