/*
 * XREFs of sub_14004C7F4 @ 0x14004C7F4
 * Callers:
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 * Callees:
 *     sub_140047AFC @ 0x140047AFC (sub_140047AFC.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

unsigned __int64 __fastcall sub_14004C7F4(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    sub_140047AFC();
  v2 = sub_1400492F4(a1 + 39, a2);
  v3 = v2;
  if ( !v2 )
    invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  result = (v2 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v3;
  return result;
}
