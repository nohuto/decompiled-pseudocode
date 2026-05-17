/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x180102F6C
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     EtwpInsertGuidEntry @ 0x180102FDC (EtwpInsertGuidEntry.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap_0; // rax
  char *v3; // rbx

  Heap_0 = (char *)RtlAllocateHeap_0();
  v3 = Heap_0;
  if ( Heap_0 )
  {
    memset_thunk_772440563353939046(Heap_0, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
