/*
 * XREFs of ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E04A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateWindowTarget(CWindowList *this, struct IDwmWindow *a2, void *a3)
{
  struct CWindowTarget **v6; // rcx
  int WindowTarget; // eax
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  if ( v11 && (v6 = (struct CWindowTarget **)*((_QWORD *)v11 + 55)) != 0LL )
  {
    WindowTarget = CTopLevelWindow::CreateWindowTarget(v6, a3);
    v8 = WindowTarget;
    if ( WindowTarget < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowTarget, 0xB67u, 0LL);
  }
  else
  {
    v8 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0xB64u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v8;
}
