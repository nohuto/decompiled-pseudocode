/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031018 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032A84 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180032AE8 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180032BE0 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180032C38 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180032CA0 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180032DE8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180033AF8 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18008D00C (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800CF5C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(CContainerVisual **this, struct CWindowData *a2)
{
  int v2; // eax
  CBaseObject *v3; // rsi
  char v6; // r13
  CBaseObject *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct tagRECT *v11; // r12
  unsigned int Clone; // r12d
  int v13; // eax
  int v14; // eax
  bool v15; // r9
  struct CTopLevelWindow *v17; // rdx
  int v18; // eax
  __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r12d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  CContainerVisual *RootVisualForDesktop; // rax
  struct CVisual *v31; // r14
  struct CVisual *v32; // r8
  int inserted; // eax
  CDesktopManager *v34; // rcx
  struct tagRECT *v35; // [rsp+30h] [rbp-20h]
  __int128 v36; // [rsp+38h] [rbp-18h] BYREF
  int v37; // [rsp+98h] [rbp+48h]
  CBaseObject *v38; // [rsp+A0h] [rbp+50h] BYREF
  CBaseObject *v39; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_DWORD *)a2 + 186);
  v3 = 0LL;
  v38 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v37 = 1;
LABEL_3:
    v6 = 1;
    goto LABEL_4;
  }
  v37 = 0;
  if ( (v2 & 0x10000000) != 0 && (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0 )
    goto LABEL_3;
  v6 = 0;
LABEL_4:
  v7 = 0LL;
  v39 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v8,
      0xA32u,
      0LL);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xA36u,
      0LL);
    return v9;
  }
  v10 = CTransitionVisualController::_SetDesktopId((CTransitionVisualController *)this, *((_QWORD *)a2 + 17));
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v10,
      0xA3Au,
      0LL);
    return v9;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)this, *((HWND *)a2 + 5)) < 0 )
  {
    v11 = (const struct tagRECT *)(((unsigned __int64)a2 + 748) & -(__int64)((*((_DWORD *)a2 + 186) & 0x1000000) != 0));
    v35 = (struct tagRECT *)v11;
    v36 = 0LL;
    if ( !CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2)
      || (v28 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 55), 0LL, v11, &v38),
          v3 = v38,
          v28 < 0) )
    {
      if ( (*((_BYTE *)a2 + 740) & 0x10) != 0 )
      {
        v9 = -2147483638;
      }
      else
      {
        Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
        if ( Clone >= *((_DWORD *)this + 12) )
        {
          v13 = CContainerVisual::Create(&v39);
          v9 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v13,
              0xA4Fu,
              0LL);
            v7 = v39;
            goto LABEL_14;
          }
          v7 = v39;
          v14 = CContainerVisual::AddChild(this[18], v39);
          v9 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v14,
              0xA50u,
              0LL);
            goto LABEL_14;
          }
          v17 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
          if ( v6 )
          {
            v29 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v17, v7, 0xFFFFFFFFLL, v37);
            v9 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v29,
                0xA55u,
                0LL);
              goto LABEL_14;
            }
            Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
          }
          else
          {
            v18 = CTransitionVisualController::_StageClone((CTransitionVisualController *)this, v17, v7, v15, 1, 0LL);
            v9 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v18,
                0xA5Cu,
                0LL);
              goto LABEL_14;
            }
          }
        }
        if ( Clone < *((_DWORD *)this + 12) )
        {
          _mm_lfence();
          v19 = 3LL * Clone;
          if ( *((_QWORD *)CTopLevelWindow::GetWindowData(*((CTopLevelWindow **)this[3] + v19)) + 5) == *((_QWORD *)a2 + 5) )
          {
            _mm_lfence();
            v20 = CTransitionWindowSnapshot::Create(
                    *((struct CTopLevelWindow **)a2 + 55),
                    *(struct CVisual **)(*((_QWORD *)this[3] + v19 + 1) + 24LL),
                    v35,
                    &v38);
            v9 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v20,
                0xA68u,
                0LL);
              v3 = v38;
              goto LABEL_14;
            }
            v3 = v38;
            *((_BYTE *)v38 + 276) = *((_BYTE *)this[3] + 8 * v19 + 18);
            goto LABEL_25;
          }
        }
        v9 = -2147467259;
      }
LABEL_26:
      if ( !v3 )
      {
LABEL_16:
        if ( v7 )
          CBaseObject::Release(v7);
        return v9;
      }
      if ( (v9 & 0x80000000) != 0 )
        goto LABEL_14;
      v21 = *((_DWORD *)this + 20);
      v22 = v21 + 1;
      if ( v21 + 1 < v21 )
      {
        v9 = -2147024362;
        v27 = 183;
        v23 = -2147024362;
      }
      else
      {
        if ( v22 <= *((_DWORD *)this + 19) )
        {
          *((_OWORD *)this[7] + *((unsigned int *)this + 20)) = v36;
          *((_DWORD *)this + 20) = v22;
LABEL_31:
          CBaseObject::AddRef(v3);
          if ( (*((_DWORD *)a2 + 186) & 0x100000) != 0 )
          {
            RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                     *((_QWORD *)a2 + 17));
            v31 = RootVisualForDesktop;
            v32 = (struct CVisual *)*((_QWORD *)a2 + 55);
            if ( (*((_BYTE *)a2 + 742) & 8) != 0 )
              v32 = *(struct CVisual **)(*((_QWORD *)a2 + 75) + 440LL);
            inserted = CContainerVisual::InsertChildAfter(RootVisualForDesktop, v3, v32);
            v9 = inserted;
            if ( inserted >= 0 )
            {
              CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(a2);
              CDesktopManager::UpdateSceneImpl(v34, v31);
              goto LABEL_34;
            }
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              inserted,
              0xA8Du,
              0LL);
          }
          else
          {
            *((_QWORD *)v3 + 32) = 0LL;
            *((_DWORD *)v3 + 66) = 1;
            *((_DWORD *)v3 + 67) = 1;
            v24 = CContainerVisual::AddChild(this[18], v3);
            v9 = v24;
            if ( v24 >= 0 )
            {
              (*(void (__fastcall **)(CContainerVisual *))(*(_QWORD *)this[18] + 48LL))(this[18]);
LABEL_34:
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                McTemplateU0p_EtwEventWriteTransfer(v25, &CommitChannel_Transition_Snapshot, v3);
              v26 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
              v9 = v26;
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v26,
                  0xAA2u,
                  0LL);
              goto LABEL_14;
            }
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v24,
              0xA9Cu,
              0LL);
          }
LABEL_14:
          if ( v3 )
            CBaseObject::Release(v3);
          goto LABEL_16;
        }
        v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 7), 16, 1, &v36);
        v9 = v23;
        if ( v23 >= 0 )
          goto LABEL_31;
        v27 = 194;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v27, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v23,
        0xA7Bu,
        0LL);
      goto LABEL_14;
    }
LABEL_25:
    *(_QWORD *)&v36 = *((_QWORD *)a2 + 5);
    *((_QWORD *)&v36 + 1) = v3;
    goto LABEL_26;
  }
  return v9;
}
