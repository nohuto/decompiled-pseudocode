/*
 * XREFs of ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B5F28
 * Callers:
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800CE520 (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CNineGridVisual@@QEAA@XZ @ 0x1800275D8 (--0CNineGridVisual@@QEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  CNineGridVisual::CNineGridVisual(this);
  *(_QWORD *)this = &CIconicAnimatedVisual::`vftable'{for `CNineGridVisual'};
  *((_QWORD *)this + 26) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 70) = 0;
  return this;
}
