/*
 * XREFs of ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800E57F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetWindowBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  CTopLevelWindow *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-30h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  *(_QWORD *)&v9.left = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, (struct CWindowData **)&v9);
  if ( *(_QWORD *)&v9.left )
  {
    v6 = *(CTopLevelWindow **)(*(_QWORD *)&v9.left + 440LL);
    if ( v6 )
      *a3 = *CTopLevelWindow::GetActualWindowRect(v6, &v9, 0, 1, 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
