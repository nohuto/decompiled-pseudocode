/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x1800B902C
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800B92B0 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50 (--$_Destroy_range@V-$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEA.c)
 */

void __fastcall CLivePreview::~CLivePreview(CLivePreview *this)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CTimelineBase *v11; // rcx
  CBaseObject *v12; // rcx
  void *v13; // rcx
  LivePreviewResource *v14; // rcx

  *(_QWORD *)this = &CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals(this);
  v2 = *((_DWORD *)this + 58) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *(CBaseObject **)(v4 + *((_QWORD *)this + 26) + 8);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)(v4 + *((_QWORD *)this + 26) + 8) = 0LL;
      }
      v6 = *(CBaseObject **)(v4 + *((_QWORD *)this + 26) + 16);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(v4 + *((_QWORD *)this + 26) + 16) = 0LL;
      }
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CTimelineBase *)*((_QWORD *)this + 41);
  if ( v11 )
    CTimelineBase::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (void *)*((_QWORD *)this + 46);
  if ( v13 )
  {
    std::_Deallocate<16>(v13, (*((_QWORD *)this + 48) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 37);
  v14 = (LivePreviewResource *)*((_QWORD *)this + 34);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<LivePreviewResource>>(v14, *((LivePreviewResource **)this + 35));
    std::_Deallocate<16>(*((void **)this + 34), 32 * ((__int64)(*((_QWORD *)this + 36) - *((_QWORD *)this + 34)) >> 5));
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 30);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 26);
  CContainerVisual::~CContainerVisual(this);
}
