/*
 * XREFs of sub_1400330E4 @ 0x1400330E4
 * Callers:
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 * Callees:
 *     sub_1400331F8 @ 0x1400331F8 (sub_1400331F8.c)
 *     sub_14003322C @ 0x14003322C (sub_14003322C.c)
 *     sub_140033284 @ 0x140033284 (sub_140033284.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1400330E4(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &off_1400F5158;
  *(_QWORD *)(a1 + 8) = &off_1400F5038;
  *(_QWORD *)(a1 + 16) = &off_1400F5118;
  *(_DWORD *)(a1 + 80) = 0;
  sub_1400331F8(a1 + 88);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 10;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 10;
  sub_14003322C(a1 + 224);
  sub_140033284(a1 + 384);
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_BYTE *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_QWORD *)(a1 + 816) = 0LL;
  *(_QWORD *)(a1 + 824) = 0LL;
  return a1;
}
