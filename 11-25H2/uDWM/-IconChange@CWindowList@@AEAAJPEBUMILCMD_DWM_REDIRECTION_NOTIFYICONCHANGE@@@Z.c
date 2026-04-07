/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800E59B8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BEC (-OnIconUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800568BC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  CTopLevelWindow *v9; // rcx
  CWindowIconic *v10; // rcx
  int v11; // eax
  struct CWindowData *v13; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

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
        goto LABEL_12;
    }
    else
    {
      *((_QWORD *)v5 + 20) = v8;
    }
    v9 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
    if ( v9 )
      CTopLevelWindow::OnIconUpdated(v9);
    v10 = (CWindowIconic *)*((_QWORD *)v5 + 61);
    if ( v10 )
    {
      v11 = CWindowIconic::OnIconUpdated(v10, 1);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1153u, 0LL);
    }
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v4;
}
