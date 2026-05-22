/*
 * XREFs of ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x1801807E4
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x18017CCF0 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x18017ED30 (-MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180180AC8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 */

void __fastcall ControllerProcessor::UpdateBoundsIfNeeded(ControllerProcessor *this, __int64 a2, struct _LUID *a3)
{
  RECT *v4; // rdi

  if ( *((_QWORD *)this + 42) )
  {
    v4 = (RECT *)((char *)this + 312);
    ControllerProcessor::MapRectByVisualIdentifier(
      this,
      (struct _LUID *)this + 42,
      a3,
      (struct tagRECT *)((char *)this + 344),
      (struct tagRECT *)((char *)this + 312));
    if ( *((_DWORD *)this + 315) )
      *((_BYTE *)this + 1264) = 1;
    else
      ControllerProcessor::UpdateManipulationInjectionRect(this);
    if ( !PtInRect(v4, *(POINT *)((char *)this + 360)) )
      *((struct tagPOINT *)this + 45) = ControllerProcessor::AdjustPointToBounds(
                                          *(struct tagPOINT *)((char *)this + 360),
                                          v4);
  }
}
