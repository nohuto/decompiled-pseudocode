/*
 * XREFs of sub_18008A1EC @ 0x18008A1EC
 * Callers:
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002CF24 @ 0x18002CF24 (sub_18002CF24.c)
 */

_QWORD *__fastcall sub_18008A1EC(_QWORD *a1, _QWORD *a2, float a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r9
  __int64 v5; // r10
  _QWORD *result; // rax
  __int64 v7; // r11
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  sub_180012C40(a1, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(float *)(v3 + 32) = a3;
  *(_DWORD *)(v3 + 36) = 0;
  v8 = 1LL;
  sub_18002CF24(v3 + 40, (__int64)&v8);
  v4[6] = v5;
  result = v4;
  v4[14] = v7;
  v4[22] = v7;
  return result;
}
