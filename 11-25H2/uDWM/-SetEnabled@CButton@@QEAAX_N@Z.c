/*
 * XREFs of ?SetEnabled@CButton@@QEAAX_N@Z @ 0x180012D68
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180012C20 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::SetEnabled(CButton *this, char a2)
{
  if ( (*((_BYTE *)this + 240) & 1) != a2 )
  {
    *((_BYTE *)this + 240) = a2 | *((_BYTE *)this + 240) & 0xFE;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
