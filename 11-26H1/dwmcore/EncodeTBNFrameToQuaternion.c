/*
 * XREFs of EncodeTBNFrameToQuaternion @ 0x18012190C
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180121334 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180121B74 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180121D1C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall EncodeTBNFrameToQuaternion(struct D2DQuaternion *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v14; // xmm8_4
  float v15; // xmm2_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm0_4
  _DWORD v26[11]; // [rsp+28h] [rbp-79h] BYREF
  __int128 v27; // [rsp+54h] [rbp-4Dh]
  int v28; // [rsp+64h] [rbp-3Dh]

  v4 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v8 = a4[2];
  v9 = a2[1];
  v10 = a4[1];
  v11 = a2[2];
  v12 = *a4;
  v13 = *a2;
  if ( (float)((float)((float)((float)((float)(*a2 * v8) - (float)(*a4 * v11)) * v6)
                     + (float)((float)((float)(v11 * v10) - (float)(v9 * v8)) * *a3))
             + (float)((float)((float)(*a4 * v9) - (float)(*a2 * v10)) * v7)) < 0.0 )
    v14 = FLOAT_N1_0;
  else
    v14 = FLOAT_1_0;
  v26[3] = 0;
  v26[7] = 0;
  v28 = 1065353216;
  *(float *)&v26[4] = v4 * v14;
  *(float *)&v26[5] = v6 * v14;
  *(float *)&v26[6] = v7 * v14;
  *(float *)v26 = v13;
  *(float *)&v26[1] = v9;
  *(float *)&v26[2] = v11;
  *(float *)&v26[8] = v12;
  *(float *)&v26[9] = v10;
  *(float *)&v26[10] = v8;
  v27 = 0LL;
  D3DXQuaternionRotationMatrix(a1, (const struct D2DMatrix *)v26);
  D3DXQuaternionNormalize(a1, a1);
  v15 = *((float *)a1 + 3);
  if ( v15 < 0.0 )
  {
    LODWORD(v15) ^= _xmm;
    v16 = *((_DWORD *)a1 + 1);
    *(_DWORD *)a1 ^= _xmm;
    v17 = *((_DWORD *)a1 + 2) ^ _xmm;
    *((_DWORD *)a1 + 1) = v16 ^ _xmm;
    *((_DWORD *)a1 + 2) = v17;
    *((float *)a1 + 3) = v15;
  }
  v18 = FLOAT_0_000001;
  if ( v15 >= 0.000001 )
  {
    v18 = v15;
  }
  else
  {
    v19 = sqrtf_0(1.0);
    *((_DWORD *)a1 + 3) = 897988541;
    v20 = v19 * *(float *)a1;
    v21 = v19 * *((float *)a1 + 1);
    v22 = v19 * *((float *)a1 + 2);
    *(float *)a1 = v20;
    *((float *)a1 + 1) = v21;
    *((float *)a1 + 2) = v22;
  }
  if ( v14 < 0.0 )
  {
    v23 = *((_DWORD *)a1 + 1);
    *(_DWORD *)a1 ^= _xmm;
    v24 = *((_DWORD *)a1 + 2) ^ _xmm;
    *((_DWORD *)a1 + 1) = v23 ^ _xmm;
    *((_DWORD *)a1 + 2) = v24;
    *((_DWORD *)a1 + 3) = LODWORD(v18) ^ _xmm;
  }
  return a1;
}
