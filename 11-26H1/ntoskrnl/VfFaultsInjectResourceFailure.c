/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140C347B4
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140C287C0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140C28840 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140C28890 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateMdl @ 0x140C28AA0 (VerifierIoAllocateMdl.c)
 *     VerifierIoAllocateWorkItem @ 0x140C28B60 (VerifierIoAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140C28C20 (VerifierIoSetCompletionRoutineEx.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C346E4 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140C3E514 (VfRlrsKeInjectStatusAlerted.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140C3E5E0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140C3EE70 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140C3EF80 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140C3F060 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140C3F110 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140C3F190 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140C3F200 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140C3F2F0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140C3F330 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140C3F410 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140C3F510 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140C3F7A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C3F950 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfRandomGetNumber @ 0x140C215A4 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140C34908 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140C34E94 (ViFaultsInjectionNotification.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  ULONG v3; // esi
  unsigned int v4; // ebp
  KIRQL v5; // al
  BOOL v6; // ebx

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FF1964;
    return 0LL;
  }
  v3 = VfFaultInjectionProbability;
  v4 = VfFaultInjectionMaxProbability;
  if ( !VfFaultInjectionProbability
    || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
    || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
    || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs )
  {
    return 0LL;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v6 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v5);
  if ( !v6 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) == 0 )
    {
      ++dword_140FF1948;
      return 0LL;
    }
    ++dword_140FF194C;
  }
  if ( VfRandomGetNumber(0, v4) >= v3 )
  {
    ++dword_140FF1954;
    if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
      return 0LL;
    ++dword_140FF1958;
  }
  else
  {
    ++dword_140FF1950;
  }
  ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  return 1LL;
}
