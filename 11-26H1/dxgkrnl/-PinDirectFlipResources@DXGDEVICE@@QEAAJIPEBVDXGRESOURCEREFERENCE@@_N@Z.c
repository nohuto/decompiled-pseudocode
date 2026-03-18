/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1403887AC
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401C3794 (-RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403CD3BC (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1403DB190 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1404347BC (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  ADAPTER_RENDER *v6; // rcx
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v16; // ebx
  __int64 v17; // r12
  unsigned int v18; // r9d
  int v19; // eax
  __int64 v20; // r14
  const struct DXGALLOCATION *v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  __int64 v25; // r8
  const struct DXGRESOURCEREFERENCE *v26; // r12
  __int64 v27; // rbx
  unsigned int v28; // r14d
  __int64 i; // r14
  unsigned int v30; // [rsp+20h] [rbp-69h]
  enum _D3DDDIFORMAT v31; // [rsp+28h] [rbp-61h]
  unsigned __int64 *v32; // [rsp+30h] [rbp-59h]
  int v33; // [rsp+50h] [rbp-39h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v35[16]; // [rsp+68h] [rbp-21h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v36; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v37; // [rsp+F0h] [rbp+67h]
  int IsEnabledDeviceUsageNoInline; // [rsp+100h] [rbp+77h]

  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v36, 0, sizeof(v36));
  v11 = (v10 >> 6) & 0xF;
  v37 = v11;
  v36.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v36);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v11 < *((_DWORD *)this + 476) )
    {
      if ( !a4 || *((_DWORD *)this + 477) )
      {
        v16 = 0;
        v17 = 0LL;
        IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
        if ( a2 )
        {
          while ( 2 )
          {
            v19 = DXGDEVICE::ValidateDirectFlipResource(
                    *(DXGDEVICE **)(*((_QWORD *)a3 + v17) + 56LL),
                    *((struct DXGRESOURCE **)a3 + v17),
                    v37,
                    v18,
                    v30,
                    v31,
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + v17) + 56LL) + 132LL));
            LODWORD(v13) = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry2(3LL, *((_QWORD *)a3 + v17), v19);
              WdLogGlobalForLineNumber = 7091;
              return (unsigned int)v13;
            }
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&Interval,
              (struct DXGFASTMUTEX *const)(*((_QWORD *)a3 + v17) + 80LL),
              0);
            if ( IsEnabledDeviceUsageNoInline )
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Interval);
            v20 = *((_QWORD *)a3 + v17);
            v21 = *(const struct DXGALLOCATION **)(v20 + 24);
            while ( v21 )
            {
              if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, v21) )
              {
                v14 = -1073741811;
                WdLogSingleEntry2(3LL, v20, -1073741811LL);
                WdLogGlobalForLineNumber = 7111;
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&Interval);
                return v14;
              }
              v21 = *(const struct DXGALLOCATION **)(v22 + 64);
              ++v16;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&Interval);
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 < a2 )
              continue;
            break;
          }
        }
        v23 = v37;
        v24 = *((_DWORD *)this + v37 + 378);
        if ( v24 + v16 <= 0x300 )
        {
          if ( DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(this, v37, a2, a3) )
          {
            v33 = 0;
            if ( a2 )
            {
              v26 = a3;
              while ( (int)v13 >= 0 )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(*(_QWORD *)v26 + 80LL), 0);
                if ( IsEnabledDeviceUsageNoInline )
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
                v27 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
                if ( v27 )
                {
                  while ( (int)v13 >= 0 )
                  {
                    v28 = 0;
                    while ( 1 )
                    {
                      LODWORD(v13) = VIDMM_EXPORT::VidMmPinAllocation(
                                       *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                                       *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                                       *(struct VIDMM_MULTI_ALLOC **)(v27 + 24),
                                       0LL,
                                       0LL,
                                       0LL,
                                       0LL);
                      if ( (int)v13 >= 0 )
                        break;
                      Interval.QuadPart = -150LL;
                      KeDelayExecutionThread(0, 0, &Interval);
                      ++v28;
                      LODWORD(v13) = -1071775488;
                      if ( v28 >= 4 )
                        goto LABEL_36;
                    }
                    v27 = *(_QWORD *)(v27 + 64);
LABEL_36:
                    if ( !v27 )
                    {
                      if ( (int)v13 >= 0 )
                        goto LABEL_42;
                      break;
                    }
                  }
                  for ( i = *(_QWORD *)(*(_QWORD *)v26 + 24LL); i && i != v27; i = *(_QWORD *)(i + 64) )
                    VIDMM_EXPORT::VidMmUnpinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                      *(struct VIDMM_MULTI_ALLOC **)(i + 24));
                }
LABEL_42:
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
                v26 = (const struct DXGRESOURCEREFERENCE *)((char *)v26 + 8);
                if ( ++v33 >= a2 )
                {
                  v23 = v37;
                  goto LABEL_44;
                }
              }
              v23 = v37;
            }
            else
            {
LABEL_44:
              if ( (int)v13 >= 0 )
                return (unsigned int)v13;
            }
            DXGDEVICE::RemoveDirectFlipResourceFromRequestedPinnedList(this, v23, a2, a3);
            return (unsigned int)v13;
          }
          v14 = -1073741670;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 7141;
        }
        else
        {
          v25 = v16;
          v14 = -1073741811;
          WdLogSingleEntry4(3LL, v24, v25, 768LL, -1073741811LL);
          WdLogGlobalForLineNumber = 7126;
        }
      }
      else
      {
        v14 = -1073741790;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 7073;
      }
    }
    else
    {
      v14 = -1073741811;
      WdLogSingleEntry2(3LL, *(_QWORD *)a3, -1073741811LL);
      WdLogGlobalForLineNumber = 7063;
    }
    return v14;
  }
  WdLogSingleEntry4(2LL, v12, this, *(_QWORD *)(v9 + 16), v9);
  v32 = *(unsigned __int64 **)(v9 + 16);
  WdLogGlobalForLineNumber = 7052;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
    v13,
    (__int64)this,
    (__int64)v32,
    v9,
    0LL);
  return (unsigned int)v13;
}
