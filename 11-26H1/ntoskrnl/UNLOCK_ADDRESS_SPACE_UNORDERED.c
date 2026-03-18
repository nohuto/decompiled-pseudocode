/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540
 * Callers:
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 *     MiDeleteFinalPageTables @ 0x1404CE05C (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeVirtualMemory @ 0x14095F790 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiInsertProcessVads @ 0x140962720 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140963088 (MiInitializeVadBitMap.c)
 *     MiInitializeVadCellBitMap @ 0x140963190 (MiInitializeVadCellBitMap.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MiPrepareVadDelete @ 0x140A8F52C (MiPrepareVadDelete.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 600), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 600);
  KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
