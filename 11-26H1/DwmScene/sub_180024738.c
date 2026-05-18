/*
 * XREFs of sub_180024738 @ 0x180024738
 * Callers:
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 * Callees:
 *     sub_180025238 @ 0x180025238 (sub_180025238.c)
 */

_DWORD *__fastcall sub_180024738(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_180025238(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
