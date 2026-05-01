/*
 * XREFs of ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180398060
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1803987F0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed int __fastcall CVirtualTouchpadExperienceManager::PositionCursorForInteraction(
        CVirtualTouchpadExperienceManager *this)
{
  const char *v2; // r9
  __int64 v3; // rdx
  HMONITOR v5; // rcx
  wil::details *v6; // rcx
  LPARAM dwData; // [rsp+20h] [rbp-40h] BYREF
  HMONITOR v8; // [rsp+28h] [rbp-38h]
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v8 = 0LL;
  dwData = (LPARAM)MonitorFromPoint(*(POINT *)((char *)this + 320), 2u);
  if ( dwData == -1 )
  {
    v3 = 540LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v3,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v2);
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_f1e785658634c390da977b3f3dacc9c6_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v5 = v8;
  mi.cbSize = 40;
  mi.rcMonitor = 0LL;
  if ( !v8 )
    v5 = (HMONITOR)dwData;
  v8 = v5;
  memset(&mi.rcWork, 0, 20);
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v3 = 564LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v3,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v2);
  }
  if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD))this + 99))(
         (unsigned int)(mi.rcMonitor.left + (mi.rcMonitor.right - mi.rcMonitor.left) / 2),
         (unsigned int)(mi.rcMonitor.top + (mi.rcMonitor.bottom - mi.rcMonitor.top) / 2)) )
  {
    return 0;
  }
  else
  {
    return wil::details::GetLastErrorFailHr(v6);
  }
}
