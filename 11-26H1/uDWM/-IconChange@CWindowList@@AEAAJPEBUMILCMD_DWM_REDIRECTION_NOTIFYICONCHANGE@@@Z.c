/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180067938
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180067A30 (-OnIconUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  CTopLevelWindow *v10; // rcx
  CWindowIconic *v11; // rcx
  int v12; // eax
  struct CWindowData *v13; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+18h]

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v13);
  v5 = v13;
  if ( v13 )
  {
    v6 = 0;
    v7 = *(_QWORD *)((char *)a2 + 12);
    if ( *((_QWORD *)v13 + 19) != v7 )
    {
      *((_QWORD *)v13 + 19) = v7;
      v6 = 1;
    }
    v8 = *(_QWORD *)((char *)a2 + 20);
    if ( *((_QWORD *)v5 + 20) == v8 )
    {
      if ( !v6 )
        goto LABEL_6;
    }
    else
    {
      *((_QWORD *)v5 + 20) = v8;
    }
    v10 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
    if ( v10 )
      CTopLevelWindow::OnIconUpdated(v10);
    v11 = (CWindowIconic *)*((_QWORD *)v5 + 61);
    if ( v11 )
    {
      v12 = CWindowIconic::OnIconUpdated(v11, 1);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x127Fu, 0LL);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
