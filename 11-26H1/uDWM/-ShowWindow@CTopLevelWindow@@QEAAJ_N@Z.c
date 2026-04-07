/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4
 * Callers:
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x1800052A4 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008A778 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180056034 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ @ 0x180059764 (-ShouldHitTest@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180068984 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180078960 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800BEB90 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char *v2; // rsi
  CVisual *v5; // rcx
  bool v6; // dl
  bool ShouldHitTest; // al
  CVisual *v8; // r8
  unsigned int v9; // r14d
  CProjectionBorderVisual *v10; // rcx
  bool v11; // dl
  struct CVisual *v12; // rdx
  CContainerVisual *v13; // rcx
  __int64 result; // rax

  v2 = (char *)this + 696;
  if ( *((char *)this + 184) >= 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v2 + 740LL) & 1) != 0 )
      a2 = 0;
  }
  else
  {
    a2 = 1;
  }
  if ( a2 )
  {
    v5 = (CVisual *)*((_QWORD *)this + 26);
    v6 = 1;
    goto LABEL_11;
  }
  ShouldHitTest = CTopLevelWindow::ShouldHitTest(this);
  v5 = v8;
  if ( !ShouldHitTest )
  {
    v6 = 0;
LABEL_11:
    v9 = CVisual::ConnectToParent(v5, v6);
    if ( (*((_BYTE *)this + 184) & 1) != 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 184) &= ~1u;
    }
    goto LABEL_13;
  }
  v9 = CVisual::ConnectToParent(v8, 1);
  if ( (*((_BYTE *)this + 184) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 184) |= 1u;
  }
LABEL_13:
  v10 = *(CProjectionBorderVisual **)(*(_QWORD *)v2 + 464LL);
  if ( v10 )
  {
    v11 = a2 && (*((_BYTE *)this + 185) & 1) == 0;
    CProjectionBorderVisual::Show(v10, v11);
    v12 = *(struct CVisual **)(*(_QWORD *)v2 + 464LL);
    v13 = (CContainerVisual *)*((_QWORD *)v12 + 3);
    if ( v13 )
      CContainerVisual::InsertChildAfter(v13, v12, this);
  }
  result = v9;
  *((_BYTE *)this + 776) = 1;
  return result;
}
