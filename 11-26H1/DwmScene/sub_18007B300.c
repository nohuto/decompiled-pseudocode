/*
 * XREFs of sub_18007B300 @ 0x18007B300
 * Callers:
 *     sub_18007B1DC @ 0x18007B1DC (sub_18007B1DC.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_18007B300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  sub_18001D260(a2, a3);
  *(_WORD *)(v4 + 32) = *(_WORD *)(v3 + 32);
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(v3 + 36);
  *(_DWORD *)(v4 + 40) = *(_DWORD *)(v3 + 40);
  *(_DWORD *)(v4 + 44) = *(_DWORD *)(v3 + 44);
  result = *(unsigned int *)(v3 + 48);
  *(_DWORD *)(v4 + 48) = result;
  return result;
}
