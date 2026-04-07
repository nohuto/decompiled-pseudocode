/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800243B0 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180027B04 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180003BB4 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800257F4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18007FC70 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // si
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // r12
  __int64 i; // r14
  CTransitionVisualController *Blink_low; // rcx
  HWND v17; // rdx
  struct CVisual *v18; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CTransitionWindowSnapshot *v22; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL) )
      return (unsigned int)-2147467259;
    v6 = -1LL;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v6);
  Blink = WindowListForDesktop->Blink;
LABEL_3:
  if ( Blink != WindowListForDesktop )
  {
    v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
    v12 = (int)Blink[42].Blink;
    v13 = v11;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *(_DWORD *)(v13 + 4) )
      {
        Blink = Blink->Blink;
        v4 = a2;
        goto LABEL_3;
      }
      if ( ((*(_DWORD *)(*(_QWORD *)(v13 + 8) + 4 * i) ^ v12) & 0xFFF) == 0 )
      {
        Blink_low = (CTransitionVisualController *)LODWORD(Blink[42].Blink);
        if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
          LODWORD(Blink[42].Blink) = (unsigned int)Blink_low & (a4 | 0x2000000) | 0xFFF;
        if ( v7 )
        {
          CTransitionVisualController::_StopAnimations(Blink_low, (struct CWindowData *)Blink);
          if ( (v12 & 0x20100000) == 0x20100000 )
          {
            v17 = (HWND)Blink[2].Blink;
            v22 = 0LL;
            if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(this, v17, &v22) >= 0 )
            {
              if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      (HWND)Blink[2].Blink,
                      -1,
                      0) )
                CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (v12 & 0x10000000) != 0);
              v18 = v22;
              v19 = CContainerVisual::RemoveChild(*((CContainerVisual **)v22 + 3), (struct CVisualProxy **)v22);
              v5 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v19,
                  0x23Eu,
                  0LL);
                return v5;
              }
              v20 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
              v5 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v20,
                  0x23Fu,
                  0LL);
                return v5;
              }
              v21 = CContainerVisual::AddChild(*((CContainerVisual **)this + 18), v18);
              v5 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v21,
                  0x240u,
                  0LL);
                return v5;
              }
              v7 = a3;
            }
          }
        }
      }
    }
  }
  return v5;
}
