/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180063B98
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180063B6C (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
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

  if ( (*((_BYTE *)this + 188) & 4) != 0 )
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = 0LL;
  CContainerVisual::RemoveAllChildren(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 28);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 28) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 29);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 29) = 0LL;
  }
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 33) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 30) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 35) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 36) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 37) = 0LL;
  }
  v9 = 0;
  v10 = (CBaseObject **)((char *)this + 304);
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
