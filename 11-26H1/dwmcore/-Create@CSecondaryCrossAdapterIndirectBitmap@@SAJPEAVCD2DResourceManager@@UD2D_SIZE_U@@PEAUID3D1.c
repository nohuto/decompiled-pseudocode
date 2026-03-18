/*
 * XREFs of ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B046C
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F5FD8 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180131BE0 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1801C7800 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 */

__int64 __fastcall CSecondaryCrossAdapterIndirectBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8,
        __int64 *a9)
{
  __int64 *v9; // rsi
  void *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx

  v9 = a9;
  *a9 = 0LL;
  v14 = MIDL_user_allocate(0x150uLL);
  v15 = (__int64)v14;
  if ( v14 )
  {
    CSecondaryD2DBitmap::CSecondaryD2DBitmap((__int64)v14, a1, a2, a4, a5, a6, a7, a8);
    *(_QWORD *)v15 = &CSecondaryCrossAdapterIndirectBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
    *(_QWORD *)(v15 + 72) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)(v15 + 80) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
    *(_QWORD *)(v15 + 88) = &CSecondaryCrossAdapterIndirectBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    *(_QWORD *)(v15 + 96) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      (_QWORD *)(v15 + 328),
      a3);
    a9 = (__int64 *)v15;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 8));
    v16 = CSecondaryD2DBitmap::Initialize((CD2DResourceManager **)v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x28u, 0LL);
    }
    else
    {
      a9 = 0LL;
      *v9 = v15;
    }
  }
  else
  {
    v17 = -2147024882;
    a9 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x26u, 0LL);
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>((__int64 *)&a9);
  return v17;
}
