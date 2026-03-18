/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1407E64BC (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A9CC88 (MiFreeLargePageView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~2u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
