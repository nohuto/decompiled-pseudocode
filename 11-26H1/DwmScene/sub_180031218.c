/*
 * XREFs of sub_180031218 @ 0x180031218
 * Callers:
 *     sub_18002FBFC @ 0x18002FBFC (sub_18002FBFC.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 */

__int64 __fastcall sub_180031218(__int64 a1)
{
  *(_DWORD *)a1 = -8388609;
  *(_QWORD *)(a1 + 4) = 2139095039LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_18001E58C(a1 + 24, (__int64)&unk_1800FAA68);
  return a1;
}
