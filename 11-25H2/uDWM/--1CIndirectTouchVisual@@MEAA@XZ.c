/*
 * XREFs of ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B9260
 * Callers:
 *     ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800B92F0 (--_GCIndirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800B99E0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::~CIndirectTouchVisual(void **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CIndirectTouchVisual::`vftable';
  CIndirectTouchVisual::Stop((CIndirectTouchVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[43] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)this[42];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 43);
  CTouchVisual::~CTouchVisual(this);
}
