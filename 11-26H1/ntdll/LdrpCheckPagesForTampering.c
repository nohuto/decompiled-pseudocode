/*
 * XREFs of LdrpCheckPagesForTampering @ 0x180108054
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrpCheckPagesForTampering(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 Heap_0; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int i; // ecx

  v2 = 0;
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Heap_0 = RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 1;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      *(_QWORD *)(Heap_0 + 16 * v7) = v3;
      v3 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v4 );
  }
  if ( (int)ZwQueryVirtualMemory(-1LL, 0LL, 4LL, Heap_0, 16 * v4, 0LL) < 0 )
  {
LABEL_11:
    v2 = 1;
  }
  else
  {
    for ( i = 0; i < v4; ++i )
    {
      if ( (*(_DWORD *)(Heap_0 + 16LL * i + 8) & 0x40000000) == 0 )
        goto LABEL_11;
    }
  }
  RtlFreeHeap_0();
  return v2;
}
