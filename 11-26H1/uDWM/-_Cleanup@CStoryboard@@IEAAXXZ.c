/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180029C10 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x18003D6C0 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180088F4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001E550 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800296AC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800312F4 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180031F68 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x18003EF94 (-StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CStoryboard *v4; // rcx
  __int64 i; // rdi
  __int64 v6; // rdx
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
      v6 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 24LL);
      if ( (v6 & 0x20000000) != 0
        && !(unsigned __int8)CAnimationScheduler::ShouldSnapshot(
                               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                               v6,
                               this) )
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
        v10 = (int *)((char *)WindowDataByHwnd + 744);
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
