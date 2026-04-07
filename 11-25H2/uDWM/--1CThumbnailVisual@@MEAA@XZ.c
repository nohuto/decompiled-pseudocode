/*
 * XREFs of ??1CThumbnailVisual@@MEAA@XZ @ 0x1800719AC
 * Callers:
 *     ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x180071960 (--_ECThumbnailVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CThumbnailVisual::~CThumbnailVisual(CThumbnailVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx

  *(_QWORD *)this = &CThumbnailVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CThumbnailAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 40) = &CThumbnailVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 43) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 49) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 44) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 45) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 46) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 47) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 48) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 53) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 50) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 51) = 0LL;
  }
  v13 = (CBaseObject *)*((_QWORD *)this + 52);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 52) = 0LL;
  }
  v14 = (CBaseObject *)*((_QWORD *)this + 63);
  if ( v14 )
  {
    *((_QWORD *)this + 63) = 0LL;
    CBaseObject::Release(v14);
  }
  v15 = (CBaseObject *)*((_QWORD *)this + 62);
  if ( v15 )
  {
    *((_QWORD *)this + 62) = 0LL;
    CBaseObject::Release(v15);
  }
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
