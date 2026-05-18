/*
 * XREFs of sub_18004C7F0 @ 0x18004C7F0
 * Callers:
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_18004C7F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_1800181BC((_QWORD *)a2, *a4);
  result = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  return result;
}
