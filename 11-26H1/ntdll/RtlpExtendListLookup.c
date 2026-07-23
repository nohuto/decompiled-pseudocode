/*
 * XREFs of RtlpExtendListLookup @ 0x18006CE74
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 */

void __fastcall RtlpExtendListLookup(__int64 *HeapHandle, __int64 a2)
{
  unsigned __int64 v4; // rbp
  _DWORD *Heap_0; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    Heap_0 = RtlAllocateHeap_0(HeapHandle, 0x80000Au, v4 * (*(_DWORD *)(a2 + 12) != 0 ? 16LL : 8LL) + (v4 >> 3) + 56);
    if ( Heap_0 )
    {
      *((_BYTE *)Heap_0 - 1) = 1;
      Heap_0[2] = v4 + *(_DWORD *)(a2 + 8);
      Heap_0[6] = *(_DWORD *)(a2 + 8);
      Heap_0[3] = *(_DWORD *)(a2 + 12);
      *((_QWORD *)Heap_0 + 5) = Heap_0 + 14;
      *((_QWORD *)Heap_0 + 6) = (char *)Heap_0 + (v4 >> 3) + 56;
      *((_QWORD *)Heap_0 + 4) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap_0;
      RtlpPopulateListIndex((unsigned __int64)HeapHandle, HeapHandle[39]);
    }
  }
}
