/*
 * XREFs of ??1CAnimationComponent@@UEAA@XZ @ 0x18006D9EC
 * Callers:
 *     ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18006D9A0 (--_ECAnimationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x18003D8C8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800449FC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18006DB08 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B75C4 (-UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@.c)
 */

void __fastcall CAnimationComponent::~CAnimationComponent(HWND *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  HWND v4; // rcx
  struct CIconicAnimatedVisual *v5; // rdx
  CDesktopManager *v6; // rsi
  CBaseObject *v7; // rcx

  *this = (HWND)&CAnimationComponent::`vftable';
  CAnimationComponent::_LogEvent(this, 1LL);
  if ( this[2] )
  {
    if ( this[2] != HWND_MESSAGE|0x2LL )
    {
      v6 = CDesktopManager::s_pDesktopManagerInstance;
      if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
              *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
              this[2],
              68,
              0) )
        CTransitionVisualController::RestoreWindow(*((CTransitionVisualController **)v6 + 24), this[2]);
    }
  }
  v2 = (CBaseObject *)this[6];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[6] = 0LL;
  }
  v3 = (CBaseObject *)this[4];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[4] = 0LL;
  }
  v4 = this[5];
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 2));
    this[5] = 0LL;
  }
  v5 = (struct CIconicAnimatedVisual *)this[19];
  if ( v5 )
  {
    CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
      v5);
    v7 = (CBaseObject *)this[19];
    if ( v7 )
    {
      CBaseObject::Release(v7);
      this[19] = 0LL;
    }
  }
  CBaseObject::~CBaseObject((CBaseObject *)this);
}
