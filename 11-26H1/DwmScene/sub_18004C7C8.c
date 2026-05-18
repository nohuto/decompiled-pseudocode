/*
 * XREFs of sub_18004C7C8 @ 0x18004C7C8
 * Callers:
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

_QWORD *__fastcall sub_18004C7C8(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *result; // rax

  result = sub_1800181BC((_QWORD *)a2, *a4);
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
