/*
 * XREFs of sub_18000ED68 @ 0x18000ED68
 * Callers:
 *     sub_18000DC90 @ 0x18000DC90 (sub_18000DC90.c)
 * Callees:
 *     sub_18000F774 @ 0x18000F774 (sub_18000F774.c)
 */

__int64 __fastcall sub_18000ED68(unsigned int *a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  *a1 = a2;
  v2 = sub_18000F774(a2);
  *(_DWORD *)(v3 + 4) = v2;
  result = v3;
  *(_DWORD *)(v3 + 8) = 0;
  return result;
}
