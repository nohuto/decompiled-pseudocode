/*
 * XREFs of sub_18003A5B8 @ 0x18003A5B8
 * Callers:
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180030B20 @ 0x180030B20 (sub_180030B20.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     sub_18003D480 @ 0x18003D480 (sub_18003D480.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_18003A5B8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*a2 + 104LL);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_1800162D0((_QWORD *)(a1 + 72), a2);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 1065353216;
  *(_DWORD *)(a1 + 172) = 1065353216;
  *(_DWORD *)(a1 + 176) = 1065353216;
  *(_DWORD *)(a1 + 180) = 1065353216;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 1065353216LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 244) = 1065353216LL;
  *(_QWORD *)(a1 + 252) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  *(_QWORD *)(a1 + 264) = 1065353216LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 1065353216;
  *(_QWORD *)(a1 + 288) = 1065353216LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 308) = 1065353216LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 324) = 0;
  *(_QWORD *)(a1 + 328) = 1065353216LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 1065353216;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = v4;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  sub_1800143C0(a1 + 400);
  sub_180030B20((__int64 *)(a1 + 432));
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  v6 = _InterlockedIncrement64(&qword_1801C7C88);
  *(_QWORD *)(a1 + 208) = v6;
  if ( v6 < *(_QWORD *)(a1 + 216) )
    v6 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v6;
  LOBYTE(v5) = 1;
  sub_18003C8A4(a1, 0LL, v5);
  LOBYTE(v7) = 1;
  sub_18003C8A4(a1, 1LL, v7);
  LOBYTE(v8) = 1;
  sub_18003C8A4(a1, 2LL, v8);
  LOBYTE(v9) = 1;
  sub_18003C8A4(a1, 16LL, v9);
  sub_18003D480(a1);
  v10 = a2[1];
  if ( v10 )
    sub_180010EC8(v10);
  return a1;
}
