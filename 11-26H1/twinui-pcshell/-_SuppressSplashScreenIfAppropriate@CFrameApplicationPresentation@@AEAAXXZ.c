/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800A8B98
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1802119C0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x180077848 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A7360 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8DF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18018A018 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(CFrameApplicationPresentation *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    3u);
  if ( *((_DWORD *)this + 54) == 1 && *((_BYTE *)this + 564) && !*((_DWORD *)this + 55) )
  {
    if ( !*((_BYTE *)this + 565) )
    {
      LOBYTE(v3) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
        v3);
    }
    v4 = **((_QWORD **)this + 13);
    if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) )
    {
      v2 = 2;
    }
    else if ( !*((_BYTE *)this + 565) )
    {
LABEL_12:
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 216, 0LL);
      return;
    }
    v5 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v5 >= 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        (__int64)this + 216,
        *((const unsigned __int16 **)this + 76),
        *((HWND *)this + 16),
        v2,
        dword_1808D8464);
      return;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7AE,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
}
