/*
 * XREFs of HandleBaseWindowDestruction @ 0x14021B6B0
 * Callers:
 *     DestroyBaseWindow @ 0x1401EA340 (DestroyBaseWindow.c)
 * Callees:
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_BASEWND @ 0x140211E30 (INPUTDEST_FROM_BASEWND.c)
 */

void __fastcall HandleBaseWindowDestruction(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // edx
  int v9; // r8d
  _OWORD v10[7]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v11[30]; // [rsp+90h] [rbp-78h] BYREF

  v1 = INPUTDEST_FROM_BASEWND(v11, a1);
  v2 = v1[1];
  v10[0] = *v1;
  v3 = v1[2];
  v10[1] = v2;
  v4 = v1[3];
  v10[2] = v3;
  v5 = v1[4];
  v10[3] = v4;
  v6 = v1[5];
  v10[4] = v5;
  v7 = v1[6];
  v10[5] = v6;
  v10[6] = v7;
  HandleInputDestDestruction((__int64)v10, v8, v9);
}
