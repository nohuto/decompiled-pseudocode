/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x180136800
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136630 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180136D9C (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180137004 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x1801C180C (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x1801F64B8 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802C5B7C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 3;
  LOBYTE(a2) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    a2);
  if ( *((_DWORD *)this + 54) == 1 && *((_BYTE *)this + 564) && !*((_DWORD *)this + 55) )
  {
    if ( !*((_BYTE *)this + 565) )
    {
      LOBYTE(v4) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
        v4);
    }
    v5 = **((_QWORD **)this + 13);
    if ( v5 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
    {
      v3 = 2;
    }
    else if ( !*((_BYTE *)this + 565) )
    {
LABEL_12:
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 216, 0LL);
      return;
    }
    v6 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v6 >= 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        (char *)this + 216,
        *((_QWORD *)this + 76),
        *((_QWORD *)this + 16),
        v3,
        dword_180897E54);
      return;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7AE,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_12;
  }
}
