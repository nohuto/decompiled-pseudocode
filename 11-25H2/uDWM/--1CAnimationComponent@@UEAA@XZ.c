/*
 * XREFs of ??1CAnimationComponent@@UEAA@XZ @ 0x18006B7EC
 * Callers:
 *     ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18006B7A0 (--_ECAnimationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18006B8F8 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x18006BEFC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z.c)
 *     ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B85D4 (-UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@.c)
 */

void __fastcall CAnimationComponent::~CAnimationComponent(CAnimationComponent *this)
{
  HWND v2; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  __int64 v5; // rcx
  struct CIconicAnimatedVisual *v6; // rdx
  CDesktopManager *v7; // rsi
  CBaseObject *v8; // rcx

  *(_QWORD *)this = &CAnimationComponent::`vftable';
  CAnimationComponent::_LogEvent(this, 1LL);
  v2 = (HWND)*((_QWORD *)this + 2);
  if ( (unsigned __int64)v2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
            *((HWND *)this + 2),
            68,
            0) )
      CTransitionVisualController::RestoreWindow(*((CTransitionVisualController **)v7 + 24), v2);
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    CBaseObject::Release((CBaseObject *)(v5 + 8));
    *((_QWORD *)this + 5) = 0LL;
  }
  v6 = (struct CIconicAnimatedVisual *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
      v6);
    v8 = (CBaseObject *)*((_QWORD *)this + 19);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  CBaseObject::~CBaseObject(this);
}
