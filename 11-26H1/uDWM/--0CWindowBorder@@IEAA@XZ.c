/*
 * XREFs of ??0CWindowBorder@@IEAA@XZ @ 0x180022A9C
 * Callers:
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x1800229C0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CWindowBorder *__fastcall CWindowBorder::CWindowBorder(CWindowBorder *this)
{
  CContainerVisual::CContainerVisual(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CWindowBorder *)((char *)this + 184));
  *(_QWORD *)this = &CWindowBorder::`vftable'{for `CContainerVisual'};
  *((_QWORD *)this + 23) = &CWindowBorder::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
