/*
 * XREFs of ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800B3694
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B310C (-Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyAnimatedVisual *__fastcall CDisplaySecondaryOnlyAnimatedVisual::CDisplaySecondaryOnlyAnimatedVisual(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  CDisplaySecondaryOnlyAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  result = this;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = -1;
  *((_BYTE *)this + 232) = 1;
  return result;
}
