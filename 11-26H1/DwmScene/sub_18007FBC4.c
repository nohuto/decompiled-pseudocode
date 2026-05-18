/*
 * XREFs of sub_18007FBC4 @ 0x18007FBC4
 * Callers:
 *     sub_18007F9A0 @ 0x18007F9A0 (sub_18007F9A0.c)
 *     sub_180084758 @ 0x180084758 (sub_180084758.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_18007FBC4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_1800181BC((_QWORD *)a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_BYTE *)(a2 + 40) = *(_BYTE *)(a3 + 40);
  result = *(unsigned int *)(a3 + 44);
  *(_DWORD *)(a2 + 44) = result;
  return result;
}
