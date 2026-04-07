/*
 * XREFs of ?UpdateAccentState@CWindowList@@QEAAXXZ @ 0x1800752B8
 * Callers:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x180075208 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18007CE10 (-OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowList::UpdateAccentState(CWindowList *this)
{
  unsigned int i; // ebx
  CTopLevelWindow *v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 148); ++i )
  {
    v3 = *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 71) + 16LL * i) + 440LL);
    if ( v3 )
      CTopLevelWindow::OnAccentStateUpdated(v3);
  }
}
