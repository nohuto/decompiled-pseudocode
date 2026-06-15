/*
 * XREFs of sub_140077D64 @ 0x140077D64
 * Callers:
 *     sub_140077E10 @ 0x140077E10 (sub_140077E10.c)
 *     sub_1400784A0 @ 0x1400784A0 (sub_1400784A0.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14007EDC4 @ 0x14007EDC4 (sub_14007EDC4.c)
 */

__int64 __fastcall sub_140077D64(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BDDE8;
  if ( !*(_DWORD *)(a1 + 16) )
    sub_14007EDC4();
  sub_1400125D4((__int64 *)(a1 + 48));
  return sub_1400125D4((__int64 *)(a1 + 24));
}
