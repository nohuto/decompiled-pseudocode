/*
 * XREFs of sub_18001C5B0 @ 0x18001C5B0
 * Callers:
 *     sub_1800636CC @ 0x1800636CC (sub_1800636CC.c)
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 * Callees:
 *     _o_floorf @ 0x18000CE4C (_o_floorf.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 */

__int64 __fastcall sub_18001C5B0(__int64 a1, float a2, float a3, float a4)
{
  float v5; // xmm10_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm10_4
  int v11; // ecx
  float v12; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm3_4
  float v15; // xmm9_4
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 result; // rax

  v5 = sub_18001205C(a2, 0.0, 360.0);
  v6 = sub_18001205C(a3 / 100.0, 0.0, 1.0);
  v7 = sub_18001205C(a4 / 100.0, 0.0, 1.0);
  v8 = v7;
  if ( v6 == 0.0 )
  {
    v9 = v7;
    goto LABEL_15;
  }
  v10 = v5 / 60.0;
  o_floorf();
  v11 = (int)v10;
  v12 = (float)(1.0 - v6) * v7;
  v13 = v10 - (float)(int)v10;
  v14 = (float)(1.0 - (float)(v13 * v6)) * v7;
  v15 = (float)(1.0 - (float)((float)(1.0 - v13) * v6)) * v7;
  if ( !v11 )
  {
    v9 = (float)(1.0 - (float)((float)(1.0 - v13) * v6)) * v7;
    goto LABEL_14;
  }
  v16 = v11 - 1;
  if ( !v16 )
  {
    v7 = (float)(1.0 - (float)(v13 * v6)) * v7;
    v9 = v8;
LABEL_14:
    v8 = v12;
    goto LABEL_15;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v9 = (float)(1.0 - v6) * v7;
      if ( v18 == 1 )
        v7 = (float)(1.0 - (float)((float)(1.0 - v13) * v6)) * v7;
      else
        v8 = (float)(1.0 - (float)(v13 * v6)) * v7;
    }
    else
    {
      v7 = (float)(1.0 - v6) * v7;
      v9 = v14;
    }
  }
  else
  {
    v9 = v7;
    v7 = (float)(1.0 - v6) * v7;
    v8 = v15;
  }
LABEL_15:
  result = a1;
  *(float *)(a1 + 8) = v8;
  *(float *)a1 = v7;
  *(float *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 12) = 1065353216;
  return result;
}
