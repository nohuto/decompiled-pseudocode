/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802A4924
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1802A46B0 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F8180 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130F00 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1801B05F8 (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BAF04 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x1802A47D8 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DSurface::Init(
        CD3DSurface *this,
        struct CD3DResourceManager *a2,
        struct IDXGIResource *a3,
        int a4)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // r8d
  int PixelFormatColorSpace; // eax
  bool v11; // cc
  CD3DDevice *v12; // rax
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v13; // r8
  CD3DDevice *v14; // rax
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v15; // r8
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  struct IDXGIResource *v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = a4;
  v20 = a3;
  v5 = *((_QWORD *)this + 16);
  v20 = 0LL;
  v21 = 0;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 140);
  if ( !*((_DWORD *)this + 38) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x9Du, 0LL);
    goto LABEL_25;
  }
  v8 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel(v8) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v9, (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 176;
    goto LABEL_24;
  }
  *((_DWORD *)this + 28) = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 120LL))(this);
  *((_BYTE *)this + 118) = 1;
  *((_QWORD *)this + 5) = a2;
  CD3DResourceManager::RegisterResource(a2, this);
  PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v20);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 190;
    goto LABEL_24;
  }
  PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v20->lpVtbl->GetUsage)(v20, &v21);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 192;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelFormatColorSpace, v17, 0LL);
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (v21 & 0x100) == 0 )
  {
    v11 = *((_DWORD *)this + 38) <= 1u;
    v18 = 0LL;
    LODWORD(v19) = 0;
    if ( !v11 )
    {
      LODWORD(v18) = *((_DWORD *)this + 39);
      HIDWORD(v18) = *((_DWORD *)this + 34);
      *(_QWORD *)((char *)&v18 + 4) = 5LL;
      LODWORD(v19) = 1;
    }
    v12 = (CD3DDevice *)(*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 40LL))(this);
    v13 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v18;
    if ( *((_DWORD *)this + 38) <= 1u )
      v13 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateRenderTargetView(
                              v12,
                              *((struct ID3D11Resource **)this + 16),
                              v13,
                              (struct ID3D11RenderTargetView **)this + 24);
    v7 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v17 = 216;
      goto LABEL_24;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v11 = *((_DWORD *)this + 38) <= 1u;
    v18 = 0LL;
    v19 = 0LL;
    if ( !v11 )
    {
      LODWORD(v18) = *((_DWORD *)this + 39);
      HIDWORD(v18) = *((_DWORD *)this + 37);
      LODWORD(v19) = *((_DWORD *)this + 34);
      *(_QWORD *)((char *)&v18 + 4) = 5LL;
      HIDWORD(v19) = 1;
    }
    v14 = (CD3DDevice *)(*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 40LL))(this);
    v15 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v18;
    if ( *((_DWORD *)this + 38) <= 1u )
      v15 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                              v14,
                              *((struct ID3D11Resource **)this + 16),
                              v15,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v7 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v17 = 238;
      goto LABEL_24;
    }
  }
LABEL_25:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v20);
  return v7;
}
