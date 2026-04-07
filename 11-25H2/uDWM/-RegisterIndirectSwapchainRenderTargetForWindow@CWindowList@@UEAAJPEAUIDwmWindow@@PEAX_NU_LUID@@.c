/*
 * XREFs of ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x1800E6D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterIndirectSwapchainRenderTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        void *a3,
        bool a4,
        struct _LUID a5)
{
  CTopLevelWindow *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  if ( v14 && (v9 = (CTopLevelWindow *)*((_QWORD *)v14 + 55)) != 0LL )
  {
    v10 = CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(v9, a3, a4, a5);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x185Bu, 0LL);
  }
  else
  {
    v11 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0x1854u, 0LL);
    if ( a3 )
      CloseHandle(a3);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v11;
}
