/*
 * XREFs of EtwpInitializeCompression @ 0x1800647F0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x1800646A0 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  PVOID Heap_0; // rax
  int v4; // eax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  LODWORD(Size) = 0;
  RtlCompressWorkSpaceSizeXpressLz(0, &Size, &v6);
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  *(_QWORD *)(a1 + 416) = Heap_0;
  if ( !Heap_0 )
    return -1073741801;
  v4 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = 2 * v4;
  RegionSize = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 424), 0LL, &RegionSize, 0x1000u, 4u);
}
