/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x1800DFB50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017664 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  struct CWindowData *v6; // rdx
  CTopLevelWindow *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-18h] BYREF
  struct CWindowData *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 0, &v10);
  v6 = v10;
  if ( v10 )
  {
    if ( (a3->dwFlags & 1) != 0 )
      *((_BYTE *)v10 + 737) = *((_BYTE *)v10 + 737) & 0xFB | (a3->fEnable ? 4 : 0);
    if ( (a3->dwFlags & 4) != 0 )
      *((_BYTE *)v6 + 737) = *((_BYTE *)v6 + 737) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
    v7 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
    if ( v7 )
      CTopLevelWindow::OnBlurBehindUpdated(v7);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return 0LL;
}
