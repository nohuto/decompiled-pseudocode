/*
 * XREFs of sub_180096320 @ 0x180096320
 * Callers:
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 * Callees:
 *     sub_180096278 @ 0x180096278 (sub_180096278.c)
 */

__int64 __fastcall sub_180096320(__int64 a1)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // xmm0

  *(_BYTE *)(a1 + 1088) = 1;
  sub_180096278((__int64 *)(a1 + 8), a1 + 488);
  v2 = *(_DWORD *)(a1 + 904);
  v3 = *(_OWORD *)(a1 + 864);
  *(_OWORD *)(a1 + 728) = *(_OWORD *)(a1 + 848);
  v4 = *(_OWORD *)(a1 + 880);
  *(_OWORD *)(a1 + 744) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 896);
  *(_OWORD *)(a1 + 760) = v4;
  v5 = *(_OWORD *)(a1 + 1028);
  *(_QWORD *)(a1 + 776) = v3;
  v6 = *(_OWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 784) = v2;
  result = *(unsigned int *)(a1 + 1084);
  *(_OWORD *)(a1 + 908) = v5;
  v8 = *(_OWORD *)(a1 + 1060);
  *(_OWORD *)(a1 + 924) = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 1076);
  *(_OWORD *)(a1 + 940) = v8;
  *(_QWORD *)(a1 + 956) = v6;
  *(_DWORD *)(a1 + 964) = result;
  return result;
}
