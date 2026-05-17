/*
 * XREFs of RtlGetSuiteMask @ 0x180063C60
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800D424C (RtlpHpOptIntoSegmentHeap.c)
 *     RtlQueryResourcePolicy @ 0x18010F510 (RtlQueryResourcePolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180144F80 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18015AD30 (RtlpQueryDiskSpeedPolicy.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetSuiteMask()
{
  _DWORD *SharedData; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
