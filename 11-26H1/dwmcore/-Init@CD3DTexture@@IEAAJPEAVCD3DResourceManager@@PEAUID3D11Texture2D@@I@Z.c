/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1801BADC0
 * Callers:
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801BAC74 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BAF04 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801BAF80 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  enum DXGI_FORMAT v8; // r10d
  int PixelFormatColorSpace; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 128);
  *((_DWORD *)this + 44) = (unsigned int)HasAlphaChannel(*((_DWORD *)this + 36)) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum DXGI_COLOR_SPACE_TYPE *)this + 45);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 75;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelFormatColorSpace, v13, 0LL);
    return v10;
  }
  v11 = *((_DWORD *)this + 34);
  *((_DWORD *)this + 46) = v11;
  if ( !v11 || v11 > 0x20 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x50u, 0LL);
    return v10;
  }
  *((_DWORD *)this + 43) = a4;
  if ( a4 >= *((_DWORD *)this + 35) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x56u, 0LL);
    return v10;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 92;
    goto LABEL_8;
  }
  return v10;
}
