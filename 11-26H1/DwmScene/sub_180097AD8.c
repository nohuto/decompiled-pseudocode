/*
 * XREFs of sub_180097AD8 @ 0x180097AD8
 * Callers:
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 *     sub_180097B68 @ 0x180097B68 (sub_180097B68.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

_QWORD *__fastcall sub_180097AD8(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *result; // rax

  v7 = *a6;
  v8 = *a5;
  *(_DWORD *)a2 = *a3;
  result = sub_1800181BC((_QWORD *)(a2 + 8), a4);
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  return result;
}
