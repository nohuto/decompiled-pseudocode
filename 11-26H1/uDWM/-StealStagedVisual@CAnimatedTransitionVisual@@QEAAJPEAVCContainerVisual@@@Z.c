/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCContainerVisual@@@Z @ 0x180096B90
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CContainerVisual **this, CContainerVisual **a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  struct tagPOINT v10; // rbx
  LONG y; // r15d
  struct tagPOINT *v12; // rcx
  struct tagPOINT v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    CBaseObject::AddRef((CBaseObject *)a2);
  v5 = CContainerVisual::RemoveChild(a2[3], (struct CVisual *)a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x32Du, 0LL);
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 912) )
  {
    v7 = CContainerVisual::AddChild(this[83], (struct CVisual *)a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x333u, 0LL);
      goto LABEL_14;
    }
  }
  else
  {
    v9 = CContainerVisual::AddChild((CContainerVisual *)(this + 1), (struct CVisual *)a2);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x337u, 0LL);
      goto LABEL_14;
    }
  }
  v10 = *(struct tagPOINT *)(*(_QWORD *)a2[18] + 56LL);
  v14 = v10;
  if ( *((_DWORD *)a2 + 42) )
  {
    y = v14.y;
    do
    {
      v12 = (struct tagPOINT *)*((_QWORD *)a2[18] + v2);
      v14 = v12[7];
      v14.x -= v10.x;
      v14.y -= y;
      CVisual::SetOffset(v12, &v14, v8);
      ++v2;
    }
    while ( v2 < *((_DWORD *)a2 + 42) );
  }
  *((_BYTE *)this + 911) = 1;
LABEL_14:
  CBaseObject::Release((CBaseObject *)a2);
  return v6;
}
