/*
 * XREFs of HalpDmaIsThinDmarCapable @ 0x14058B74C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmarCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 520) == 3 && *(_BYTE *)(a1 + 445) && *(_BYTE *)(a1 + 441) && *(_BYTE *)(a1 + 442) != 0;
}
