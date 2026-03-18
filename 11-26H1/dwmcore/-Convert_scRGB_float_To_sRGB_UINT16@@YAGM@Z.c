/*
 * XREFs of ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x180292A74
 * Callers:
 *     ?GammaConvert_128bppABGR_64bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5EC0 (-GammaConvert_128bppABGR_64bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x180158CF0 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor_0 @ 0x1802B96FC (floor_0.c)
 */

__int64 __fastcall Convert_scRGB_float_To_sRGB_UINT16(float a1)
{
  double v1; // xmm6_8
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx

  v1 = a1 * 255.0;
  if ( v1 <= 0.0 )
    return 0LL;
  if ( v1 >= 255.0 )
    return 0xFFFFLL;
  v3 = Convert_scRGB_Channel_To_sRGB_Byte(a1);
  v4 = 254LL;
  if ( (unsigned int)v3 >= 0xFE )
    v3 = 254LL;
  do
  {
    if ( GammaLUT_sRGB_to_scRGB[v3] <= v1 )
      break;
    v3 = (unsigned int)(v3 - 1);
  }
  while ( (unsigned int)v3 <= 0xFE );
  if ( (unsigned int)v3 >= 0xFE )
    LODWORD(v3) = 254;
  do
  {
    v5 = (unsigned int)(v3 + 1);
    if ( v1 < GammaLUT_sRGB_to_scRGB[v5] )
      break;
    LODWORD(v3) = v3 + 1;
  }
  while ( (unsigned int)v5 <= 0xFE );
  if ( (unsigned int)v3 < 0xFE )
    v4 = (unsigned int)v3;
  return (unsigned int)(65793
                      * (((_DWORD)v4 << 8)
                       + (int)floor_0(
                                (v1 - GammaLUT_sRGB_to_scRGB[v4])
                              / (float)(GammaLUT_sRGB_to_scRGB[(unsigned int)(v4 + 1)] - GammaLUT_sRGB_to_scRGB[v4])
                              * 256.0
                              + 0.5))) >> 16;
}
