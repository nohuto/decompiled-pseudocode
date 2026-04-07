/*
 * XREFs of ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x18008BE70
 * Callers:
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x180045BF8 (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::CDisplayDisconnectAnimatedVisual(
        CDisplayDisconnectAnimatedVisual *this)
{
  CDisplayDisconnectAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayDisconnectAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_BYTE *)this + 376) = 0;
  result = this;
  *((_BYTE *)this + 232) = 1;
  return result;
}
