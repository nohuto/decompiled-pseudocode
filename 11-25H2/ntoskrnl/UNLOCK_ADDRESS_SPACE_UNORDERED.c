/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1407E9B10 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x140905110 (MiInsertProcessVads.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x140A22310 (MiPrepareVadDelete.c)
 *     MiInitializeVadCellBitMap @ 0x140A31F5C (MiInitializeVadCellBitMap.c)
 *     MiInitializeVadBitMap @ 0x140A35738 (MiInitializeVadBitMap.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 600), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 600);
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return result;
}
