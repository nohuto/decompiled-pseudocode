/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180019340
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800033F8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004E750 (-UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4430 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x180019400 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800787B0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  CDesktopManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v6; // ebx

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 48LL))(a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x66Fu, 0LL);
    return v4;
  }
  CWindowList::DestroyPendingSprites(*((CWindowList **)v2 + 53));
  if ( *((_BYTE *)v2 + 18) || !*((_DWORD *)v2 + 136) || *((_BYTE *)v2 + 19) )
    return v4;
  *((_BYTE *)v2 + 19) = 1;
  result = CDesktopManager::SendRoundTripRequest(v2, 0LL);
  v6 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x680u, 0LL);
    return v6;
  }
  return result;
}
