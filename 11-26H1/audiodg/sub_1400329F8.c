/*
 * XREFs of sub_1400329F8 @ 0x1400329F8
 * Callers:
 *     sub_140044BD8 @ 0x140044BD8 (sub_140044BD8.c)
 *     sub_140095DC4 @ 0x140095DC4 (sub_140095DC4.c)
 *     sub_140095E80 @ 0x140095E80 (sub_140095E80.c)
 * Callees:
 *     sub_140032A70 @ 0x140032A70 (sub_140032A70.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400329F8(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BA420;
  *(_OWORD *)(a1 + 8) = xmmword_1400C5548;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = &off_1400BA450;
  *(_QWORD *)(a1 + 64) = a1 + 8;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 24) = off_1400BA458;
  sub_140032A70(a1 + 104);
  return a1;
}
