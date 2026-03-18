/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140B86588
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140B7ABD0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140B7AC50 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140B7ACA0 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateMdl @ 0x140B7AEA0 (VerifierIoAllocateMdl.c)
 *     VerifierIoAllocateWorkItem @ 0x140B7AF60 (VerifierIoAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140B7B020 (VerifierIoSetCompletionRoutineEx.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B864B0 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B8F724 (VfRlrsKeInjectStatusAlerted.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140B8F7F0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140B90080 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140B90190 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140B90270 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140B90320 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140B903A0 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140B90410 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140B90500 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140B90540 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140B90620 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140B90720 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140B909B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140B90B60 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140B730FC (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B8667C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140B86C0C (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x140B86D84 (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  ULONG v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FFDFAC;
    return 0LL;
  }
  v3 = VfFaultInjectionProbability;
  v4 = VfFaultInjectionMaxProbability;
  if ( !VfFaultInjectionProbability
    || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
    || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
    || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
    || !(unsigned int)ViFaultsIsCurrentAppTarget() )
  {
    return 0LL;
  }
  if ( VfRandomGetNumber(0, v4) >= v3 )
  {
    ++dword_140FFDF9C;
    if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
      return 0LL;
    ++dword_140FFDFA0;
  }
  else
  {
    ++dword_140FFDF98;
  }
  ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  return 1LL;
}
