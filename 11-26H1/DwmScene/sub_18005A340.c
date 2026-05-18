/*
 * XREFs of sub_18005A340 @ 0x18005A340
 * Callers:
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 * Callees:
 *     sub_18005A718 @ 0x18005A718 (sub_18005A718.c)
 */

__int64 __fastcall sub_18005A340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r8

  *(_DWORD *)(a1 + 292) = 0;
  *(_OWORD *)(a1 + 932) = xmmword_1800FA780;
  *(_OWORD *)(a1 + 948) = xmmword_1800FA790;
  *(_OWORD *)(a1 + 964) = xmmword_1800FA7A0;
  *(_OWORD *)(a1 + 980) = xmmword_1800FA7B0;
  *(_DWORD *)(a1 + 296) = 1056997505;
  *(_DWORD *)(a1 + 300) = 1056997505;
  *(_DWORD *)(a1 + 304) = 1056997505;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_DWORD *)(a1 + 440) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 1612) = 0;
  *(_DWORD *)(a1 + 312) = 1065353216;
  *(_DWORD *)(a1 + 316) = 1;
  *(_DWORD *)(a1 + 320) = 1036831949;
  *(_DWORD *)(a1 + 324) = 1148846080;
  *(_DWORD *)(a1 + 328) = 1114636288;
  *(_DWORD *)(a1 + 332) = 1065353216;
  *(_QWORD *)(a1 + 340) = 1065353216LL;
  *(_WORD *)(a1 + 464) = 768;
  *(_DWORD *)(a1 + 544) = 7;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 1065353216;
  *(_QWORD *)(a1 + 356) = 1065353216LL;
  *(_DWORD *)(a1 + 364) = 1065353216;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_DWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 396) = 1065353216;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  sub_18005A718(a1, 1LL, a3, 2LL);
  sub_18005A718(a1, 2LL, v4, 0LL);
  return sub_18005A718(a1, (unsigned int)(v5 + 3), v6, (unsigned int)(v5 + 2));
}
