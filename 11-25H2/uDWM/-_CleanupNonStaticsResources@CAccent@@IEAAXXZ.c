/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003F72C
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18003F4F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x1800823DC (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180065C7C (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 */

void __fastcall CAccent::_CleanupNonStaticsResources(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  unsigned int v9; // edi
  CBaseObject **v10; // rbx

  if ( (*((_BYTE *)this + 244) & 4) != 0 )
    CDesktopManager::SetBackStop(0LL);
  CContainerVisual::RemoveAllChildren(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 35) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 36) = 0LL;
  }
  v4 = *((_QWORD *)this + 40);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 40) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 37) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 42) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 43) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 44) = 0LL;
  }
  v9 = 0;
  v10 = (CBaseObject **)((char *)this + 360);
  do
  {
    if ( *v10 )
    {
      CBaseObject::Release(*v10);
      *v10 = 0LL;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 0x16 );
}
