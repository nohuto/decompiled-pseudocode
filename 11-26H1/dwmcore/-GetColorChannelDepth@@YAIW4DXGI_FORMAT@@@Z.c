/*
 * XREFs of ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800F9B08
 * Callers:
 *     ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800F9A80 (-GetCompositingShaderLookupKey@CCompositingShaderCache@@CA-AUCompositingShaderLookupKey@1@W4D3DS.c)
 *     ?IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18023CFD0 (-IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorChannelDepth(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool v7; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 > 67 )
  {
    v1 = a1 - 87;
    if ( !v1 )
      return 8LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 8LL;
    v3 = v2 - 3;
    if ( !v3 )
      return 8LL;
    v4 = v3 - 12;
    if ( !v4 )
      return 8LL;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( !v6 )
        return 8LL;
      v7 = v6 == 1;
      goto LABEL_9;
    }
    return 10LL;
  }
  if ( a1 == 67 )
    return 16LL;
  v9 = a1 - 2;
  if ( !v9 )
    return 32LL;
  v10 = v9 - 8;
  if ( !v10 )
    return 16LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 16LL;
  v12 = v11 - 13;
  if ( !v12 )
    return 10LL;
  v13 = v12 - 4;
  if ( !v13 )
    return 8LL;
  v14 = v13 - 21;
  if ( !v14 )
    return 8LL;
  v15 = v14 - 12;
  if ( !v15 )
    return 8LL;
  v7 = v15 == 4;
LABEL_9:
  if ( v7 )
    return 8LL;
  return 0LL;
}
