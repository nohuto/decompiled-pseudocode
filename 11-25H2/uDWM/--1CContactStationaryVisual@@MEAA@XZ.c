/*
 * XREFs of ??1CContactStationaryVisual@@MEAA@XZ @ 0x180030114
 * Callers:
 *     ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x18002FC60 (--_ECContactStationaryVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800301A0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 */

void __fastcall CContactStationaryVisual::~CContactStationaryVisual(void **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CContactStationaryVisual::`vftable';
  CContactStationaryVisual::Stop((CContactStationaryVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[43] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)this[41];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 43);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
