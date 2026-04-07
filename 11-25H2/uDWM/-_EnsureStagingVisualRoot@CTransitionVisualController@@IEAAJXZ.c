/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800257F4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800033F8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180027920 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180028478 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180088C38 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800285D8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  struct tagPOINT v1; // rbx
  int inserted; // edi
  int v5; // eax
  struct tagPOINT *v6; // rcx
  unsigned int v7; // eax
  CContainerVisual *v8; // rcx
  struct tagPOINT v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  inserted = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( inserted < 0 )
  {
    v7 = 661;
    goto LABEL_15;
  }
  v5 = CContainerVisual::Create((struct CContainerVisual **)&v9);
  v1 = v9;
  inserted = v5;
  if ( v5 < 0 )
  {
    v7 = 662;
    goto LABEL_15;
  }
  inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 1), *(struct CVisual **)&v9, 0LL);
  if ( inserted < 0 )
  {
    v7 = 665;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      inserted,
      v7,
      0LL);
    if ( !*(_QWORD *)&v1 )
      return (unsigned int)inserted;
    v8 = (CContainerVisual *)*((_QWORD *)this + 1);
    if ( *(CContainerVisual **)(*(_QWORD *)&v1 + 24LL) == v8 )
      CContainerVisual::RemoveChild(v8, *(struct CVisualProxy ***)&v1);
    goto LABEL_9;
  }
  *((struct tagPOINT *)this + 18) = v1;
  if ( v1 )
    CMILRefCountBase::AddRef(*(CMILRefCountBase **)&v1);
  v6 = (struct tagPOINT *)*((_QWORD *)this + 18);
  v9.x = -32000;
  v9.y = -32000;
  CVisual::SetOffset(v6, &v9);
  inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
  if ( inserted < 0 )
  {
    v7 = 677;
    goto LABEL_15;
  }
LABEL_9:
  if ( v1 )
    CBaseObject::Release(*(CBaseObject **)&v1);
  return (unsigned int)inserted;
}
