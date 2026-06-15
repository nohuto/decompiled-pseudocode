/*
 * XREFs of sub_140055EB8 @ 0x140055EB8
 * Callers:
 *     sub_140055E5C @ 0x140055E5C (sub_140055E5C.c)
 * Callees:
 *     sub_1400331F8 @ 0x1400331F8 (sub_1400331F8.c)
 *     sub_14003322C @ 0x14003322C (sub_14003322C.c)
 *     sub_140033284 @ 0x140033284 (sub_140033284.c)
 *     sub_1400499DC @ 0x1400499DC (sub_1400499DC.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_140055EB8(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)a1 = off_1400F5090;
  *(_QWORD *)(a1 + 8) = off_1400F5000;
  *(_QWORD *)(a1 + 16) = off_1400F5070;
  *(_QWORD *)(a1 + 24) = off_1400F5138;
  *(_DWORD *)(a1 + 88) = 0;
  sub_1400331F8((struct _RTL_CRITICAL_SECTION *)(a1 + 96));
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_DWORD *)(a1 + 176) = 10;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 10;
  sub_14003322C(a1 + 232);
  sub_140033284(a1 + 392);
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_DWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_QWORD *)(a1 + 800) = 0LL;
  *(_BYTE *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0LL;
  sub_1400499DC(a1 + 832, 64LL, 2LL);
  sub_1400331F8((struct _RTL_CRITICAL_SECTION *)(a1 + 1008));
  *(_WORD *)(a1 + 1000) = 0;
  *(_QWORD *)(a1 + 960) = a1 + 832;
  *(_QWORD *)(a1 + 976) = 0LL;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_QWORD *)(a1 + 992) = 0LL;
  *(_BYTE *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1056) = 0LL;
  *(_QWORD *)(a1 + 1064) = 0LL;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1080) = 0LL;
  return a1;
}
