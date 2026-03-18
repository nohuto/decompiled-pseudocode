/*
 * XREFs of CddEngGetRgnData @ 0x1401FBA30
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401FB7FC (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 */

__int64 __fastcall CddEngGetRgnData(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  return GrepGetRegionData<0,RGNCOREOBJ>((RGNCOREOBJ *)&v4, a2, a3);
}
