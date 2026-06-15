/*
 * XREFs of sub_140023428 @ 0x140023428
 * Callers:
 *     sub_140023334 @ 0x140023334 (sub_140023334.c)
 * Callees:
 *     sub_140023484 @ 0x140023484 (sub_140023484.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

_QWORD *__fastcall sub_140023428(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // [rsp+40h] [rbp+8h]

  v5 = sub_1400492F4(192LL);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BA810;
  sub_140023484(v5 + 16);
  result = a1;
  *a1 = v3;
  a1[1] = v4;
  return result;
}
