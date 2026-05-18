/*
 * XREFs of sub_18002FAFC @ 0x18002FAFC
 * Callers:
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_18002FAFC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_1800181BC((_QWORD *)a2, a3);
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
