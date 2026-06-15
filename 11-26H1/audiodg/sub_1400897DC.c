/*
 * XREFs of sub_1400897DC @ 0x1400897DC
 * Callers:
 *     sub_14008980C @ 0x14008980C (sub_14008980C.c)
 *     sub_1400898D0 @ 0x1400898D0 (sub_1400898D0.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_1400897DC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 < 0 )
    sub_14001DBF0(2 * v2);
  return sub_140089834(a1 + 8);
}
