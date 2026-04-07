/*
 * XREFs of ??0CSpriteVisual@@QEAA@XZ @ 0x180027638
 * Callers:
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x18002733C (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180078528 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CDWriteText@@AEAA@XZ @ 0x180089010 (--0CDWriteText@@AEAA@XZ.c)
 *     ?Create@CIconicSprite@@SAJPEAPEAV1@@Z @ 0x18008A110 (-Create@CIconicSprite@@SAJPEAPEAV1@@Z.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18008AFF8 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this)
{
  CSpriteVisual *v1; // r9
  CSpriteVisual *result; // rax

  CContainerVisual::CContainerVisual(this);
  result = v1;
  *(_QWORD *)v1 = &CSpriteVisual::`vftable';
  return result;
}
