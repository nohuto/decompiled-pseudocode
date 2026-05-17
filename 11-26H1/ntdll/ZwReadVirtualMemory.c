/*
 * XREFs of ZwReadVirtualMemory @ 0x18015F720
 * Callers:
 *     RtlpQueryCriticalSectionOwner32 @ 0x18008F3CC (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x18008F488 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x180090B90 (RtlQueryCriticalSectionOwner.c)
 *     PsspCaptureImageInformation @ 0x1800B6F1C (PsspCaptureImageInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800D76E0 (RtlpQueryReadVirtualMemory.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800E9DF0 (RtlWow64GetSharedInfoProcess.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F5D0 (PssNtFreeRemoteSnapshot.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
