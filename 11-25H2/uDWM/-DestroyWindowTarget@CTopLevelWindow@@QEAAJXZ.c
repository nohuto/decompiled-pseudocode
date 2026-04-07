/*
 * XREFs of ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CFE00
 * Callers:
 *     wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800CFA1C (wil--details--lambda_call__lambda_85f3225b710f422e24871280d0146166___--_lambda_call__lambda_85f3.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CFCB4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4060 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::DestroyWindowTarget(CTopLevelWindow *this)
{
  CContainerVisual *v2; // rcx
  struct CVisualProxy **v3; // rdx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CContainerVisual *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = (struct CVisualProxy **)*((_QWORD *)this + 98);
    if ( v3 )
      CContainerVisual::RemoveChild(v2, v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 98) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 99);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 99) = 0LL;
  }
  return 0LL;
}
