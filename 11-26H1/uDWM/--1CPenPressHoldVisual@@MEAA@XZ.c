/*
 * XREFs of ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800BBB94
 * Callers:
 *     ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x1800BBC30 (--_GCPenPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBF30 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::~CPenPressHoldVisual(void **this)
{
  __int64 v2; // r8
  __int64 i; // rdi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *this = &CPenPressHoldVisual::`vftable';
  CPenPressHoldVisual::StopTimer((CPenPressHoldVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0, v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 70); i = (unsigned int)(i + 1) )
  {
    v4 = (CBaseObject *)*((_QWORD *)this[32] + i);
    if ( v4 )
      CBaseObject::Release(v4);
  }
  v5 = (CBaseObject *)this[30];
  if ( v5 )
    CBaseObject::Release(v5);
  CBitmapSourceArray::~CBitmapSourceArray(this + 32);
  CTouchVisual::~CTouchVisual((CBaseObject **)this);
}
