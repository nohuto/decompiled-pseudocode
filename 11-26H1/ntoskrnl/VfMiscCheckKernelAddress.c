/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1404F67A8
 * Callers:
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C3A050 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C3A30C (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140C42B80 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C42BE0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C42C50 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140C42CE0 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140C42D20 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140C42DF0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140C42F10 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140C42F70 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140C42FA0 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C42FF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140C43490 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140C43570 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140C435A0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140C43600 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140C4D190 (ViMiscCheckReleaseSpinlock.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140C4E080 (VfMiscObfDereferenceObject_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfMiscCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = BugCheckParameter2 + BugCheckParameter3;
  if ( BugCheckParameter2 + BugCheckParameter3 <= BugCheckParameter2 )
  {
    if ( !BugCheckParameter3 )
    {
      result = 0x7FFFFFFF0000LL;
      if ( v3 < 0x7FFFFFFF0000LL )
        return CarReportRuleViolationFromNt(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL, 11, a3);
    }
  }
  else
  {
    result = 0x7FFFFFFF0000LL;
    if ( v3 <= 0x7FFFFFFF0000LL )
      return CarReportRuleViolationFromNt(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL, 11, a3);
  }
  return result;
}
