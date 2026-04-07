/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x180052B8C
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x180052B40 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001A630 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x180052D24 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  char *v9; // rdi
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // eax
  CBaseObject *v16; // rcx
  CWindowData **v17; // rsi
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (char *)this + 32;
  v10 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    v11 = v10[15] - v10[13];
    v12 = v10[14] - v10[12];
    v13 = 0;
    if ( v11 >= 0 )
      v13 = v11;
    v14 = (int)(float)((float)v13 * *((float *)this + 18));
    v15 = 0;
    if ( v12 >= 0 )
      v15 = v12;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v15 * *((float *)this + 18)),
      v14,
      *((struct CCachedVisualImageProxy **)this + 6));
    v16 = *(CBaseObject **)(*(_QWORD *)v9 + 440LL);
    v17 = (CWindowData **)((char *)this + 32);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      v17 = (CWindowData **)((char *)this + 32);
    }
    v18 = *(CBaseObject **)(*(_QWORD *)v9 + 424LL);
    if ( v18 )
      CBaseObject::Release(v18);
    *(_BYTE *)(*(_QWORD *)v9 + 673LL) &= ~0x20u;
  }
  else
  {
    v17 = (CWindowData **)((char *)this + 32);
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v19 )
    CBaseObject::Release(v19);
  if ( *v17 )
  {
    CWindowData::`scalar deleting destructor'(*v17);
    *v17 = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
