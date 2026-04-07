/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180082108
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18001649C (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 240) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 240) = (8 * a2) | *((_BYTE *)this + 240) & 0xF7;
    CVisual::SetDirtyFlags(this, 0x8000);
  }
}
