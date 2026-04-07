/*
 * XREFs of ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180035D70
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800353F4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShellWindowChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *a2)
{
  unsigned int v4; // ebx
  __int64 ShellWindowForDesktop; // rax
  __int64 v6; // rbp
  __int64 Element; // rax
  int v8; // eax
  int updated; // eax
  int v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+34h] [rbp-34h]
  __int64 v13; // [rsp+44h] [rbp-24h]
  int v14; // [rsp+4Ch] [rbp-1Ch]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(this, *(_QWORD *)((char *)a2 + 12));
  v6 = *(_QWORD *)((char *)a2 + 4);
  if ( ShellWindowForDesktop != v6 )
  {
    Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement((char *)this + 8);
    if ( Element )
      *(_QWORD *)(Element + 64) = v6;
    if ( *(_QWORD *)((char *)a2 + 4)
      || (v11 = 1073741881,
          v12 = 0LL,
          v14 = 0,
          v13 = 1LL,
          v8 = CDesktopManager::PostActivateLivePreview(
                 CDesktopManager::s_pDesktopManagerInstance,
                 (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)&v11),
          v4 = v8,
          v8 >= 0) )
    {
      updated = CWindowList::UpdateDesktopWindowReplacement(this, *(_QWORD *)((char *)a2 + 12));
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1D22u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1D1Fu, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
