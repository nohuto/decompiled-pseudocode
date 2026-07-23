/*
 * XREFs of LdrpIsExecutableRelocatedImage @ 0x1800D9050
 * Callers:
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

_BOOL8 __fastcall LdrpIsExecutableRelocatedImage(PVOID BaseAddress)
{
  __int128 MemoryInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  OutHeaders = 0LL;
  MemoryInformation = 0LL;
  return RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders) >= 0
      && (PVOID)OutHeaders->OptionalHeader.ImageBase == BaseAddress
      && ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryImageInformation,
           &MemoryInformation,
           0x18uLL,
           0LL) >= 0
      && (PVOID)MemoryInformation == BaseAddress
      && (v4 & 2) == 0
      && (v4 & 1) == 0;
}
