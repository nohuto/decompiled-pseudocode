/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4818
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800CFB88 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800D8EF0 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  PVOID ViewBase; // r10
  int v10; // r8d
  int v11; // eax
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = -2147467259;
  v6 = *(_QWORD *)((char *)a2 + 4);
  if ( v6 )
  {
    v7 = 0;
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
      v7 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
    if ( v7 > 0 )
    {
      v8 = 0;
      if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
        v8 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
      if ( v8 > 0 )
      {
        if ( a3->ViewSize )
        {
          ViewBase = a3->ViewBase;
          if ( ViewBase )
          {
            v10 = *((_DWORD *)a2 + 3);
            if ( v10 == 95 || (unsigned int)(v10 - 96) <= 6 )
            {
              Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
              v13 = winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap(
                      Current,
                      *(HWND *)((char *)a2 + 4),
                      (const struct tagRECT *)a2 + 3,
                      (const char *)a3->ViewBase,
                      a3->ViewSize);
              v5 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x15BDu, 0LL);
            }
            else
            {
              v11 = CTransitionVisualController::RegisterTransitionBitmap(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
                      v6,
                      v10,
                      (_DWORD *)a2 + 12,
                      (_OWORD *)a2 + 1,
                      (__int128 *)a2 + 2,
                      ViewBase,
                      a3->ViewSize);
              v5 = v11;
              if ( v11 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x15C9u, 0LL);
            }
          }
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v5;
}
