/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x18007E120
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(__int64 a1, unsigned __int16 a2)
{
  char *Heap_0; // rax
  char *v5; // rsi
  const void *v6; // rdx

  if ( a2 <= *(_WORD *)(a1 + 432) )
    return 0LL;
  Heap_0 = (char *)RtlAllocateHeap_0();
  v5 = Heap_0;
  if ( Heap_0 )
  {
    *(Heap_0 - 1) = 1;
    v6 = *(const void **)(a1 + 424);
    if ( v6 )
    {
      memmove(Heap_0, v6, 2LL * *(unsigned __int16 *)(a1 + 432));
      RtlFreeHeap_0();
    }
    *(_QWORD *)(a1 + 424) = v5;
    *(_WORD *)(a1 + 432) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
