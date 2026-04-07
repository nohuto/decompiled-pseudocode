/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180032EE0
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18008D00C (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTransitionVisualController@@I@Z @ 0x180002954 (-AddMultipleAndSet@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTra.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180063EAC (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18007DE58 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct tagPOINT *a2,
        struct CContainerVisual *a3,
        char a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool *a8)
{
  int v8; // ebx
  CTopLevelWindow *v13; // rcx
  int v14; // eax
  struct tagPOINT *v15; // rsi
  struct CWindowData *WindowData; // rax
  __int64 v17; // r8
  LONG v18; // ecx
  bool v19; // dl
  int inserted; // eax
  int v21; // r9d
  unsigned int v22; // eax
  CTopLevelWindow *v23; // rcx
  struct CWindowData *v24; // rax
  bool v25; // al
  struct tagPOINT v27; // [rsp+30h] [rbp-30h] BYREF
  CVisual *v28; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-20h] BYREF
  char v30; // [rsp+50h] [rbp-10h]
  __int16 v31; // [rsp+51h] [rbp-Fh]

  v8 = 0;
  v28 = 0LL;
  v27 = 0LL;
  if ( (*((_BYTE *)CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2) + 736) & 4) != 0 )
    return (unsigned int)v8;
  v14 = CTopLevelWindow::CloneVisualTreeForLivePreview(v13, 0, &v28);
  v15 = (struct tagPOINT *)v28;
  v8 = v14;
  if ( v14 < 0 )
  {
    v21 = v14;
    v22 = 136;
  }
  else
  {
    WindowData = CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2);
    if ( WindowData )
    {
      v18 = *((_DWORD *)WindowData + 12);
      v27.y = *((_DWORD *)WindowData + 13);
      v27.x = v18;
    }
    else
    {
      v27 = a2[7];
    }
    CVisual::SetOffset(v15, &v27, v17);
    if ( a4 )
      CVisual::SetHitTestVisibility((CVisual *)v15, v19);
    if ( a6 )
    {
      inserted = CContainerVisual::InsertChildAfter(a3, (struct CVisual *)v15, a5);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v21 = inserted;
        v22 = 158;
        goto LABEL_26;
      }
LABEL_12:
      if ( a7
        && (!CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2)
         || (*((_DWORD *)CTopLevelWindow::GetWindowData(v23) + 186) & 0x20000000) == 0) )
      {
        CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)a2, 1);
      }
      v29[0] = a2;
      v29[1] = v15;
      v30 = a4;
      v31 = 257;
      if ( a8 )
      {
        if ( *a8 )
        {
          v24 = CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2);
          v25 = CTransitionVisualController::AllowSnapshotForSWR(*((HWND *)v24 + 5));
        }
        else
        {
          v25 = 0;
        }
        *a8 = v25;
        HIBYTE(v31) = v25;
      }
      v8 = DynArray<CTransitionVisualController::TlwPair,0>::AddMultipleAndSet((__int64 *)this + 3, (__int64)v29);
      v21 = v8;
      if ( v8 >= 0 )
      {
        CBaseObject::AddRef((CBaseObject *)a2);
        return (unsigned int)v8;
      }
      v22 = 180;
      goto LABEL_26;
    }
    v8 = CContainerVisual::InsertChildBefore(a3, (CBaseObject ***)v15, (CBaseObject ***)a5);
    v21 = v8;
    if ( v8 >= 0 )
      goto LABEL_12;
    v22 = 162;
  }
LABEL_26:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v21,
    v22,
    0LL);
  if ( v15 )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)a2, 0);
    CContainerVisual::RemoveChild(a3, (struct CVisual *)v15);
    CBaseObject::Release((CBaseObject *)v15);
  }
  return (unsigned int)v8;
}
