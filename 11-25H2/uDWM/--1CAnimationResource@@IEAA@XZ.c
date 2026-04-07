/*
 * XREFs of ??1CAnimationResource@@IEAA@XZ @ 0x180075724
 * Callers:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800756E0 (-Release@CAnimationResource@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationResource::~CAnimationResource(CAnimationResource *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAnimationResource::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v3 )
    CBaseObject::Release(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 3);
}
