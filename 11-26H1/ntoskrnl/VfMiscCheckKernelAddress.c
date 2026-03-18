/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1404FD268
 * Callers:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C34040 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C342FC (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140C3CB70 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C3CBD0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C3CC40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140C3CCD0 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140C3CD10 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140C3CDE0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140C3CF00 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140C3CF60 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140C3CF90 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C3CFE0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140C3D480 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140C3D560 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140C3D590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140C3D5F0 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140C47180 (ViMiscCheckReleaseSpinlock.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140C48070 (VfMiscObfDereferenceObject_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
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
