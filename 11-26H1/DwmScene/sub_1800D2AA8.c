/*
 * XREFs of sub_1800D2AA8 @ 0x1800D2AA8
 * Callers:
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 * Callees:
 *     sub_1800D2B1C @ 0x1800D2B1C (sub_1800D2B1C.c)
 */

__int64 __fastcall sub_1800D2AA8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800D2B1C(v2 + 32);
  return sub_1800D2950(a1);
}
