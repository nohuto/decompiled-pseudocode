/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704
 * Callers:
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800296AC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002AEF4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18006D6A4 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  struct CVisual *v1; // rbx
  int inserted; // edi
  int v4; // eax
  __int64 v5; // r8
  struct tagPOINT *v6; // rcx
  unsigned int v7; // eax
  CContainerVisual *v8; // rcx
  struct tagPOINT v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  inserted = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( inserted < 0 )
  {
    v7 = 661;
    goto LABEL_11;
  }
  v4 = CContainerVisual::Create((struct CContainerVisual **)&v10);
  v1 = (struct CVisual *)v10;
  inserted = v4;
  if ( v4 < 0 )
  {
    v7 = 662;
    goto LABEL_11;
  }
  inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 1), *(struct CVisual **)&v10, 0LL);
  if ( inserted < 0 )
  {
    v7 = 665;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      inserted,
      v7,
      0LL);
    if ( !v1 )
      return (unsigned int)inserted;
    v8 = (CContainerVisual *)*((_QWORD *)this + 1);
    if ( *((CContainerVisual **)v1 + 3) == v8 )
      CContainerVisual::RemoveChild(v8, v1);
    goto LABEL_14;
  }
  *((_QWORD *)this + 18) = v1;
  if ( v1 )
    CBaseObject::AddRef(v1);
  v6 = (struct tagPOINT *)*((_QWORD *)this + 18);
  v10.x = -32000;
  v10.y = -32000;
  CVisual::SetOffset(v6, &v10, v5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
LABEL_14:
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)inserted;
}
