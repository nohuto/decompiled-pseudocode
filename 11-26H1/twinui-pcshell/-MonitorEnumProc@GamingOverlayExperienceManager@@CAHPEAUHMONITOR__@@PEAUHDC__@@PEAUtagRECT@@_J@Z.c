/*
 * XREFs of ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180225C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$emplace_back@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAY0CA@G@Z @ 0x18033F9FC (--$emplace_back@AEAY0CA@G@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::MonitorEnumProc(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  LONG v10; // ecx
  LONG v11; // ecx
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v13[72]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v14[64]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(a1, &mi) )
  {
    v6 = -2147467259;
    v7 = 2852LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v6);
    return v6;
  }
  memset_0(v14, 0, sizeof(v14));
  if ( (unsigned int)_o_wcscpy_s(v14, 32LL, v13) )
  {
    v6 = -2147024809;
    v7 = 2855LL;
    goto LABEL_3;
  }
  std::vector<std::wstring>::emplace_back<unsigned short (&)[32]>(a4 + 1488, v14);
  v9 = *(_DWORD *)(a4 + 1512);
  if ( v9 == -1 )
  {
    *(_DWORD *)(a4 + 1512) = 0;
    v9 = 0;
  }
  else if ( v9 )
  {
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(a4 + 1532);
  if ( v10 < mi.rcMonitor.right && v10 >= mi.rcMonitor.left )
  {
    v11 = *(_DWORD *)(a4 + 1536);
    if ( v11 < mi.rcMonitor.bottom && v11 >= mi.rcMonitor.top )
      goto LABEL_14;
  }
LABEL_13:
  if ( v9 == (unsigned int)((__int64)(*(_QWORD *)(a4 + 1496) - *(_QWORD *)(a4 + 1488)) >> 5) - 1 )
LABEL_14:
    *(RECT *)(a4 + 1516) = mi.rcMonitor;
  return 1LL;
}
