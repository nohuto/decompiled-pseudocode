/*
 * XREFs of ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E69A8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180038B94 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007DFFC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementStart(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  int v6; // eax
  const struct std::nothrow_t *v7; // rdx
  int v8; // eax
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[87]
    || (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd((CWindowList *)this, *((HWND *)a2 + 1)),
        (this[87] = WindowDataByHwnd) != 0LL) )
  {
    v6 = CWindowList::EnsureAcrylicSheet((CWindowList *)this);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1DD8u, 0LL);
    }
    else
    {
      v8 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1DD9u, 0LL);
      }
      else
      {
        v9 = CWindowArrangementTransition::OnWindowArrangementStart(this[66], this[87], (const struct tagRECT *)a2 + 1);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1DDAu, 0LL);
        else
          *((_BYTE *)this[87] + 677) |= 0x40u;
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
        0x1DE1u);
    this[87] = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return (unsigned int)v4;
}
