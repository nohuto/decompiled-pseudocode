/*
 * XREFs of ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18012B648
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012AA90 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012ACF0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x18012C180 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802665E0 (-NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5C70 (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180127C68 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18012A834 (-clear@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18022B938 (-erase@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1802664B4 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r14
  __int64 *i; // rsi
  CComposition *v8; // rcx
  _QWORD **v9; // rcx
  __int64 v10; // rdx
  _QWORD *j; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 186) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(this, 0);
  if ( *((_BYTE *)this + 187) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(this);
  *((_BYTE *)this + 190) = 1;
  *((_BYTE *)this + 184) = 0;
  *((_DWORD *)this + 44) = 0;
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 1);
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 0;
  v5 = *((_QWORD *)this + 6);
  if ( v5 != *((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = v5;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 55) = 0;
  v6 = (__int64 *)*((_QWORD *)this + 10);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i != v6; ++i )
  {
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      &v12,
      *i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 80LL))(
      v12,
      (*(_QWORD *)this + 16LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)this >> 64));
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
  }
  if ( !a2 )
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((__int64 **)this + 9);
  v8 = g_pComposition;
  *((_BYTE *)this + 183) = a2;
  *((_QWORD *)this + 12) = 0LL;
  v9 = (_QWORD **)((char *)v8 + 5944);
  *((_DWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  v10 = *(_QWORD *)this;
  *((_QWORD *)this + 20) = 0LL;
  for ( j = *v9; j != v9[1]; ++j )
  {
    if ( *j == v10 )
    {
      std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::erase(v9, &v12);
      return;
    }
  }
}
