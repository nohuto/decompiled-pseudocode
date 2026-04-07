/*
 * XREFs of ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180052944
 * Callers:
 *     ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x1800521E0 (--_ECTransitionWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x180052D24 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 */

void __fastcall CTransitionWindowSnapshot::~CTransitionWindowSnapshot(CTransitionWindowSnapshot *this)
{
  float v2; // xmm1_4
  int v3; // eax
  int v4; // edx
  int v5; // eax
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  v2 = *((float *)this + 78);
  v3 = 0;
  if ( *((_DWORD *)this + 73) - *((_DWORD *)this + 71) >= 0 )
    v3 = *((_DWORD *)this + 73) - *((_DWORD *)this + 71);
  v4 = (int)(float)((float)v3 * v2);
  v5 = 0;
  if ( *((_DWORD *)this + 72) - *((_DWORD *)this + 70) >= 0 )
    v5 = *((_DWORD *)this + 72) - *((_DWORD *)this + 70);
  CDesktopManager::FreeCVIIntoCache((int)(float)((float)v5 * v2), v4, *((struct CCachedVisualImageProxy **)this + 31));
  v6 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 31) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 32) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 33) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 34) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 30) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
