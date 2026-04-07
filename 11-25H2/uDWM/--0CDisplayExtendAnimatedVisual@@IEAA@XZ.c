/*
 * XREFs of ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x1800971B0
 * Callers:
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B33CC (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18008598C (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::CDisplayExtendAnimatedVisual(
        CDisplayExtendAnimatedVisual *this)
{
  CDisplayExtendAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = -1;
  *((_DWORD *)this + 111) = -1;
  *((_DWORD *)this + 112) = -1;
  *((_DWORD *)this + 113) = -1;
  *((_DWORD *)this + 114) = -1;
  result = this;
  *((_BYTE *)this + 460) = 0;
  return result;
}
