/*
 * XREFs of sub_1800BB430 @ 0x1800BB430
 * Callers:
 *     sub_1800BE1E0 @ 0x1800BE1E0 (sub_1800BE1E0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800BAD6C @ 0x1800BAD6C (sub_1800BAD6C.c)
 */

_QWORD *__fastcall sub_1800BB430(_QWORD *lpMem, char a2)
{
  sub_1800BAD6C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
