/*
 * XREFs of ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ @ 0x180080544
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2BB0 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BBC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::OnAccentPolicyChanged(CWindowData *this)
{
  CTopLevelWindow *v1; // rcx

  v1 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v1 )
    CTopLevelWindow::OnAccentPolicyUpdated(v1);
}
