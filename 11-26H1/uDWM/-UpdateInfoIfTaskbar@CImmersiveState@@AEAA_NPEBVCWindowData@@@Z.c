/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x180019194
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001A914 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDesktopWorkAreaInfo@@$0A@@@QEAAJPEFBUDesktopWorkAreaInfo@@I@Z @ 0x180070398 (-AddMultipleAndSet@-$DynArray@UDesktopWorkAreaInfo@@$0A@@@QEAAJPEFBUDesktopWorkAreaInfo@@I@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1800E6C64 (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // si
  HMONITOR v6; // rbx
  bool v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  LONG left; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  LONG right; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  HMONITOR v18; // r8
  _DWORD v19[4]; // [rsp+20h] [rbp-E0h] BYREF
  HMONITOR v20; // [rsp+30h] [rbp-D0h]
  tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v6 = MonitorFromWindow(a2[5], 0);
    if ( v6 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v6;
      v7 = 0;
      v8 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v7 )
        {
          v17 = 3 * v8;
          v8 = (unsigned int)(v8 + 1);
          v18 = *(HMONITOR *)(*((_QWORD *)this + 2) + 8 * v17 + 16);
          v7 = v6 == v18;
          if ( (unsigned int)v8 >= *((_DWORD *)this + 10) )
          {
            if ( v6 == v18 )
              return v4;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v6, &mi) )
        {
          v9 = (unsigned __int64)a2[6];
          left = v9;
          v11 = (unsigned __int64)a2[7];
          if ( mi.rcWork.left < (int)v9 )
            left = mi.rcWork.left;
          v12 = HIDWORD(v9);
          v19[0] = left;
          v13 = HIDWORD(*(_QWORD *)&mi.rcWork.left);
          v20 = v6;
          if ( mi.rcWork.top >= (int)v12 )
            LODWORD(v13) = v12;
          v19[1] = v13;
          right = v11;
          if ( mi.rcWork.right > (int)v11 )
            right = mi.rcWork.right;
          v15 = HIDWORD(v11);
          v16 = HIDWORD(*(_QWORD *)&mi.rcWork.right);
          v19[2] = right;
          if ( mi.rcWork.bottom <= (int)v15 )
            LODWORD(v16) = v15;
          v19[3] = v16;
          DynArray<DesktopWorkAreaInfo,0>::AddMultipleAndSet((char *)this + 16, v19);
        }
      }
    }
  }
  return v4;
}
