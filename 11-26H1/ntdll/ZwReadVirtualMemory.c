/*
 * XREFs of ZwReadVirtualMemory @ 0x18015F620
 * Callers:
 *     RtlpQueryCriticalSectionOwner32 @ 0x180073E88 (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x180073F44 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800758F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspCaptureImageInformation @ 0x1800B443C (PsspCaptureImageInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800D46A0 (RtlpQueryReadVirtualMemory.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D57A0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800E9000 (RtlWow64GetSharedInfoProcess.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F160 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
