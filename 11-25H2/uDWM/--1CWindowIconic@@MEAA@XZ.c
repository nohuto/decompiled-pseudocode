/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x1800793CC
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x180079380 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001A630 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18007948C (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(void **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject **v7; // rcx

  *this = &CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources((CWindowIconic *)this);
  v2 = (CBaseObject *)this[11];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)this[13];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)this[14];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)this[12];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)this[3];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject **)this[10];
  if ( v7 )
  {
    if ( v7[55] )
    {
      CBaseObject::Release(v7[55]);
      v7 = (CBaseObject **)this[10];
    }
    if ( v7 )
    {
      CWindowData::`scalar deleting destructor'((CWindowData *)v7);
      this[10] = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  CBaseObject::~CBaseObject((CBaseObject *)this);
}
