/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800CE4C0 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800CFB20 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180031F68 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x1800537E8 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180075A0C (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18007BAB8 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x18008B4D8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  CAnimationEngine *v2; // rax
  __int64 v3; // rcx
  CAnimationEngine *v4; // rdi
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbp
  CBaseObject *v8; // rcx
  CBaseObject ***v9; // rdi
  CBaseObject **v10; // rax
  struct CTopLevelWindow *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdi
  struct CVisual *v17; // rdx
  CContainerVisual *v18; // rcx
  __int64 v19; // rdx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  struct CWindowData *v26; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v2 = CDesktopManager::AcquireAnimationEngine();
    v4 = v2;
    if ( v2 )
    {
      CAnimationEngine::ScheduleStopAnimation(v2, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v4);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  if ( *((_DWORD *)this + 44) )
  {
    v5 = (_QWORD *)((char *)this + 152);
    do
    {
      v6 = *((_DWORD *)this + 44) - 1;
      v7 = 56LL * v6;
      v8 = *(CBaseObject **)(*v5 + v7 + 48);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*v5 + v7 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v6);
    }
    while ( *((_DWORD *)this + 44) );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v9 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v10 = *v9;
      v11 = **v9;
      if ( v11 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v11, 0);
        v10 = *v9;
        v12 = **v9;
        if ( v12 )
        {
          CBaseObject::Release(v12);
          v10 = *v9;
        }
      }
      v13 = v10[1];
      if ( v13 )
        CBaseObject::Release(v13);
      DynArray<CFlickTextFeedback,0>::RemoveAt((char *)this + 24, 0LL);
    }
    while ( *((_DWORD *)this + 12) );
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      while ( *((_DWORD *)this + 34) )
      {
        v14 = *((_QWORD *)this + 14);
        v15 = *((_DWORD *)this + 34) - 1;
        v26 = 0LL;
        v16 = *(_QWORD *)(v14 + 8LL * v15);
        CWindowList::GetSyncedWindowDataByHwnd(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
          *(HWND *)(v16 + 16),
          &v26);
        if ( v26 )
          CTransitionVisualController::RestoreWindow(this, v26, 1);
        v17 = *(struct CVisual **)(v16 + 32);
        if ( v17 )
        {
          v18 = (CContainerVisual *)*((_QWORD *)v17 + 3);
          if ( v18 )
            CContainerVisual::RemoveChild(v18, v17);
        }
        v19 = *(_QWORD *)(v16 + 40);
        if ( v19 )
          CContainerVisual::RemoveChild(*((CContainerVisual **)this + 2), (struct CVisual *)(v19 + 8));
        CBaseObject::Release((CBaseObject *)v16);
        DynArray<CAnimationComponent *,0>::RemoveAt((char *)this + 112, (unsigned int)(*((_DWORD *)this + 34) - 1));
      }
      CContainerVisual::RemoveChild(*((CContainerVisual **)this + 1), *((struct CVisual **)this + 2));
      v20 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v20 )
      {
        CBaseObject::Release(v20);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    CTransitionVisualController::_CleanupHighZOrderStaticWindowClones(this);
    CContainerVisual::RemoveAllChildren(*((CContainerVisual **)this + 1));
    CContainerVisual::RemoveChild(*(CContainerVisual **)(*((_QWORD *)this + 1) + 24LL), *((struct CVisual **)this + 1));
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 2) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 18) = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 1) = 0LL;
  }
  v24 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
