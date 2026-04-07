/*
 * XREFs of ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007E478
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001AC1C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18002592C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::_IsTrulyMaximized(CLivePreview *this, HWND *a2)
{
  char v2; // bl
  HMONITOR v5; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 673) & 2) != 0 )
  {
    v5 = MonitorFromWindow(a2[5], 0);
    if ( v5 )
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( GetMonitorInfoW(v5, &mi) )
      {
        v6 = 0;
        if ( mi.rcWork.right - mi.rcWork.left >= 0 )
          v6 = mi.rcWork.right - mi.rcWork.left;
        v7 = 0;
        if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
          v7 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
        if ( v7 >= v6 )
        {
          v8 = 0;
          if ( mi.rcWork.bottom - mi.rcWork.top >= 0 )
            v8 = mi.rcWork.bottom - mi.rcWork.top;
          v9 = 0;
          if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
            v9 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
          if ( v9 >= v8 )
            return 1;
        }
      }
    }
  }
  return v2;
}
