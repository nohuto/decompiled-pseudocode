/*
 * XREFs of sub_14000EA08 @ 0x14000EA08
 * Callers:
 *     sub_1400100F0 @ 0x1400100F0 (sub_1400100F0.c)
 * Callees:
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 */

__int64 __fastcall sub_14000EA08(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000DE78(a1, (__int64)a2);
  return result;
}
