/*
 * XREFs of ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400455FC
 * Callers:
 *     ColorSpaceTransformConvert @ 0x140045540 (ColorSpaceTransformConvert.c)
 * Callees:
 *     ColorSpaceTransformCombine @ 0x14004E56C (ColorSpaceTransformCombine.c)
 *     ?InitializeIdentityMatrix@@YAJPEAMII@Z @ 0x1400653C8 (-InitializeIdentityMatrix@@YAJPEAMII@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall ConvertToMatrix_3x4(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // ebx
  D3DDDI_GAMMARAMP_TYPE Type; // eax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rdi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v7; // rbp
  float v8; // xmm0_4
  float *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // xmm0_4
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v21; // rcx

  v2 = 0;
  Type = a1->Type;
  if ( a1->Type == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v7 = a1->Data.pRgb256x3x16;
    *(_DWORD *)&pRgb256x3x16->Red[24] = 1065353216;
    if ( *(_DWORD *)&v7[32].Red[22] == 1 )
    {
      memmove(&pRgb256x3x16->Red[26], &v7[32].Red[24], 0xC000uLL);
    }
    else
    {
      v8 = 0.0;
      v9 = (float *)&pRgb256x3x16->Red[28];
      v10 = 4096LL;
      do
      {
        v9[1] = v8;
        *v9 = v8;
        *(v9 - 1) = v8;
        v9 += 3;
        v8 = v8 + 0.00024420026;
        --v10;
      }
      while ( v10 );
    }
    if ( *(_DWORD *)&v7[32].Red[2] == 1 )
    {
      v16 = 0LL;
      v17 = 3LL;
      do
      {
        v18 = 0;
        v19 = v16;
        do
        {
          if ( v18 >= 3 )
            v20 = 0;
          else
            v20 = *(_DWORD *)&v7[32].Red[2 * v19 + 4];
          ++v18;
          *(_DWORD *)pRgb256x3x16->Red = v20;
          pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)pRgb256x3x16 + 4);
          ++v19;
        }
        while ( v18 < 4 );
        v16 += 3LL;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v11 = 0;
      *(_OWORD *)pRgb256x3x16->Red = 0LL;
      v12 = 0LL;
      *(_OWORD *)&pRgb256x3x16->Red[8] = 0LL;
      *(_OWORD *)&pRgb256x3x16->Red[16] = 0LL;
      do
      {
        v13 = 4 * v11++;
        v14 = v12 + v13;
        ++v12;
        *(_DWORD *)&pRgb256x3x16->Red[2 * v14] = 1065353216;
      }
      while ( v11 < 3 );
    }
  }
  else if ( Type == D3DDDI_GAMMARAMP_DXGI_1 || Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    v21 = a2->Data.pRgb256x3x16;
    *(_DWORD *)&v21->Red[24] = 1065353216;
    InitializeIdentityMatrix((float *)v21->Red, (unsigned int)a2, 4u);
    return (unsigned int)ColorSpaceTransformCombine(0LL, a1, a2);
  }
  return v2;
}
