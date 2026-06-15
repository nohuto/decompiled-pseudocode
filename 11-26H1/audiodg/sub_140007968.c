/*
 * XREFs of sub_140007968 @ 0x140007968
 * Callers:
 *     sub_1400070E0 @ 0x1400070E0 (sub_1400070E0.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_140007968(_QWORD *a1, __int64 a2)
{
  __int64 v5; // [rsp+50h] [rbp+8h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = sub_1400492F4(24LL);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BA5B8;
  *(_QWORD *)(v5 + 16) = a2;
  *a1 = a2;
  a1[1] = v5;
  return a1;
}
