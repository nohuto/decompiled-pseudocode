/*
 * XREFs of ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x1800E1F10
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnProxyWindowUpdate(CWindowList *this, HWND a2, HWND a3)
{
  __int64 v6; // rbp
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  struct CWindowData *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd )
  {
    v11 = 0LL;
    if ( !a3 || (v11 = CWindowList::FindWindowDataByHwnd(this, a3)) != 0LL )
    {
      v12 = *((_QWORD *)WindowDataByHwnd + 81);
      if ( v12 )
      {
        v6 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 656) = 0LL;
      }
      if ( a3 )
      {
        if ( *((_QWORD *)v11 + 82) )
        {
          v8 = -2147024809;
          v9 = 2147942487LL;
          v10 = 8287LL;
          goto LABEL_16;
        }
        *((_QWORD *)WindowDataByHwnd + 81) = v11;
        *((_QWORD *)v11 + 82) = WindowDataByHwnd;
        if ( !*((_QWORD *)v11 + 55) )
          *((_BYTE *)v11 + 741) |= 4u;
      }
      else
      {
        *((_QWORD *)WindowDataByHwnd + 81) = 0LL;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 59)
                                                                   + 56LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
              a2,
              a3,
              v6);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v8 = 0;
        goto LABEL_18;
      }
      v9 = (unsigned int)v13;
      v10 = 8302LL;
    }
    else
    {
      v8 = -2147024809;
      v9 = 2147942487LL;
      v10 = 8268LL;
    }
  }
  else
  {
    v8 = -2147024809;
    v9 = 2147942487LL;
    v10 = 8263LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v9);
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
