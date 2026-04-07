/*
 * XREFs of ?UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z @ 0x18005DB14
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180089CB8 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18005DB38 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateAccentBlurRect(CTopLevelWindow *this, const struct tagRECT *a2)
{
  CAccent *v2; // rcx

  v2 = (CAccent *)*((_QWORD *)this + 30);
  if ( v2 )
    CAccent::UpdateAccentBlurRect(v2, a2);
}
