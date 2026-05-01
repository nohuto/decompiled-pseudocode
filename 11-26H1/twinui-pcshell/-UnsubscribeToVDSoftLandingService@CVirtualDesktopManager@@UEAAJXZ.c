/*
 * XREFs of ?UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ @ 0x180558030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021C264 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::UnsubscribeToVDSoftLandingService(CVirtualDesktopManager *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( *((_DWORD *)this + 52) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 104LL))(*((_QWORD *)this + 13));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E4,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 52) = 0;
  }
  return 0LL;
}
