/*
 * XREFs of ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800AFFD4
 * Callers:
 *     ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2DDC (-Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayDuplicateToExtendAnimatedVisual *__fastcall CDisplayDuplicateToExtendAnimatedVisual::CDisplayDuplicateToExtendAnimatedVisual(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayDuplicateToExtendAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = -1;
  *((_DWORD *)this + 109) = -1;
  *((_DWORD *)this + 110) = -1;
  *((_DWORD *)this + 111) = -1;
  *((_DWORD *)this + 112) = -1;
  *((_DWORD *)this + 113) = -1;
  return this;
}
