/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401C34A4
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401C2C24 (-DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  DXGDEVICE *v6; // r15
  unsigned int v9; // edi
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rbp
  __int64 v14; // rsi
  struct VIDMM_PAGING_QUEUE *v15; // r9
  int v16; // r15d
  bool v17; // zf
  __int64 i; // rdi
  char *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 j; // rbx
  int IsEnabledDeviceUsageNoInline; // [rsp+40h] [rbp-48h]
  _BYTE v24[24]; // [rsp+48h] [rbp-40h] BYREF

  v6 = this;
  v9 = 0;
  if ( !DxgkpValidateResourcesForPinOperation(a2, a3) )
    return 3221225485LL;
  v11 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  v12 = IsEnabledDeviceUsageNoInline;
  if ( a2 )
  {
LABEL_4:
    v13 = *((_QWORD *)a3 + v11);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v13 + 80), 0);
    if ( v12 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v14 = *(_QWORD *)(v13 + 24);
    while ( 1 )
    {
      if ( !v14 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= a2 )
          return v9;
        v12 = IsEnabledDeviceUsageNoInline;
        goto LABEL_4;
      }
      v15 = a4 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a4 + 4) : 0LL;
      v16 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)v6 + 2) + 768LL),
              *(struct VIDMM_MULTI_ALLOC **)(v14 + 24),
              v15,
              0LL,
              0LL,
              a5);
      if ( v16 < 0 )
        break;
      *(_DWORD *)(v14 + 72) |= 0x800u;
      v14 = *(_QWORD *)(v14 + 64);
      v17 = v16 == 259;
      v6 = this;
      if ( v17 )
        v9 = 259;
    }
    for ( i = *(_QWORD *)(v13 + 24); i != v14; i = *(_QWORD *)(i + 64) )
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        *(struct VIDMM_MULTI_ALLOC **)(i + 24));
    v9 = v16;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    if ( (_DWORD)v11 )
    {
      v19 = (char *)a3 + 8 * v11;
      v20 = (unsigned int)v11;
      do
      {
        v21 = *(_QWORD *)v19;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*(_QWORD *)v19 + 80LL), 0);
        if ( IsEnabledDeviceUsageNoInline )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
        for ( j = *(_QWORD *)(v21 + 24); j; j = *(_QWORD *)(j + 64) )
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
            *(struct VIDMM_MULTI_ALLOC **)(j + 24));
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        --v20;
      }
      while ( v20 );
    }
  }
  return v9;
}
