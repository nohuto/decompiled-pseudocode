/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800C1F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800505F0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18006C7C0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CEF3C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  CBaseObject *v1; // rdi
  HMONITOR v3; // r14
  int TrustLevel; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  RECT rcWork; // xmm0
  int v8; // eax
  int v9; // eax
  CBaseObject *v11; // [rsp+30h] [rbp-50h] BYREF
  RECT v12; // [rsp+40h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-30h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  *(_QWORD *)&v12.left = 0LL;
  mi.cbSize = 40;
  v3 = MonitorFromPoint(0LL, 1u);
  memset(&mi.rcMonitor, 0, 36);
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v5 = TrustLevel;
  if ( TrustLevel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      TrustLevel,
      0x1302u,
      0LL);
  }
  else
  {
    if ( !GetMonitorInfoW(v3, &mi) )
      return v5;
    if ( *((_BYTE *)this + 128) )
      rcWork = mi.rcWork;
    else
      rcWork = mi.rcMonitor;
    v12 = rcWork;
    v8 = CTransitionVisualController::CreateDesktopSnapshotComponent(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
           v6,
           &v12,
           this,
           &v11);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x1307u, 0LL);
      v1 = v11;
    }
    else
    {
      v1 = v11;
      v9 = CStoryboard::_AddAnimationComponent(this, v11);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v9,
          0x1308u,
          0LL);
    }
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return v5;
}
