/*
 * XREFs of sub_18001EA3C @ 0x18001EA3C
 * Callers:
 *     sub_180027324 @ 0x180027324 (sub_180027324.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 * Callees:
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 */

__int64 __fastcall sub_18001EA3C(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18001EB8C(*a2);
  return sub_180011790(v2);
}
