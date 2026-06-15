/*
 * XREFs of sub_14000E30C @ 0x14000E30C
 * Callers:
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 *     sub_14006BCA4 @ 0x14006BCA4 (sub_14006BCA4.c)
 * Callees:
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 */

__int64 __fastcall sub_14000E30C(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000E334(a1);
  return result;
}
