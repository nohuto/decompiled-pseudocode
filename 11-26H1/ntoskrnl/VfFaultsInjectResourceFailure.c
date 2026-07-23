/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140C3A7C4
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140C2E7D0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140C2E850 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140C2E8A0 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateMdl @ 0x140C2EAB0 (VerifierIoAllocateMdl.c)
 *     VerifierIoAllocateWorkItem @ 0x140C2EB70 (VerifierIoAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140C2EC30 (VerifierIoSetCompletionRoutineEx.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140C44524 (VfRlrsKeInjectStatusAlerted.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140C445F0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140C44E80 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140C44F90 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140C45070 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140C45120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140C451A0 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140C45210 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140C45300 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140C45340 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140C45420 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140C45520 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140C457B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C45960 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfRandomGetNumber @ 0x140C275B4 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140C3A918 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140C3AEA4 (ViFaultsInjectionNotification.c)
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
    ++dword_140FF2964;
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
      ++dword_140FF2948;
      return 0LL;
    }
    ++dword_140FF294C;
  }
  if ( VfRandomGetNumber(0, v4) >= v3 )
  {
    ++dword_140FF2954;
    if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
      return 0LL;
    ++dword_140FF2958;
  }
  else
  {
    ++dword_140FF2950;
  }
  ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  return 1LL;
}
