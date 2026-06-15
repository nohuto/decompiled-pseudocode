/*
 * XREFs of sub_140064B08 @ 0x140064B08
 * Callers:
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140064B08(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    sub_1400B6010(v4);
  return a1;
}
