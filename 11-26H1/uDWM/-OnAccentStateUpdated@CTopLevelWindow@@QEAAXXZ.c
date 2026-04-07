/*
 * XREFs of ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18007CE10
 * Callers:
 *     ?UpdateAccentState@CWindowList@@QEAAXXZ @ 0x1800752B8 (-UpdateAccentState@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ @ 0x180094558 (-UpdateStyle@CProjectionBorderVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnAccentStateUpdated(CTopLevelWindow *this)
{
  CProjectionBorderVisual *v1; // rcx

  v1 = (CProjectionBorderVisual *)*((_QWORD *)this + 30);
  if ( v1 )
    CProjectionBorderVisual::UpdateStyle(v1);
}
