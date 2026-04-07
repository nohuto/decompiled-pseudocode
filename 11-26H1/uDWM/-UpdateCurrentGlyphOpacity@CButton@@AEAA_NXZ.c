/*
 * XREFs of ?UpdateCurrentGlyphOpacity@CButton@@AEAA_NXZ @ 0x180008CE8
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18002139C (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CButton::UpdateCurrentGlyphOpacity(CButton *this)
{
  float v1; // xmm1_4
  bool result; // al
  float v3; // xmm0_4

  v1 = *((float *)this + 74);
  result = 1;
  if ( *((_DWORD *)this + 68) == 1 )
    v3 = FLOAT_1_0;
  else
    v3 = *((float *)this + 75);
  *((float *)this + 74) = v3;
  if ( v1 == v3 )
    return 0;
  return result;
}
