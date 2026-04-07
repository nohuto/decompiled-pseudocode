/*
 * XREFs of ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B1DE4
 * Callers:
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B3498 (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18008598C (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendToDuplicateAnimatedVisual *__fastcall CDisplayExtendToDuplicateAnimatedVisual::CDisplayExtendToDuplicateAnimatedVisual(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = -1;
  *((_DWORD *)this + 109) = -1;
  *((_DWORD *)this + 110) = -1;
  *((_DWORD *)this + 111) = -1;
  return this;
}
