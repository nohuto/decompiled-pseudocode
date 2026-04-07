/*
 * XREFs of ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x180089FF4
 * Callers:
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2EA8 (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::CDisplayExtendAnimatedVisual(
        CDisplayExtendAnimatedVisual *this)
{
  CDisplayExtendAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = -1;
  *((_DWORD *)this + 103) = -1;
  *((_DWORD *)this + 104) = -1;
  *((_DWORD *)this + 105) = -1;
  *((_DWORD *)this + 106) = -1;
  result = this;
  *((_BYTE *)this + 428) = 0;
  return result;
}
