/*
 * XREFs of ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400A0748
 * Callers:
 *     ColorSpaceTransformConvert @ 0x140045540 (ColorSpaceTransformConvert.c)
 * Callees:
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x140046ED0 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ColorSpaceTransformCombine @ 0x14004E56C (ColorSpaceTransformCombine.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1400A0890 (ColorSpaceTransformInitIdentityTransform.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall ConvertToMatrix_V2(
        struct _D3DKMDT_GAMMA_RAMP *a1,
        struct _D3DKMDT_GAMMA_RAMP *a2,
        __int64 a3,
        __int64 a4)
{
  D3DDDI_GAMMARAMP_TYPE Type; // eax
  unsigned int v5; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r14
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v9; // rdi
  float *v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  float *v13; // rcx
  __int64 v14; // rdx

  Type = a1->Type;
  v5 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_MATRIX_3x4 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v9 = a1->Data.pRgb256x3x16;
    *(_DWORD *)pRgb256x3x16->Red = 1;
    memmove(&pRgb256x3x16->Red[2], &v9->Red[26], 0xC000uLL);
    *(_DWORD *)&pRgb256x3x16[32].Red[2] = 1;
    v10 = (float *)&v9->Red[24];
    v11 = (char *)pRgb256x3x16 - (char *)v9 + 49160;
    v12 = 3LL;
    do
    {
      v13 = (float *)v9;
      v14 = 3LL;
      do
      {
        *(float *)((char *)v13 + v11) = *v13 * *v10;
        ++v13;
        --v14;
      }
      while ( v14 );
      v9 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v9 + 16);
      v11 -= 4LL;
      --v12;
    }
    while ( v12 );
    *(_DWORD *)&pRgb256x3x16[32].Red[22] = 2;
    InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)&pRgb256x3x16[32].Red[24], 0x1000u, 0.0, 1.0);
  }
  else if ( Type == D3DDDI_GAMMARAMP_DXGI_1 || Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    ColorSpaceTransformInitIdentityTransform(a2, a2, a3, a4);
    return (unsigned int)ColorSpaceTransformCombine(0LL, (int *)a1, (__int64)a2);
  }
  return v5;
}
