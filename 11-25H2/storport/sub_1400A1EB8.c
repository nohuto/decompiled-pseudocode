/*
 * XREFs of sub_1400A1EB8 @ 0x1400A1EB8
 * Callers:
 *     sub_14009EB0C @ 0x14009EB0C (sub_14009EB0C.c)
 *     sub_14017CD1C @ 0x14017CD1C (sub_14017CD1C.c)
 * Callees:
 *     sub_14017BD1C @ 0x14017BD1C (sub_14017BD1C.c)
 */

__int64 __fastcall sub_1400A1EB8(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (a1[3] & 4) != 0 )
    v2 = a1[6];
  else
    v2 = *a1;
  if ( !v2 )
    return 3221225485LL;
  sub_14017BD1C(a2, 9LL, v2 + 8);
  return 0LL;
}
