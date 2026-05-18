/*
 * XREFs of sub_180011B74 @ 0x180011B74
 * Callers:
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_180011BB8 @ 0x180011BB8 (sub_180011BB8.c)
 */

__int64 __fastcall sub_180011B74(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 16 )
  {
    sub_180011BB8(a1, a3, v4, i);
    a3 += 16LL;
  }
  sub_180011964(a3, a3);
  return a3;
}
