/*
 * XREFs of sub_1800CAB48 @ 0x1800CAB48
 * Callers:
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CAB48(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
