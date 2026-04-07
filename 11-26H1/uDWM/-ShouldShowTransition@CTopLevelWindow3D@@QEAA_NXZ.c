/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180042584 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x1800430D0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18007C210 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800DD6C0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 * Callees:
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180044C18 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  __int64 v3; // r8
  _BYTE *v4; // rcx
  char v5; // bl
  const struct CWindowData *v7; // r8
  CLivePreview *v8; // rcx
  __int64 v9; // rax

  v1 = *((_QWORD *)this + 29);
  if ( !v1 )
    return 0;
  if ( (*(_BYTE *)(v1 + 736) & 0x30) != 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                          + 72LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         16LL) )
  {
    return 0;
  }
  v3 = *((_QWORD *)this + 29);
  v4 = (_BYTE *)(v3 + 740);
  if ( (*(_DWORD *)(v3 + 116) & 0xC00000) != 0xC00000 && (*v4 & 0x40) == 0 )
    return 0;
  if ( *(char *)(v3 + 120) < 0 )
    return 0;
  v5 = 1;
  if ( (*(_BYTE *)(v3 + 736) & 1) == 0 )
    return 0;
  if ( (*v4 & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v3 + 408) )
    return 0;
  if ( !CDesktopManager::IsWindowAnimationEnabled() )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 297) )
  {
    v9 = *((_QWORD *)this + 33);
    if ( !v9 || *(_BYTE *)(v9 + 72) )
      return 0;
  }
  v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
  if ( *((_BYTE *)v8 + 184) )
  {
    if ( v7 && CLivePreview::_IsInLivePreview(v8, v7) )
      return 0;
  }
  if ( !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
    return 0;
  return v5;
}
