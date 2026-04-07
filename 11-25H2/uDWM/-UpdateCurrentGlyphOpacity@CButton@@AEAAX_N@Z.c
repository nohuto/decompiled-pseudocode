/*
 * XREFs of ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001CA4C
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001C8B8 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::UpdateCurrentGlyphOpacity(CButton *this, char a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4

  v2 = *((float *)this + 88);
  if ( *((_DWORD *)this + 82) == 1 )
    v3 = FLOAT_1_0;
  else
    v3 = *((float *)this + 89);
  *((float *)this + 88) = v3;
  if ( !a2 && v2 != v3 )
    CVisual::SetDirtyFlags(this, 0x8000);
}
