/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140405820
 * Callers:
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140874E24 (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x140877BB0 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateLargePageEvent @ 0x140B3C9EC (MiCreateLargePageEvent.c)
 *     MiDeleteVadLargePageEvent @ 0x140B3EA60 (MiDeleteVadLargePageEvent.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
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
