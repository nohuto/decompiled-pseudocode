/*
 * XREFs of sub_14000ED10 @ 0x14000ED10
 * Callers:
 *     sub_14000ED38 @ 0x14000ED38 (sub_14000ED38.c)
 *     sub_140010154 @ 0x140010154 (sub_140010154.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_14000ED38 @ 0x14000ED38 (sub_14000ED38.c)
 */

__int64 __fastcall sub_14000ED10(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000ED38();
  return result;
}
