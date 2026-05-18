/*
 * XREFs of sub_180012F84 @ 0x180012F84
 * Callers:
 *     sub_180038320 @ 0x180038320 (sub_180038320.c)
 * Callees:
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 */

__int64 __fastcall sub_180012F84(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_18001323C(*a2);
  return sub_180011790(v2);
}
