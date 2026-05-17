/*
 * XREFs of EtwpInitializeCompression @ 0x180075FD0
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x180075E80 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap_0; // rax
  int v4; // eax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  RtlCompressWorkSpaceSizeXpressLz(0, &v5, &v6);
  Heap_0 = RtlAllocateHeap_0();
  *(_QWORD *)(a1 + 416) = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  v4 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = 2 * v4;
  v7 = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory(-1LL, a1 + 424, 0LL, &v7, 4096, 4);
}
