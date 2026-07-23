/*
 * XREFs of FopFreeMappingTable @ 0x140C57C94
 * Callers:
 *     FopFreeFontData @ 0x140C57BE8 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140D1A17C (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
