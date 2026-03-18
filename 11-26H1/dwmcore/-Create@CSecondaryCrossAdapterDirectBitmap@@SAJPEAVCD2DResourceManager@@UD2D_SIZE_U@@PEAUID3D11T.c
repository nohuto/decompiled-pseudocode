/*
 * XREFs of ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B0274
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F5FD8 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180131BE0 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1801C7800 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 */

__int64 __fastcall CSecondaryCrossAdapterDirectBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        __int64 *a8)
{
  __int64 *v8; // rsi
  void *v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx

  v8 = a8;
  *a8 = 0LL;
  v13 = MIDL_user_allocate(0x148uLL);
  v14 = (__int64)v13;
  if ( v13 )
  {
    CSecondaryD2DBitmap::CSecondaryD2DBitmap((__int64)v13, a1, a2, a3, a4, a5, a6, a7);
    a8 = (__int64 *)v14;
    *(_QWORD *)v14 = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
    *(_QWORD *)(v14 + 72) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)(v14 + 80) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
    *(_QWORD *)(v14 + 88) = &CSecondaryCrossAdapterIndirectBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    *(_QWORD *)(v14 + 96) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
    v15 = CSecondaryD2DBitmap::Initialize((CD2DResourceManager **)v14);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x27u, 0LL);
    }
    else
    {
      a8 = 0LL;
      *v8 = v14;
    }
  }
  else
  {
    v16 = -2147024882;
    a8 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>((__int64 *)&a8);
  return v16;
}
