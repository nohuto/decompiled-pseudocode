/*
 * XREFs of ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E6AF0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18005687C (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180093734 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::PostActivateLivePreview(CWindowList *this, HWND *a2)
{
  __int64 i; // rsi
  CWindowData *v5; // rbx
  struct CWindowData *MDIOwner; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CWindowData *v10; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 2); i = (unsigned int)(i + 1) )
  {
    CWindowList::GetSyncedWindowDataByHwnd(this, a2[i + 4], &v10);
    if ( !*((_DWORD *)a2 + 1) )
    {
      v5 = v10;
      if ( v10 )
      {
        if ( (*((_BYTE *)v10 + 673) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((HWND *)v10);
          if ( MDIOwner )
            v5 = MDIOwner;
          v10 = v5;
        }
        if ( (*((_DWORD *)v5 + 29) & 0x20000000) != 0 )
          *((_BYTE *)v5 + 675) |= 8u;
      }
    }
  }
  v7 = CDesktopManager::PostActivateLivePreview(
         CDesktopManager::s_pDesktopManagerInstance,
         (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a2);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1D27u, 0LL);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}
