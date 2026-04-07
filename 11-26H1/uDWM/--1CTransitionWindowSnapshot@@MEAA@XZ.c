/*
 * XREFs of ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180081B38
 * Callers:
 *     ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x180079C40 (--_ECTransitionWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CTransitionWindowSnapshot::~CTransitionWindowSnapshot(CTransitionWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 26) = 0LL;
  }
  CVisualBrush::~CVisualBrush((CTransitionWindowSnapshot *)((char *)this + 216));
  CRectangleVisual::~CRectangleVisual((CBaseObject **)this);
}
