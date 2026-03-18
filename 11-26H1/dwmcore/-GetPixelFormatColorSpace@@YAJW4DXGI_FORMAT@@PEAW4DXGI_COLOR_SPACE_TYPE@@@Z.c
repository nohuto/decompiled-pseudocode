/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BAF04
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1801BADC0 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802A4924 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  v2 = 0;
  if ( a1 > 67 )
  {
    v12 = a1 - 87;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          v15 = v14 - 12;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 2;
              if ( v17 )
              {
                v11 = v17 == 1;
LABEL_22:
                if ( !v11 )
                  return (unsigned int)-2003292344;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( a1 == 67 )
    {
      *a2 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020|DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      return v2;
    }
    v3 = a1 - 2;
    if ( !v3 || (v4 = v3 - 8) == 0 )
    {
      *a2 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      return v2;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v7 = v5 - 13;
      if ( v7 )
      {
        v8 = v7 - 4;
        if ( v8 )
        {
          v9 = v8 - 21;
          if ( v9 )
          {
            v10 = v9 - 12;
            if ( v10 )
            {
              v11 = v10 == 4;
              goto LABEL_22;
            }
          }
        }
      }
    }
  }
  *a2 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  return v2;
}
