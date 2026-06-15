/*
 * XREFs of sub_14005D9BC @ 0x14005D9BC
 * Callers:
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_14005D9BC(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx

  *a1 = a2;
  a1[1] = 0LL;
  v6 = sub_1400492F4(56LL, a2);
  a1[1] = v6;
  v7 = *a4;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)v7;
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 7LL;
  *(_WORD *)v7 = 0;
  *(_QWORD *)(v6 + 48) = 0LL;
  return a1;
}
