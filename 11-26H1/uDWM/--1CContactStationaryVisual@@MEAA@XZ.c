/*
 * XREFs of ??1CContactStationaryVisual@@MEAA@XZ @ 0x180008254
 * Callers:
 *     ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x180007150 (--_ECContactStationaryVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180008230 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CContactStationaryVisual::~CContactStationaryVisual(CTimelineBase **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CTimelineBase *)&CContactStationaryVisual::`vftable';
  CContactStationaryVisual::Stop(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[39] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[37];
  if ( v4 )
    CBaseObject::Release(v4);
  CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)(this + 39));
  CTouchVisual::~CTouchVisual(this);
}
