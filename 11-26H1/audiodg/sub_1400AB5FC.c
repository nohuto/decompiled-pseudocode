/*
 * XREFs of sub_1400AB5FC @ 0x1400AB5FC
 * Callers:
 *     sub_1400A56D4 @ 0x1400A56D4 (sub_1400A56D4.c)
 *     sub_1400A5828 @ 0x1400A5828 (sub_1400A5828.c)
 * Callees:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400AB48C @ 0x1400AB48C (sub_1400AB48C.c)
 *     sub_1400AB544 @ 0x1400AB544 (sub_1400AB544.c)
 *     sub_1400ABC40 @ 0x1400ABC40 (sub_1400ABC40.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1400AB5FC(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+68h] [rbp+10h]

  *(_QWORD *)a1 = off_1400BB018;
  v2 = a1 + 8;
  *(_OWORD *)(a1 + 8) = xmmword_1400C5548;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = &off_1400C1DB0;
  *(_QWORD *)(a1 + 64) = a1 + 8;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 24) = off_1400C11D8;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = &off_1400C1DB0;
  *(_QWORD *)(a1 + 136) = a1 + 8;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 96) = off_1400C11A8;
  v3 = (_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = off_1400C1158;
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_OWORD *)(a1 + 184) = 0LL;
  *(_OWORD *)(a1 + 200) = 0LL;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  sub_1400ABC40(a1 + 160);
  *v3 = off_1400C1180;
  v3[11] = v2;
  v3[10] = &off_1400C1DB0;
  sub_1400AB544(a1 + 256, a1 + 24);
  sub_1400AB48C(a1 + 352, a1 + 96);
  *(_QWORD *)(a1 + 448) = off_1400BAF88;
  *(_QWORD *)(a1 + 456) = v3;
  *(_WORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)sub_1400492F4(40LL, v4);
  InitializeCriticalSection(v6);
  *(_QWORD *)(a1 + 472) = v6;
  *(_QWORD *)(a1 + 448) = off_1400BAFD8;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = -1LL;
  sub_1400B6010(a1 + 448);
  return a1;
}
