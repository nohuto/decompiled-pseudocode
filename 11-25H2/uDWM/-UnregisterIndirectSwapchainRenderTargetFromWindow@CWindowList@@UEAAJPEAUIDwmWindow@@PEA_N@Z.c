/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x1800E8AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x180010220 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UnregisterIndirectSwapchainRenderTargetFromWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        bool *a3)
{
  CTopLevelWindow *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  struct CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  *a3 = 0;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  if ( v10 && (v6 = (CTopLevelWindow *)*((_QWORD *)v10 + 55)) != 0LL )
  {
    v7 = CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(v6, a3);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1874u, 0LL);
  }
  else
  {
    v8 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0x1871u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
