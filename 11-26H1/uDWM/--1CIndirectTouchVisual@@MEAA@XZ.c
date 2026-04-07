/*
 * XREFs of ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B8174
 * Callers:
 *     ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800B8200 (--_GCIndirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800B88F0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::~CIndirectTouchVisual(void **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CIndirectTouchVisual::`vftable';
  CIndirectTouchVisual::Stop((CIndirectTouchVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[39] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)this[38];
  if ( v4 )
    CBaseObject::Release(v4);
  CBitmapSourceArray::~CBitmapSourceArray(this + 39);
  CTouchVisual::~CTouchVisual((CBaseObject **)this);
}
