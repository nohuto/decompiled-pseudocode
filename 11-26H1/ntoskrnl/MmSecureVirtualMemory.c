/*
 * XREFs of MmSecureVirtualMemory @ 0x140AADF70
 * Callers:
 *     DifMmSecureVirtualMemoryWrapper @ 0x14066BF80 (DifMmSecureVirtualMemoryWrapper.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     AslpFileLargeMapCreate @ 0x140B6CF80 (AslpFileLargeMapCreate.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x14077A5F0 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  unsigned int v4; // r8d

  v4 = 4;
  if ( ProbeMode == 2 )
    v4 = 2;
  return (HANDLE)MmSecureVirtualMemoryEx((unsigned __int64)Address, Size, v4, 0);
}
