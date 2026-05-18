/*
 * XREFs of sub_1800D4BF0 @ 0x1800D4BF0
 * Callers:
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 * Callees:
 *     sub_1800D4DFC @ 0x1800D4DFC (sub_1800D4DFC.c)
 */

_QWORD *__fastcall sub_1800D4BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_1800D4DFC(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
