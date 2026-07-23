/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914
 * Callers:
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x14087B208 (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x14087DF90 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmIsFileMapped @ 0x1409BCA98 (MmIsFileMapped.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140A08CA0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 *     MiDeleteVadLargePageEvent @ 0x140B40A90 (MiDeleteVadLargePageEvent.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  LegacyAutoBoost *v6; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v4 = (signed __int64 *)(a2 + 600);
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 600, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v6, (struct _KTHREAD *)v4);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  result = *(_DWORD *)(a1 + 1448) | 2u;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
