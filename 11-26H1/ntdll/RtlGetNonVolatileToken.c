/*
 * XREFs of RtlGetNonVolatileToken @ 0x180147260
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

DWORD __cdecl RtlGetNonVolatileToken(PVOID NvBuffer, SIZE_T Size, PVOID *NvToken)
{
  __int64 v4; // rbx
  DWORD result; // eax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  ReturnLength = 0LL;
  memset(MemoryInformation, 0, 48);
  v4 = 1LL;
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             NvBuffer,
             MemoryRegionInformationEx,
             MemoryInformation,
             0x30uLL,
             &ReturnLength);
  if ( (result & 0x80000000) == 0 )
  {
    if ( (MemoryInformation[12] & 0x20) != 0 )
    {
      if ( RtlpIsFlushRequired )
        v4 = 3LL;
      result = 0;
      *NvToken = (PVOID)v4;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
