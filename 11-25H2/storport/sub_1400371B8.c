/*
 * XREFs of sub_1400371B8 @ 0x1400371B8
 * Callers:
 *     sub_140195B08 @ 0x140195B08 (sub_140195B08.c)
 *     sub_140196ED8 @ 0x140196ED8 (sub_140196ED8.c)
 *     sub_1401B02E0 @ 0x1401B02E0 (sub_1401B02E0.c)
 * Callees:
 *     sub_1400371F4 @ 0x1400371F4 (sub_1400371F4.c)
 */

__int64 __fastcall sub_1400371B8(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return sub_1400371F4(a1, v3, a3, a3);
  result = 3221225485LL;
  if ( v3 )
    *a1 = 0;
  return result;
}
