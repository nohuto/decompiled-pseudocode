/*
 * XREFs of ??0CWindowBorder@@IEAA@XZ @ 0x180010F4C
 * Callers:
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180010DD0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 */

CWindowBorder *__fastcall CWindowBorder::CWindowBorder(CWindowBorder *this)
{
  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CWindowBorder::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return this;
}
