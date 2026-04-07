/*
 * XREFs of ??1CTetherVisual@@MEAA@XZ @ 0x1800CE378
 * Callers:
 *     ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800CE440 (--_GCTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800CEAA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTetherVisual::~CTetherVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CTimelineBase *v6; // rcx
  CTimelineBase *v7; // rcx

  *this = (CBaseObject *)&CTetherVisual::`vftable';
  CTetherVisual::Stop((CTetherVisual *)this);
  v2 = this[41];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[41] = 0LL;
  }
  v3 = this[42];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[42] = 0LL;
  }
  v4 = this[43];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[43] = 0LL;
  }
  v5 = this[38];
  if ( v5 )
  {
    CBaseObject::Release(v5);
    this[38] = 0LL;
  }
  v6 = this[44];
  if ( v6 )
  {
    CTimelineBase::Release(v6);
    this[44] = 0LL;
  }
  v7 = this[45];
  if ( v7 )
  {
    CTimelineBase::Release(v7);
    this[45] = 0LL;
  }
  CTouchVisual::~CTouchVisual((void **)this);
}
