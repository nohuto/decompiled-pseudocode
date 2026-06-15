/*
 * XREFs of sub_140023BD0 @ 0x140023BD0
 * Callers:
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

_QWORD *__fastcall sub_140023BD0(_QWORD *a1, __int64 a2)
{
  __int64 v5; // [rsp+50h] [rbp+8h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = sub_1400492F4(24LL);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BA850;
  *(_QWORD *)(v5 + 16) = a2;
  *a1 = a2;
  a1[1] = v5;
  return a1;
}
