/*
 * XREFs of ??0CSpriteVisual@@QEAA@XZ @ 0x18003983C
 * Callers:
 *     ??0CDWriteText@@AEAA@XZ @ 0x180039470 (--0CDWriteText@@AEAA@XZ.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x1800397F8 (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180088F20 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18000872C (--0CVisual@@IEAA@XZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this)
{
  CSpriteVisual *v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CSpriteVisual::`vftable';
  *((_QWORD *)v1 + 18) = 0LL;
  *((_QWORD *)v1 + 19) = 0LL;
  *((_QWORD *)v1 + 20) = 0LL;
  return v1;
}
