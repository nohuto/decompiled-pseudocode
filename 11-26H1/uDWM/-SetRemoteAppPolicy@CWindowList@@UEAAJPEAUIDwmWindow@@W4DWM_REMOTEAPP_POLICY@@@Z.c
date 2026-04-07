/*
 * XREFs of ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z @ 0x1800E45A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x18005CB38 (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetRemoteAppPolicy(CWindowList *a1, struct IDwmWindow *a2, int a3)
{
  struct CWindowData *v6; // rdx
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v13; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  CWindowList::GetSyncedWindowData(a1, a2, 1, &v13);
  v6 = v13;
  if ( v13
    && *((_DWORD *)v13 + 52) != a3
    && (*((_DWORD *)v13 + 52) = a3, (v7 = (CTopLevelWindow *)*((_QWORD *)v6 + 55)) != 0LL)
    && (v8 = CTopLevelWindow::EnsureRemoteAppTarget(v7, v6), v9 = v8, v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC30,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v9 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
  return v9;
}
