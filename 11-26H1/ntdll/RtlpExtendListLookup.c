/*
 * XREFs of RtlpExtendListLookup @ 0x18007DDA4
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpPopulateListIndex @ 0x18007E1BC (RtlpPopulateListIndex.c)
 */

void __fastcall RtlpExtendListLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 Heap_0; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      *(_BYTE *)(Heap_0 - 1) = 1;
      *(_DWORD *)(Heap_0 + 8) = v4 + *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap_0 + 24) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap_0 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(Heap_0 + 40) = Heap_0 + 56;
      *(_QWORD *)(Heap_0 + 48) = Heap_0 + ((unsigned __int64)v4 >> 3) + 56;
      *(_QWORD *)(Heap_0 + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap_0;
      RtlpPopulateListIndex(a1, *(_QWORD *)(a1 + 312));
    }
  }
}
