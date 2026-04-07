/*
 * XREFs of ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440
 * Callers:
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180073D88 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CSecondaryWindowRepresentation::CreateVisualBrushForAnimation(__int64 a1, _QWORD *a2, char a3)
{
  struct CVisual *RootVisualNoAddRef; // rsi
  int TLWRootVisualType; // eax
  _QWORD *v8; // r8
  int v9; // eax
  int v10; // eax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  CSecondaryWindowRepresentation::GetRelativeWindowRect((CSecondaryWindowRepresentation *)a1, &v16);
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual((CSecondaryWindowRepresentation *)a1);
  RootVisualNoAddRef = *(struct CVisual **)(a1 + 48);
  if ( *((_QWORD *)CWindowRepresentation::GetRepresentationWindowData((CWindowRepresentation *)(a1 + 64)) + 55) )
  {
    TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(a1);
    RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(v8, TLWRootVisualType);
  }
  v9 = CVisualBrush::Reset((CVisualBrush *)&v15, RootVisualNoAddRef, &v16, 0LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x319,
      (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
      (const char *)(unsigned int)v9);
  if ( a3 )
  {
    v10 = CVisualBrush::FreezeImpl((__int64)&v15, 2u);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x31D,
        (int)"clientcore\\windows\\dwm\\udwm\\secondarywindowrepresentation.cpp",
        (const char *)(unsigned int)v10);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *(_BYTE *)(a1 + 257) = v11;
  v12 = v15;
  *(_QWORD *)&v15 = 0LL;
  *a2 = v12;
  v13 = *((_QWORD *)&v15 + 1);
  *((_QWORD *)&v15 + 1) = 0LL;
  a2[1] = v13;
  CVisualBrush::~CVisualBrush((CVisualBrush *)&v15);
  return a2;
}
