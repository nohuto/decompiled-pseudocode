/*
 * XREFs of ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557A30
 * Callers:
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x180557B70 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0100 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C0A8C (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180550644 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180551030 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551ABC (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180556D04 (-SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA-AUIAsyncAction@Foundation@Windows@winr.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180556E90 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopWithAnimation(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // r8
  int v8; // eax
  _BYTE v9[48]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v10; // [rsp+50h] [rbp-48h]
  _BYTE v11[56]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 28) )
  {
    if ( (unsigned int)CVirtualDesktopManager::GetSwitcherType((__int64)this - 8) == 1 )
    {
      v4 = CVirtualDesktopManager::SwitchDesktop(this, a2);
      if ( v4 < 0 )
      {
        v5 = 454LL;
        goto LABEL_4;
      }
    }
    else
    {
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v9);
      if ( !tip2::details::shared_data<1,0,0>::is_running(v10 + 8) )
      {
        tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v11);
        tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v11);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
        1u,
        v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v8);
      CVirtualDesktopManager::SwitchContextForVDAnimation((__int64)this - 8, &v13, (__int64)a2, 0);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
      tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v9);
    }
  }
  else
  {
    v4 = CVirtualDesktopManager::SwitchDesktop(this, a2);
    if ( v4 < 0 )
    {
      v5 = 445LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  return 0LL;
}
