/*
 * XREFs of sub_180056AE0 @ 0x180056AE0
 * Callers:
 *     sub_18002D978 @ 0x18002D978 (sub_18002D978.c)
 *     sub_180056100 @ 0x180056100 (sub_180056100.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_18008A284 @ 0x18008A284 (sub_18008A284.c)
 *     sub_18008F764 @ 0x18008F764 (sub_18008F764.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_1800309F0 @ 0x1800309F0 (sub_1800309F0.c)
 *     sub_180056A6C @ 0x180056A6C (sub_180056A6C.c)
 *     sub_18005A340 @ 0x18005A340 (sub_18005A340.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180056AE0(__int64 a1, __int64 a2)
{
  volatile __int32 *v4; // rdi
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+30h] [rbp-48h] BYREF

  sub_180011CC4(v7, "Camera");
  sub_18007A800(a1, v7, a2);
  sub_1800129D0((__int64)v7);
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  sub_1800143C0(a1 + 184);
  sub_1800143C0(a1 + 216);
  sub_1800143C0(a1 + 248);
  v4 = (volatile __int32 *)(a1 + 280);
  sub_18002901C(a1 + 280, 4LL, 3LL, (__int64 (__fastcall *)(__int64))sub_18002CEA0);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = 1065353216;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  sub_1800309F0((__int64 *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  sub_18002901C(a1 + 548, 256LL, 4LL, sub_1800569C0);
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  sub_180056A6C((__int64 *)(a1 + 1616));
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_1801BE6A0;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_18005A340(a1);
  while ( v4 != (volatile __int32 *)(a1 + 292) )
    _InterlockedExchange(v4++, 0);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
    sub_180010EC8(v5);
  return a1;
}
