/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x18006C80C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(PVOID *HeapHandle, unsigned __int16 a2)
{
  char *Heap_0; // rax
  char *v5; // rsi
  PVOID v6; // rdx

  if ( a2 <= *((_WORD *)HeapHandle + 216) )
    return 0LL;
  Heap_0 = (char *)RtlAllocateHeap_0(HeapHandle, 0x80000Au, 2LL * a2);
  v5 = Heap_0;
  if ( Heap_0 )
  {
    *(Heap_0 - 1) = 1;
    v6 = HeapHandle[53];
    if ( v6 )
    {
      memmove(Heap_0, v6, 2LL * *((unsigned __int16 *)HeapHandle + 216));
      RtlFreeHeap_0(HeapHandle, 2u, HeapHandle[53]);
    }
    HeapHandle[53] = v5;
    *((_WORD *)HeapHandle + 216) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
