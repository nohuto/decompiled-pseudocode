/*
 * XREFs of IoFlushAdapterBuffersV3 @ 0x14058E180
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFlushContiguousTransferV3 @ 0x140436D4C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaControllerFlushChannel @ 0x140437C44 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140438E00 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x14057B268 (HalpDmaFreeLa.c)
 */

char __fastcall IoFlushAdapterBuffersV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 520) == 3 )
    {
      if ( *(_BYTE *)(a3 + 64) )
        *(_DWORD *)(a3 + 16) = 0;
      else
        HalpDmaFreeLa(a1, (__int64 *)(a3 + 24));
    }
    if ( !*(_BYTE *)(a1 + 441) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(_DWORD *)(a1 + 380));
    if ( *(_BYTE *)(a1 + 440) )
    {
      if ( a3 )
        *(_QWORD *)(a3 + 56) = a3;
      if ( *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
      else
        HalpDmaFlushContiguousTransferV3(a1, a2, a3, a4, a5, a6, 0, 0LL);
    }
  }
  return 1;
}
