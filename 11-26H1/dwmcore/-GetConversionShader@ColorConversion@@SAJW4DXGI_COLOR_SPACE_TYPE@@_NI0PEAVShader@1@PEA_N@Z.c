/*
 * XREFs of ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1800FFEB0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FF720 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180176820 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v8; // r10d
  int v9; // ecx
  unsigned int v10; // eax
  char v12; // al
  int v13; // r9d
  int v14; // r9d

  v6 = a6;
  v8 = -2003292288;
  if ( a6 )
  {
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || ColorConversion::IsHDRColorSpace(a1) )
      v12 = 0;
    else
      v12 = a4;
    *v6 = v12;
  }
  if ( a1 )
  {
    switch ( a1 )
    {
      case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
        switch ( a4 )
        {
          case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
            v9 = 54;
            goto LABEL_9;
          case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709:
            v9 = 2;
            v8 = 0;
            goto LABEL_10;
          case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
            v9 = 4;
            v8 = 0;
            goto LABEL_10;
        }
        break;
      case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
        if ( a4 )
        {
          if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          {
            if ( a3 == 8 )
            {
              v9 = 22;
              v8 = 0;
              goto LABEL_10;
            }
            if ( a3 == 10 )
            {
              v9 = 32;
              v8 = 0;
              goto LABEL_10;
            }
          }
        }
        else
        {
          if ( a3 == 8 )
          {
            v9 = 20;
            v8 = 0;
            goto LABEL_10;
          }
          if ( a3 == 10 )
          {
            v9 = 28;
            goto LABEL_9;
          }
        }
        break;
      case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        {
          v9 = 30;
          goto LABEL_9;
        }
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        {
          v9 = 32;
          v8 = 0;
          goto LABEL_10;
        }
        break;
      case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
        switch ( a4 )
        {
          case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
            v9 = 18;
            goto LABEL_9;
          case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709:
            v9 = 16;
            v8 = 0;
            goto LABEL_10;
          case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
            goto LABEL_37;
        }
        break;
      case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        {
          v9 = 42;
          goto LABEL_9;
        }
        v14 = a4 - 1;
        if ( !v14 )
        {
          v9 = 44;
          v8 = 0;
          goto LABEL_10;
        }
        if ( v14 == 11 )
        {
          v9 = 46;
          v8 = 0;
          goto LABEL_10;
        }
        break;
      case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020:
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        {
          v9 = 12;
          goto LABEL_9;
        }
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        {
          v9 = 10;
          v8 = 0;
          goto LABEL_10;
        }
        break;
      case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
        if ( a4 )
        {
          if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          {
            if ( a3 == 8 )
            {
              v9 = 26;
              v8 = 0;
              goto LABEL_10;
            }
            if ( a3 == 10 )
            {
              v9 = 36;
              v8 = 0;
              goto LABEL_10;
            }
          }
        }
        else
        {
          if ( a3 == 8 )
          {
            v9 = 24;
            v8 = 0;
            goto LABEL_10;
          }
          if ( a3 == 10 )
          {
            v9 = 34;
            goto LABEL_9;
          }
        }
        break;
      case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        {
          v9 = 38;
          goto LABEL_9;
        }
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        {
          v9 = 40;
          v8 = 0;
          goto LABEL_10;
        }
        break;
      case DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020|DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        {
          v9 = 48;
LABEL_9:
          v8 = 0;
          goto LABEL_10;
        }
        v13 = a4 - 1;
        if ( !v13 )
        {
          v9 = 50;
          v8 = 0;
          goto LABEL_10;
        }
        if ( v13 == 11 )
        {
          v9 = 52;
          v8 = 0;
          goto LABEL_10;
        }
        break;
      default:
        return v8;
    }
  }
  else
  {
    if ( a4 )
    {
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        return v8;
      v9 = 6;
      v8 = 0;
    }
    else
    {
LABEL_37:
      v8 = 0;
      v9 = 0;
    }
LABEL_10:
    v10 = v9 + 1;
    if ( !a2 )
      v10 = v9;
    *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::sc_rgShaders + v10);
  }
  return v8;
}
