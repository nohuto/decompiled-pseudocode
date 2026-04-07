/*
 * XREFs of ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180030F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031018 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x18009A2D4 (McTemplateU0pd_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::WindowTransitionChange(
        CWindowList *a1,
        struct IDwmWindow *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rcx
  struct CWindowData *v13; // rbx
  struct CWindowData *v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v15[1] = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15[0] = 0LL;
  CWindowList::GetSyncedWindowData(a1, a2, 1, v15);
  v13 = v15[0];
  if ( v15[0] )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pd_EtwEventWriteTransfer(v12, &UdwmTransitionTarget_Info, *((_QWORD *)v15[0] + 5), a3);
    CAnimationScheduler::OnWindowTransitionTargetChanged(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
      v13,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
