/*
 * XREFs of sub_1400A9290 @ 0x1400A9290
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14004D37C @ 0x14004D37C (sub_14004D37C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1400A9290(__int64 *a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h]

  v4 = sub_1400492F4(88LL, a2);
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  sub_14004D37C(v4 + 40, 24LL, 2LL);
  *a1 = v4;
  return a1;
}
