/*
 * XREFs of sub_18007B2B0 @ 0x18007B2B0
 * Callers:
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_18007B2B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_1800181BC((_QWORD *)a2, a3);
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
