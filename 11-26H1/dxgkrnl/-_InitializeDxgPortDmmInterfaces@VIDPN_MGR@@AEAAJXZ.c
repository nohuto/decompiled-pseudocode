/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DE0C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v6; // rax
  void *v7; // rcx
  _QWORD *v8; // rbx

  v2 = operator new(0x18uLL, 0x4E506456u, 256LL);
  v3 = (void *)*((_QWORD *)this + 49);
  v4 = (_QWORD *)v2;
  if ( (void *)v2 != v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  *((_QWORD *)this + 49) = v4;
  if ( !v4 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3704;
    return 3221225495LL;
  }
  *v4 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v4[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v4[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v6 = operator new(0x18uLL, 0x4E506456u, 256LL);
  v7 = (void *)*((_QWORD *)this + 50);
  v8 = (_QWORD *)v6;
  if ( (void *)v6 != v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  *((_QWORD *)this + 50) = v8;
  if ( !v8 )
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3719;
    return 3221225495LL;
  }
  *v8 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
  v8[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
  v8[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  return 0LL;
}
