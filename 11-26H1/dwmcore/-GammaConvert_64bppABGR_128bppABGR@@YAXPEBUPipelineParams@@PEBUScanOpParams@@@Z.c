/*
 * XREFs of ?GammaConvert_64bppABGR_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B6030
 * Callers:
 *     <none>
 * Callees:
 *     ?Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z @ 0x180292A10 (-Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z.c)
 */

void __fastcall GammaConvert_64bppABGR_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  __int64 v2; // r10
  __int64 v3; // r10
  unsigned __int16 *v4; // r10
  float v5; // xmm3_4
  float v6; // xmm0_4
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // xmm5_4
  int v10; // xmm4_4
  int v11; // r9d

  v2 = *((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v2 + 2));
      Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v3 + 4));
      v5 = (float)v4[3] / 65535.0;
      v6 = Convert_sRGB_UINT16_To_scRGB_float(*v4);
      v2 = v7 + 8;
      *(float *)v8 = v6;
      *(_DWORD *)(v8 + 4) = v9;
      *(_DWORD *)(v8 + 8) = v10;
      *(float *)(v8 + 12) = v5;
    }
    while ( v11 != 1 );
  }
}
