/*
 * XREFs of sub_140035BAC @ 0x140035BAC
 * Callers:
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

_QWORD *__fastcall sub_140035BAC(_QWORD *a1, __int64 a2)
{
  __int64 v5; // [rsp+50h] [rbp+8h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = sub_1400492F4(24LL);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BAEB0;
  *(_QWORD *)(v5 + 16) = a2;
  *a1 = a2;
  a1[1] = v5;
  return a1;
}
