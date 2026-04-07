/*
 * XREFs of ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800B33F4
 * Callers:
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2C44 (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayBlackCurtainAnimatedVisual *__fastcall CDisplayBlackCurtainAnimatedVisual::CDisplayBlackCurtainAnimatedVisual(
        CDisplayBlackCurtainAnimatedVisual *this)
{
  CDisplayBlackCurtainAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayBlackCurtainAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  result = this;
  *((_QWORD *)this + 45) = 0LL;
  *((_BYTE *)this + 368) = 0;
  *((_WORD *)this + 116) = 257;
  return result;
}
