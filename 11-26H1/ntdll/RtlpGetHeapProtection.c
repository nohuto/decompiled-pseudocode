/*
 * XREFs of RtlpGetHeapProtection @ 0x180076AF0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18006D468 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009554C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *BaseAddress, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  v2 = 64;
  v3 = BaseAddress[28] & 0x40000;
  if ( !v3 )
    v2 = 4;
  if ( a2 )
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v7 = 0LL;
    if ( v3 )
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0
        || (BYTE4(v7) & 0x60) == 0
        || *(_DWORD **)&MemoryInformation[0] != BaseAddress )
      {
        RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, DWORD1(v7), 0LL, 0LL);
        return 4;
      }
    }
  }
  return v2;
}
