/*
 * XREFs of sub_14000EA30 @ 0x14000EA30
 * Callers:
 *     sub_14000EA58 @ 0x14000EA58 (sub_14000EA58.c)
 * Callees:
 *     sub_14000EA58 @ 0x14000EA58 (sub_14000EA58.c)
 */

__int64 __fastcall sub_14000EA30(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000EA58(a1);
  return result;
}
