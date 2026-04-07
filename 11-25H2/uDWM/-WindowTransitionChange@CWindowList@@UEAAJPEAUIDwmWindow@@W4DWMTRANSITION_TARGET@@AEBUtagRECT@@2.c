/*
 * XREFs of ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x1800E8C10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x1800029D0 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x1800A8A84 (McTemplateU0pd_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::WindowTransitionChange(
        CWindowList *a1,
        struct IDwmWindow *a2,
        unsigned int a3,
        const RECT *a4,
        RECT *a5,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  __int64 v12; // rcx
  struct CWindowData *v13; // rbx
  struct CWindowData *v15; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp-10h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  CWindowList::GetSyncedWindowData(a1, a2, 1, &v15);
  v13 = v15;
  if ( v15 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pd_EtwEventWriteTransfer(v12, (__int64)&UdwmTransitionTarget_Info, *((_QWORD *)v15 + 5), a3);
    CAnimationScheduler::OnWindowTransitionTargetChanged(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
      (__int64)v13,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return 0LL;
}
