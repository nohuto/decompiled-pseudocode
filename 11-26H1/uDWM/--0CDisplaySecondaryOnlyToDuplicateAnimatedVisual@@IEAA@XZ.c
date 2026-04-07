/*
 * XREFs of ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B3AC4
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B31D8 (-Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyToDuplicateAnimatedVisual *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::CDisplaySecondaryOnlyToDuplicateAnimatedVisual(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyToDuplicateAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = -1;
  *((_DWORD *)this + 95) = -1;
  return this;
}
