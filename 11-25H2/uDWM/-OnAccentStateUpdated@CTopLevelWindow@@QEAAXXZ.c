/*
 * XREFs of ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18008DE90
 * Callers:
 *     ?UpdateAccentState@CWindowList@@QEAAXXZ @ 0x180084470 (-UpdateAccentState@CWindowList@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800D04E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXXZ @ 0x180097334 (-OnAccentStateUpdated@CAccent@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnAccentStateUpdated(CTopLevelWindow *this)
{
  CAccent *v1; // rcx

  v1 = (CAccent *)*((_QWORD *)this + 32);
  if ( v1 )
    CAccent::OnAccentStateUpdated(v1);
}
