/*
 * XREFs of MiReferenceVad @ 0x14027DE00
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AED468 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140B42284 (MiDeleteInsertedCloneVads.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiReferenceVad(ULONG_PTR BugCheckParameter2)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 36)) )
    KeBugCheckEx(0x1Au, 0x41203uLL, BugCheckParameter2, 0LL, 0LL);
}
