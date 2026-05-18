/*
 * XREFs of sub_18002CF4C @ 0x18002CF4C
 * Callers:
 *     sub_18002D7EC @ 0x18002D7EC (sub_18002D7EC.c)
 * Callees:
 *     sub_18002FC70 @ 0x18002FC70 (sub_18002FC70.c)
 */

_DWORD *__fastcall sub_18002CF4C(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_18002FC70(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
