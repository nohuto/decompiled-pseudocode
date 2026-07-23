/*
 * XREFs of MiWalkImageMakePageHot @ 0x14070A330
 * Callers:
 *     <none>
 * Callees:
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x140B61CD0 (MiWalkEntireImagePageNeedsProcessing.c)
 */

__int64 __fastcall MiWalkImageMakePageHot(__int64 a1)
{
  _DWORD **v2; // rdi

  if ( *(_BYTE *)(a1 + 32) )
  {
    v2 = *(_DWORD ***)(a1 + 40);
    if ( (unsigned int)MiWalkEntireImagePageNeedsProcessing(
                         *(_QWORD *)(**(_QWORD **)a1 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL,
                         *(unsigned int *)(a1 + 16)) )
    {
      MiAddPageToHeatList(*v2, *(_QWORD *)(a1 + 24), 3LL);
      *(_DWORD *)(a1 + 48) |= 1u;
    }
  }
  return 0LL;
}
