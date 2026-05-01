/*
 * XREFs of ?GetImmersiveLauncherMonitorRect@CUndockedSearchAppExperienceManagerConfig@@UEAA?AURect@Foundation@Windows@@PEAUIImmersiveLauncher@@@Z @ 0x1801CB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall CUndockedSearchAppExperienceManagerConfig::GetImmersiveLauncherMonitorRect(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  HMONITOR hMonitor; // [rsp+28h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  hMonitor = 0LL;
  v12 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v6 = v5(a3, &v12);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v11 = 550LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v12 + 40LL))(v12, &hMonitor);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v11 = 552LL;
    goto LABEL_9;
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( GetMonitorInfoW(hMonitor, &mi) )
  {
    *(float *)&v14 = (float)mi.rcMonitor.left;
    *((float *)&v14 + 1) = (float)mi.rcMonitor.top;
    *((float *)&v14 + 2) = (float)(mi.rcMonitor.right - mi.rcMonitor.left);
    *((float *)&v14 + 3) = (float)(mi.rcMonitor.bottom - mi.rcMonitor.top);
    *a2 = v14;
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x22C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v8);
  }
LABEL_5:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return a2;
}
