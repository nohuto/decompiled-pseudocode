/*
 * XREFs of sub_18002CF74 @ 0x18002CF74
 * Callers:
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 * Callees:
 *     sub_18002FCA8 @ 0x18002FCA8 (sub_18002FCA8.c)
 */

_QWORD *__fastcall sub_18002CF74(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_18002FCA8(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
