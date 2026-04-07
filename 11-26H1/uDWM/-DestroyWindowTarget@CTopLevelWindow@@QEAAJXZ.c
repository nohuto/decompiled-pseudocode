/*
 * XREFs of ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CB02C
 * Callers:
 *     wil::details::lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___::_lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___ @ 0x1800CAD90 (wil--details--lambda_call__CTopLevelWindow--CreateWindowTarget_--_15_--_lambda_1___--_lambda_cal.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E0B30 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::DestroyWindowTarget(CTopLevelWindow *this)
{
  CContainerVisual *v2; // rcx
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CContainerVisual *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 93);
    if ( v3 )
      CContainerVisual::RemoveChild(v2, v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 93);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 93) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 94);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 94) = 0LL;
  }
  return 0LL;
}
