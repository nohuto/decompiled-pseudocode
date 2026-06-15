/*
 * XREFs of sub_1400646D0 @ 0x1400646D0
 * Callers:
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1400646D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v7 = sub_1400492F4(56LL, a2);
  a1[1] = v7;
  *(_OWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_OWORD *)(v7 + 16) = *(_OWORD *)a3;
  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  sub_140064A88(v7 + 48, a4);
  return a1;
}
