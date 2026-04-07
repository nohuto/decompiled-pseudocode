/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800E8080
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007C468 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  unsigned int v6; // esi
  struct CWindowData *v7; // rdx
  CTopLevelWindow *v8; // rcx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = v12;
  if ( v12 )
  {
    *((_BYTE *)v12 + 677) = (2 * a3) | *((_BYTE *)v12 + 677) & 0xFD;
    v8 = (CTopLevelWindow *)*((_QWORD *)v7 + 55);
    if ( v8 )
    {
      v9 = CTopLevelWindow::SetHolographic(v8, a3);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xA21u, 0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v6;
}
