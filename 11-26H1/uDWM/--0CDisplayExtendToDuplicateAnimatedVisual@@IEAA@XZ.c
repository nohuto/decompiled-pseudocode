/*
 * XREFs of ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B1740
 * Callers:
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2F74 (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendToDuplicateAnimatedVisual *__fastcall CDisplayExtendToDuplicateAnimatedVisual::CDisplayExtendToDuplicateAnimatedVisual(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = -1;
  *((_DWORD *)this + 101) = -1;
  *((_DWORD *)this + 102) = -1;
  *((_DWORD *)this + 103) = -1;
  return this;
}
