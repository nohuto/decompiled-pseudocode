/*
 * XREFs of MmSecureVirtualMemory @ 0x140AB0320
 * Callers:
 *     DifMmSecureVirtualMemoryWrapper @ 0x1406683A0 (DifMmSecureVirtualMemoryWrapper.c)
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     AslpFileLargeMapCreate @ 0x1409E2CD8 (AslpFileLargeMapCreate.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x140777750 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  unsigned int v4; // r8d

  v4 = 4;
  if ( ProbeMode == 2 )
    v4 = 2;
  return (HANDLE)MmSecureVirtualMemoryEx((unsigned __int64)Address, Size, v4, 0);
}
