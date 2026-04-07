/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x180082224
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x18006A300 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001AD1C (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  __int64 v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CWindowData *v8; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(CBaseObject **)(v5 + 440);
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = *(CBaseObject **)(*((_QWORD *)this + 4) + 424LL);
    if ( v7 )
      CBaseObject::Release(v7);
    *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) &= ~0x20u;
  }
  v8 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CWindowData::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  CVisualBrush::~CVisualBrush((CWindowSnapshot *)((char *)this + 40));
  CBaseObject::~CBaseObject(this);
}
