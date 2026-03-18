/*
 * XREFs of ?ConvertToDxgi1@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400A05A4
 * Callers:
 *     ColorSpaceTransformConvert @ 0x140045540 (ColorSpaceTransformConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToDxgi1(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // r8d
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rax
  __int64 v4; // rsi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v5; // r11
  int v6; // r10d
  int v7; // edx
  float *v8; // r9
  __int64 v9; // rdi
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm1_4

  v2 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v4 = 1025LL;
    v5 = a1->Data.pRgb256x3x16;
    v6 = 0;
    v7 = 0;
    *(_DWORD *)pRgb256x3x16->Red = 1065353216;
    v8 = (float *)&pRgb256x3x16->Red[14];
    *(_DWORD *)&pRgb256x3x16->Red[2] = 1065353216;
    *(_QWORD *)&pRgb256x3x16->Red[4] = 1065353216LL;
    *(_QWORD *)&pRgb256x3x16->Red[8] = 0LL;
    do
    {
      v9 = (unsigned int)(v7 + 1);
      v10 = (float)v5->Red[v7];
      if ( v6 )
      {
        v11 = (float)(1024 - v6);
        *(v8 - 1) = (float)((float)((float)(v6 * v5->Red[v9]) + (float)(v10 * v11)) * 0.0009765625) / 65535.0;
        *v8 = (float)((float)((float)(v6 * v5->Green[v9]) + (float)((float)v5->Green[v7] * v11)) * 0.0009765625)
            / 65535.0;
        v12 = (float)((float)(v6 * v5->Blue[v9]) + (float)((float)v5->Blue[v7] * v11)) * 0.0009765625;
      }
      else
      {
        *(v8 - 1) = v10 / 65535.0;
        *v8 = (float)v5->Green[v7] / 65535.0;
        v12 = (float)v5->Blue[v7];
      }
      v13 = v12 / 65535.0;
      if ( (unsigned int)(v6 + 255) >= 0x400 )
        ++v7;
      v8[1] = v13;
      v8 += 3;
      v6 += (unsigned int)(v6 + 255) < 0x400 ? 255 : -769;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
