/*
 * XREFs of sub_180048794 @ 0x180048794
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     sub_180085950 @ 0x180085950 (sub_180085950.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180048794(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
