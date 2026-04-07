/*
 * XREFs of ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E216C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180042B4C (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180045CD8 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18006F9CC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementStart(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[87]
    || (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd((CWindowList *)this, *((HWND *)a2 + 1)),
        (this[87] = WindowDataByHwnd) != 0LL) )
  {
    v6 = CWindowList::EnsureAcrylicSheet((CWindowList *)this);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1EF4u, 0LL);
    }
    else
    {
      v7 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1EF5u, 0LL);
      }
      else
      {
        v8 = CWindowArrangementTransition::OnWindowArrangementStart(this[66], this[87], (const struct tagRECT *)a2 + 1);
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1EF6u, 0LL);
        else
          *((_BYTE *)this[87] + 741) |= 0x20u;
      }
    }
  }
  if ( this[87] && !this[67] )
  {
    if ( v4 >= 0 )
      AssertW(
        0LL,
        L"(((HRESULT)(hr)) < 0)",
        L"CWindowList::OnWindowArrangementStart",
        L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        0x1EFDu);
    this[87] = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return (unsigned int)v4;
}
