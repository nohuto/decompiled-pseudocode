/*
 * XREFs of ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC
 * Callers:
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180013950 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800F5310 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800F53A0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800F5410 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F5710 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1801A4414 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::ResetBitmapCache(CRenderTargetBitmap *this)
{
  __int64 v1; // rdi
  void (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  bool v6; // zf
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
  v9 = 0LL;
  if ( v3 && !*((_BYTE *)this + 128) )
  {
    (**v3)(v3, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v9);
    v1 = v9;
  }
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>();
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  }
  v4 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 4);
  v5 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v5 )
    CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
  v6 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v6 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 4);
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
      *((_QWORD *)this + 3),
      &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5,
      (char *)this + 32);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3)) )
    {
      v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
      v10 = 0LL;
      if ( (**v7)(v7, &IID_IWICDecoderBitmapSource, &v10) >= 0 )
      {
        v8 = v10;
        *((_BYTE *)this + 72) = 1;
        ReleaseInterfaceNoNULL<ID2D1Ink>(v8);
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
