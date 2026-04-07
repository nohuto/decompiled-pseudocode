/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180029A54 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180058FFC (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x18006BEFC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800D1B10 (CTransitionVisualController--ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800032C0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000A050 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180018A60 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z @ 0x180018CBC (-ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180019940 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180019974 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18008F1B0 (-IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800930F0 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180097F20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800D1B10 (CTransitionVisualController--ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransitionVisualController::RestoreWindow(
        struct _RTL_CRITICAL_SECTION *this,
        struct CWindowData *a2,
        char a3)
{
  CTopLevelWindow *v6; // rcx
  int v7; // r15d
  char v8; // si
  __int64 i; // rdx
  __int64 v10; // r8
  unsigned int Clone; // eax
  char v12; // r8
  __int64 v13; // rcx
  CWindowList *v14; // rcx
  __int64 v15; // r8
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( v6 )
      CTopLevelWindow::ForceShowWindow(v6, 0);
    v16 = &CDesktopManager::s_csDwmInstance;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    CWindowList::SyncWindowData(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      *((struct IDwmWindow **)a2 + 3),
      a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = *((_DWORD *)a2 + 170);
    *((_DWORD *)a2 + 170) = v7 & 0xFFEFFFFF;
    if ( *((_QWORD *)a2 + 55) && CTopLevelWindow::IsWindowOffscreen(*((CTopLevelWindow **)a2 + 55)) )
    {
      v8 = 1;
      for ( i = 0LL; (unsigned int)i < LODWORD(this[3].OwningThread); i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)(this[2].SpinCount + 8 * i);
        if ( *(_QWORD *)(v10 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v10 + 144) + 24LL) == 3 )
        {
          v8 = 0;
          break;
        }
      }
      Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2);
      v12 = 0;
      if ( Clone >= this[1].LockCount )
        v12 = v8;
      if ( v12 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 55), 0);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0p_EtwEventWriteTransfer(
            v13,
            (__int64)&UdwmSystemAnimation_MoveOffscreen_Stop,
            *((_QWORD *)a2 + 5));
      }
    }
    CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, 0);
    CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, 0);
    CWindowList::OnSizeChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2);
    CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
    CWindowList::OnContentBoundsChange(v14, a2);
    *((_DWORD *)a2 + 170) = v7;
    if ( a3 )
    {
      v16 = this;
      LOBYTE(v15) = 1;
      CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___(a2, &v16, v15);
    }
  }
}
