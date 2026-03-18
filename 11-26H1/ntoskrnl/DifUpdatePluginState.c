/*
 * XREFs of DifUpdatePluginState @ 0x14064BFA4
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmManagePartitionMemoryInformation @ 0x140AB9F38 (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset_0(&DifpSPMemoryInfo, 0, 0xF8uLL);
    dword_140E282C4 = -1;
    dword_140E282C8 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo, 248LL, 0LL);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140E282F8;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140E282F8
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
