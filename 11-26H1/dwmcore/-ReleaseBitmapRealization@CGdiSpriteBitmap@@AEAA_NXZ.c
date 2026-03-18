/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A624
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800E0920 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801DB850 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  __int64 *v1; // rsi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  char v4; // di
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 448);
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 56);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    if ( (**v3)(v3, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v7) >= 0 )
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v7 + 80LL))(
        v7,
        ((unsigned __int64)this + 112) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    v5 = v7;
    v4 = 1;
    *((_QWORD *)this + 46) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_QWORD *)this + 57) != *((_QWORD *)this + 58) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>();
    *((_QWORD *)this + 58) = *((_QWORD *)this + 57);
  }
  return v4;
}
