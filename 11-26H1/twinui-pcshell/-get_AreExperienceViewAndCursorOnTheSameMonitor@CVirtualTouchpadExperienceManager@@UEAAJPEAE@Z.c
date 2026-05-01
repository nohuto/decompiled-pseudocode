/*
 * XREFs of ?get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1803998A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor(
        CVirtualTouchpadExperienceManager *this,
        bool *a2)
{
  ExperienceManagerUtils *v4; // rcx
  HWND v6; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  unsigned int (__fastcall *v9)(POINT *); // rax
  HMONITOR v10; // rbx
  HMONITOR v11; // rax
  POINT pt; // [rsp+20h] [rbp-58h]
  POINT v13; // [rsp+28h] [rbp-50h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (ExperienceManagerUtils *)*((_QWORD *)this + 11);
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               v4,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  memset(&wndpl, 0, sizeof(wndpl));
  if ( !GetWindowPlacement(v6, &wndpl) )
  {
    v8 = 725LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  pt = *(POINT *)&wndpl.rcNormalPosition.left;
  v9 = (unsigned int (__fastcall *)(POINT *))*((_QWORD *)this + 101);
  v13 = 0LL;
  if ( !v9(&v13) )
  {
    v8 = 729LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v10 = MonitorFromPoint(pt, 2u);
  if ( v10 == (HMONITOR)-1LL )
  {
    v8 = 732LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v11 = MonitorFromPoint(v13, 2u);
  if ( v11 == (HMONITOR)-1LL )
  {
    v8 = 735LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  *a2 = v11 == v10;
  return 0LL;
}
