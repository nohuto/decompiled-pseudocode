/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C7D4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800505F0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B7A10 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  CBaseObject *v1; // rsi
  int TrustLevel; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char IsLauncherVisible; // al
  CDesktopManager *v7; // rcx
  CAnimationScheduler *v8; // rcx
  const int *v9; // rdx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  CImmersiveState *v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v4 = TrustLevel;
  if ( TrustLevel < 0 )
  {
    v9 = &CStoryboard::MILINSTRUMENTATIONHRESULTLIST;
    v11 = 2585;
  }
  else
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v13) )
    {
      v4 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F98C8, 1LL, -2147467259, 0xA22u, 0LL);
      return v4;
    }
    v5 = CImmersiveState::Create(&v12, v13);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F98C8, 1LL, v5, 0xA24u, 0LL);
      v1 = v12;
      goto LABEL_14;
    }
    v1 = v12;
    IsLauncherVisible = CImmersiveState::IsLauncherVisible(v12);
    v7 = CDesktopManager::s_pDesktopManagerInstance;
    IsLauncherVisible ^= 1u;
    *((_BYTE *)this + 128) = IsLauncherVisible;
    v8 = (CAnimationScheduler *)*((_QWORD *)v7 + 23);
    if ( IsLauncherVisible )
    {
      TrustLevel = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v8, 0x3Bu, 0LL, this, 0LL);
      v4 = TrustLevel;
      if ( TrustLevel >= 0 )
        goto LABEL_14;
      v11 = 2600;
    }
    else
    {
      TrustLevel = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v8, 0x3Au, 0LL, this, 0LL);
      v4 = TrustLevel;
      if ( TrustLevel >= 0 )
        goto LABEL_14;
      v11 = 2604;
    }
    v9 = &dword_1800F98C8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, v9, 1LL, TrustLevel, v11, 0LL);
LABEL_14:
  if ( v1 )
    CBaseObject::Release(v1);
  return v4;
}
