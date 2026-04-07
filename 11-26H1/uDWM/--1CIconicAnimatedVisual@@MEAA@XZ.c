/*
 * XREFs of ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B5F84
 * Callers:
 *     ??_GCIconicAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B5FE0 (--_GCIconicAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CIconicAnimatedVisual::~CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CIconicAnimatedVisual::`vftable'{for `CNineGridVisual'};
  *((_QWORD *)this + 26) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 27);
  if ( v2 )
    CBaseObject::Release(v2);
  CVisualBrush::~CVisualBrush((CIconicAnimatedVisual *)((char *)this + 232));
  CRectangleVisual::~CRectangleVisual((CBaseObject **)this);
}
