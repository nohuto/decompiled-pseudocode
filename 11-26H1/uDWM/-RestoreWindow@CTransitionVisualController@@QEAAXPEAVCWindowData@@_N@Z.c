/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003D7C0 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x18003D8C8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::RestoreWindow_::_26_::_lambda_1___ @ 0x1800CE404 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--RestoreWindow_--_2.c)
 * Callees:
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180010FE8 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800175C0 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800182B0 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z @ 0x180019114 (-ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180032C38 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18003B47C (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18003EA94 (-IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::RestoreWindow_::_26_::_lambda_1___ @ 0x1800CE404 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--RestoreWindow_--_2.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransitionVisualController::RestoreWindow(
        struct _RTL_CRITICAL_SECTION *this,
        struct CWindowData *a2,
        char a3)
{
  CTopLevelWindow *v6; // rcx
  int v7; // r15d
  CWindowList *v8; // rcx
  __int64 v9; // r8
  char v10; // si
  __int64 i; // rdx
  __int64 v12; // r8
  unsigned int Clone; // eax
  char v14; // r8
  __int64 v15; // rcx
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
    v7 = *((_DWORD *)a2 + 186);
    *((_DWORD *)a2 + 186) = v7 & 0xFFEFFFFF;
    if ( *((_QWORD *)a2 + 55) && CTopLevelWindow::IsWindowOffscreen(*((CTopLevelWindow **)a2 + 55)) )
    {
      v10 = 1;
      for ( i = 0LL; (unsigned int)i < LODWORD(this[3].OwningThread); i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(this[2].SpinCount + 8 * i);
        if ( *(_QWORD *)(v12 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v12 + 144) + 24LL) == 3 )
        {
          v10 = 0;
          break;
        }
      }
      Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2);
      v14 = 0;
      if ( Clone >= this[1].LockCount )
        v14 = v10;
      if ( v14 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 55), 0);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0p_EtwEventWriteTransfer(v15, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
      }
    }
    CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, 0);
    CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, 0);
    CWindowList::OnSizeChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2);
    CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
    CWindowList::OnContentBoundsChange(v8, a2);
    *((_DWORD *)a2 + 186) = v7;
    if ( a3 )
    {
      v16 = this;
      LOBYTE(v9) = 1;
      CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::RestoreWindow_::_26_::_lambda_1___(
        a2,
        &v16,
        v9);
    }
  }
}
