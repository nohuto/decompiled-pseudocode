/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180033460 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180042130 (-UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001AEB0 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800688C0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  CDesktopManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 48LL))(a2);
  CWindowList::DestroyPendingSprites(*((CWindowList **)v2 + 53));
  if ( *((_BYTE *)v2 + 18) )
    return 0LL;
  if ( !*((_DWORD *)v2 + 138) )
    return 0LL;
  if ( *((_BYTE *)v2 + 19) )
    return 0LL;
  *((_BYTE *)v2 + 19) = 1;
  v3 = CDesktopManager::SendRoundTripRequest(v2, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x666,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
