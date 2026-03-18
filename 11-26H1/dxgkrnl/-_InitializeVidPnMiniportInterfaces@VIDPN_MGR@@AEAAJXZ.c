/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DF30
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x14001D83C (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x140266700 (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14026678C (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140266818 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1402668A4 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x14026695C (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x140266A04 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(void **this)
{
  void *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  void *v6; // rax
  struct _DXGK_VIDPN_INTERFACE *v7; // rdx
  DXGK_VIDPN_INTERFACE_V2_IMPL *v8; // rcx
  __int64 v9; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v10; // rdx
  void *v11; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v12; // rbx
  __int64 v13; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v14; // rdx
  void *v15; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v16; // rbx
  void *v17; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v18; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v19; // rcx
  void *v20; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v21; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *v22; // rcx

  v2 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 51, v2);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)this[51];
  if ( !v4 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3743;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v4, v3);
  v6 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 52, v6);
  v8 = (DXGK_VIDPN_INTERFACE_V2_IMPL *)this[52];
  if ( !v8 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3758;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(v8, v7);
  v9 = operator new(0x60uLL, 0x4E506456u, 256LL);
  v11 = this[53];
  v12 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v9;
  if ( (void *)v9 != v11 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
  this[53] = v12;
  if ( !v12 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3773;
    return 3221225495LL;
  }
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v12, v10);
  v13 = operator new(0x40uLL, 0x4E506456u, 256LL);
  v15 = this[54];
  v16 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v13;
  if ( (void *)v13 != v15 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  this[54] = v16;
  if ( !v16 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3788;
    return 3221225495LL;
  }
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v16, v14);
  v17 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 55, v17);
  v19 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this[55];
  if ( !v19 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3803;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v19, v18);
  v20 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 56, v20);
  v22 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *)this[56];
  if ( !v22 )
  {
    VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3818;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::InitializeInterface(v22, v21);
  return 0LL;
}
