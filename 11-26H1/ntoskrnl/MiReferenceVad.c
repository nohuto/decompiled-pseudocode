/*
 * XREFs of MiReferenceVad @ 0x14027E890
 * Callers:
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AEA978 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140B40254 (MiDeleteInsertedCloneVads.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall MiReferenceVad(ULONG_PTR BugCheckParameter2)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 36)) )
    KeBugCheckEx(0x1Au, 0x41203uLL, BugCheckParameter2, 0LL, 0LL);
}
