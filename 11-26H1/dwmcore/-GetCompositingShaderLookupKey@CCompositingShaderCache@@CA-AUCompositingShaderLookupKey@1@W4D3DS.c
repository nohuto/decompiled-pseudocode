/*
 * XREFs of ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800F9A80
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F97A4 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B3C20 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800F9B08 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCompositingShaderCache::GetCompositingShaderLookupKey(char a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  enum DXGI_FORMAT *v5; // r10
  __int64 v6; // r8
  enum DXGI_FORMAT *v7; // r9
  unsigned int ColorChannelDepth; // eax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx

  v3 = 0LL;
  v4 = a3 & 0x1F;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v5 = (enum DXGI_FORMAT *)a2[1];
  v6 = (a1 != 0 ? 0x40 : 0) | v3 | v4;
  v7 = &v5[3 * *a2];
  while ( v5 != v7 )
  {
    ColorChannelDepth = GetColorChannelDepth(*v5);
    v12 = (4 * ((32 * v11) | *(_DWORD *)(v9 + 8) & 0x1F)) | (ColorChannelDepth == 8);
    v13 = 0LL;
    if ( *(_DWORD *)(v9 + 4) == 3 )
      v13 = v10;
    v6 = v13 | v12;
    v5 = (enum DXGI_FORMAT *)(v9 + 12);
  }
  return v6;
}
