/*
 * XREFs of sub_18002CE5C @ 0x18002CE5C
 * Callers:
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

_QWORD *__fastcall sub_18002CE5C(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180011CC4(a1, "Integer Result Code");
  sub_18001D260((__int64)(a1 + 4), a3);
  return a1;
}
