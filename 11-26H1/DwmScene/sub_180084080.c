/*
 * XREFs of sub_180084080 @ 0x180084080
 * Callers:
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 */

__int64 __fastcall sub_180084080(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_1800181BC(v5, a2);
  return sub_1800292C4(a1, (__int64)v3);
}
