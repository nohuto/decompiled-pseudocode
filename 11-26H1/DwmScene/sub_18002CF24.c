/*
 * XREFs of sub_18002CF24 @ 0x18002CF24
 * Callers:
 *     sub_18008A1EC @ 0x18008A1EC (sub_18008A1EC.c)
 * Callees:
 *     sub_18002FC90 @ 0x18002FC90 (sub_18002FC90.c)
 */

_QWORD *__fastcall sub_18002CF24(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_18002FC90(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
