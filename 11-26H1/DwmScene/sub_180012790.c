/*
 * XREFs of sub_180012790 @ 0x180012790
 * Callers:
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 *     sub_18008F17C @ 0x18008F17C (sub_18008F17C.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012790(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
