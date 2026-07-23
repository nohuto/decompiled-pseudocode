/*
 * XREFs of LdrpCheckPagesForTampering @ 0x180107A54
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrpCheckPagesForTampering(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  _QWORD *Heap_0; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int i; // ecx

  v2 = 0;
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Heap_0 = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 16 * v4);
  if ( !Heap_0 )
    return 1;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      Heap_0[2 * v7] = v3;
      v3 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v4 );
  }
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, Heap_0, 16 * v4, 0LL) < 0 )
  {
LABEL_11:
    v2 = 1;
  }
  else
  {
    for ( i = 0; i < v4; ++i )
    {
      if ( (Heap_0[2 * i + 1] & 0x40000000) == 0 )
        goto LABEL_11;
    }
  }
  RtlFreeHeap_0(LdrpHeap, 0, Heap_0);
  return v2;
}
