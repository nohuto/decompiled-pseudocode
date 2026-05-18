/*
 * XREFs of sub_180099F74 @ 0x180099F74
 * Callers:
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 *     sub_1800DE779 @ 0x1800DE779 (sub_1800DE779.c)
 * Callees:
 *     sub_1800983DC @ 0x1800983DC (sub_1800983DC.c)
 */

__int64 __fastcall sub_180099F74(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800983DC(v2 + 32);
  return sub_180099F20(a1);
}
