/*
 * XREFs of ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DA4C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z @ 0x14026362C (-InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1402636D4 (-InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODE.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x14026378C (-InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERF.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDmmClientInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  struct _DXGDMM_INTERFACE *v3; // rdx
  void *v4; // rcx
  DXGDMM_INTERFACE_V1_IMPL *v5; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // rdx
  void *v18; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v19; // rdi
  __int64 v20; // rax
  void *v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v24; // rdx
  void *v25; // rcx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v26; // rdi

  v2 = operator new(0x58uLL, 0x4E506456u, 256LL);
  v4 = (void *)*((_QWORD *)this + 57);
  v5 = (DXGDMM_INTERFACE_V1_IMPL *)v2;
  if ( (void *)v2 != v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  *((_QWORD *)this + 57) = v5;
  if ( !v5 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3843;
    return 3221225495LL;
  }
  DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
  v7 = operator new(0x20uLL, 0x4E506456u, 256LL);
  v8 = (void *)*((_QWORD *)this + 58);
  v9 = (_QWORD *)v7;
  if ( (void *)v7 != v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  *((_QWORD *)this + 58) = v9;
  if ( !v9 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3858;
    return 3221225495LL;
  }
  *v9 = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::GetNumSources;
  v9[1] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo;
  v9[2] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo;
  v9[3] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v10 = operator new(0x20uLL, 0x4E506456u, 256LL);
  v11 = (void *)*((_QWORD *)this + 59);
  v12 = (_QWORD *)v10;
  if ( (void *)v10 != v11 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
  *((_QWORD *)this + 59) = v12;
  if ( !v12 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3873;
    return 3221225495LL;
  }
  *v12 = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets;
  v12[1] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo;
  v12[2] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo;
  v12[3] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  v13 = operator new(0x38uLL, 0x4E506456u, 256LL);
  v14 = (void *)*((_QWORD *)this + 60);
  v15 = (_QWORD *)v13;
  if ( (void *)v13 != v14 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  *((_QWORD *)this + 60) = v15;
  if ( !v15 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3889;
    return 3221225495LL;
  }
  *v15 = DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  v15[1] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  v15[2] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  v15[3] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet;
  v15[4] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  v15[5] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet;
  v15[6] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet;
  v16 = operator new(0x88uLL, 0x4E506456u, 256LL);
  v18 = (void *)*((_QWORD *)this + 61);
  v19 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v16;
  if ( (void *)v16 != v18 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  *((_QWORD *)this + 61) = v19;
  if ( !v19 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3904;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v19, v17);
  v20 = operator new(0x38uLL, 0x4E506456u, 256LL);
  v21 = (void *)*((_QWORD *)this + 62);
  v22 = (_QWORD *)v20;
  if ( (void *)v20 != v21 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
  *((_QWORD *)this + 62) = v22;
  if ( !v22 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3919;
    return 3221225495LL;
  }
  *v22 = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes;
  v22[1] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  v22[2] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  v22[3] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  v22[4] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  v22[5] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode;
  v22[6] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode;
  v23 = operator new(0x60uLL, 0x4E506456u, 256LL);
  v25 = (void *)*((_QWORD *)this + 63);
  v26 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v23;
  if ( (void *)v23 != v25 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
  *((_QWORD *)this + 63) = v26;
  if ( !v26 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3934;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v26, v24);
  return 0LL;
}
