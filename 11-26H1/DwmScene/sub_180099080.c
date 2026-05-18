/*
 * XREFs of sub_180099080 @ 0x180099080
 * Callers:
 *     sub_1800983A0 @ 0x1800983A0 (sub_1800983A0.c)
 * Callees:
 *     sub_180098FF8 @ 0x180098FF8 (sub_180098FF8.c)
 */

__int64 __fastcall sub_180099080(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    result = a1[4];
    if ( !result )
      break;
    v2 = result - 1;
    a1[4] = v2;
    if ( !v2 )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    return sub_180098FF8((__int64)a1);
  return result;
}
