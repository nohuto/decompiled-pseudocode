/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x1800CBC8C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180014490 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x1800146B0 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180014854 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800148E0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::OnPositionChange_::_8_::_lambda_1___ @ 0x180014A10 (CWindowList--ForEachSoftwareCursorListener__CWindowList--OnPositionChange_--_8_--_lambda_1___.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800640B4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BEC2C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, bool a3)
{
  __int64 v4; // r15
  int v7; // edi
  int v8; // ebx
  struct CWindowData *v9; // rdx
  CTopLevelWindow *v10; // rcx
  CTopLevelWindow3D *v11; // rcx
  CProjectionBorderVisual *v12; // rcx
  struct CWindowData *v13; // rbx
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[8]; // [rsp+38h] [rbp-40h] BYREF
  struct CWindowData *v17; // [rsp+88h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF
  int v19; // [rsp+9Ch] [rbp+24h]

  v17 = a2;
  v4 = 0LL;
  v15 = 0;
  v18 = 0;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 220), &v15, &v18);
  v7 = v18;
  v8 = v15;
  CWindowList::TrackCrossDisplaysMoveDuringModeChange(this, a2, v15, v18);
  OffsetRect((LPRECT)v17 + 3, v8 - *((_DWORD *)v17 + 12), v7 - *((_DWORD *)v17 + 13));
  v9 = v17;
  v10 = (CTopLevelWindow *)*((_QWORD *)v17 + 55);
  if ( v10 )
  {
    CTopLevelWindow::OnOffsetUpdated(v10);
    v9 = v17;
    if ( (*((_BYTE *)v17 + 740) & 2) != 0 )
    {
      v18 = *((_DWORD *)v17 + 12);
      v19 = *((_DWORD *)v17 + 13);
      v16[0] = &v17;
      v16[1] = &v18;
      CWindowList::ForEachSoftwareCursorListener__CWindowList::OnPositionChange_::_8_::_lambda_1___(this, v16);
      v9 = v17;
    }
  }
  v11 = (CTopLevelWindow3D *)*((_QWORD *)v9 + 56);
  if ( v11 )
  {
    CTopLevelWindow3D::OnOffsetUpdated(v11, a3);
    v9 = v17;
  }
  v12 = (CProjectionBorderVisual *)*((_QWORD *)v9 + 58);
  if ( v12 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v12, v9);
    v9 = v17;
  }
  v13 = v9;
  if ( *((_DWORD *)v9 + 130) )
  {
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)v9 + 62) + 8 * v4);
      if ( *(struct CWindowData **)(v14 + 64) == v13 && *(_DWORD *)(v14 + 72) == 1 )
      {
        CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v14);
        v9 = v17;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)v9 + 130) );
  }
}
