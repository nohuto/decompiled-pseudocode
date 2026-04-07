/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180027F00 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180087850 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180096950 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180002CC0 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800030A8 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180016C40 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180028478 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180029CCC (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x180029E98 (-StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002A18C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4 (-Release@CStoryboard@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CStoryboard *v4; // rcx
  __int64 i; // rdi
  int v6; // edx
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v8; // rcx
  __int64 v9; // r10
  int *v10; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    *((_DWORD *)this + 6) = 4;
    CAnimationScheduler::StopWindowTrackingForStoryboard(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      this);
    CStoryboard::_LogStoryboardEvent(this);
    *((_DWORD *)this + 7) = -1;
    v4 = (CStoryboard *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      CStoryboard::Release(v4);
      *((_QWORD *)this + 11) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
    {
      v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 24LL);
      if ( (v6 & 0x20000000) != 0
        && !CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23), v6, this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      if ( WindowDataByHwnd )
      {
        v10 = (int *)((char *)WindowDataByHwnd + 680);
        if ( (v3 || (*v10 & 0xFFF) == 0xFFF) && (*v10 & 0x40000000) == 0 )
          *v10 = *v10 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 12) + 8 * i));
      v8 = *(CBaseObject **)(*((_QWORD *)this + 12) + 8 * i);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 23)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v9 + 192));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
