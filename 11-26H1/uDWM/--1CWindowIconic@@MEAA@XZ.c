/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x1800085DC
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x1800071F0 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800088EC (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001AD1C (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(CWindowIconic *this)
{
  unsigned int v2; // edx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject **v8; // rcx

  *(_QWORD *)this = &CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources(this);
  v3 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject **)*((_QWORD *)this + 10);
  if ( v8 )
  {
    if ( !v8[55] || (CBaseObject::Release(v8[55]), (v8 = (CBaseObject **)*((_QWORD *)this + 10)) != 0LL) )
    {
      CWindowData::`scalar deleting destructor'((CWindowData *)v8, v2);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  CBitmapSourceArray::~CBitmapSourceArray((CWindowIconic *)((char *)this + 32));
  CBaseObject::~CBaseObject(this);
}
