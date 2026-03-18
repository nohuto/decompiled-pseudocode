/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401BA4F4
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1401BB9F0 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x14007482C (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x140231464 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  D3DKMT_HANDLE hResource; // r8d
  __int64 j; // rsi
  int v9; // eax
  int v10; // eax
  __int64 AllocationCount; // rax
  __int64 i; // rsi
  unsigned int v13; // r14d
  struct DXGPROCESS *v14; // rcx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  _BYTE v16[56]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  int v18; // [rsp+B8h] [rbp+20h]

  hResource = a2->hResource;
  if ( hResource && a2->AllocationCount )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 7181;
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4712LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !hResource )
  {
    AllocationCount = a2->AllocationCount;
    if ( (_DWORD)AllocationCount )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a2->AllocationCount )
          return 0LL;
        v13 = a3 ? RtlReadULongFromUser((unsigned int *)&a2->phAllocationList[i]) : a2->phAllocationList[i];
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v17, v13);
        if ( !v17 )
          break;
        v14 = this[2];
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL) + 16LL) != *((_QWORD *)v14 + 2) )
        {
          WdLogSingleEntry3(2LL, this, v17, -1073741811LL);
          WdLogGlobalForLineNumber = 7318;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            v17,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_34;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *((VIDMM_EXPORT **)v14 + 95),
                                              *((struct VIDMM_GLOBAL **)v14 + 96),
                                              *(const struct VIDMM_MULTI_ALLOC **)(v17 + 24));
        if ( a3 )
          RtlWriteULongToUser(&a2->pResidencyStatus[i], AllocationResidency);
        else
          a2->pResidencyStatus[i] = AllocationResidency;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17);
      }
      WdLogSingleEntry3(3LL, this, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 7309;
LABEL_34:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17);
      return 3221225485LL;
    }
    WdLogSingleEntry3(3LL, this, AllocationCount, -1073741811LL);
    WdLogGlobalForLineNumber = 7363;
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v17, hResource);
  if ( !v17 )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
    WdLogGlobalForLineNumber = 7199;
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v17);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL) + 16LL) != *((_QWORD *)this[2] + 2) )
  {
    WdLogSingleEntry3(2LL, this, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 7208;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      v17,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  v18 = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(v17 + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  for ( j = *(_QWORD *)(v17 + 24); j; j = *(_QWORD *)(j + 64) )
  {
    v9 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
           *((VIDMM_EXPORT **)this[2] + 95),
           *((struct VIDMM_GLOBAL **)this[2] + 96),
           *(const struct VIDMM_MULTI_ALLOC **)(j + 24));
    if ( v9 == 3 )
    {
      v18 = 3;
      break;
    }
    if ( v9 == 2 )
    {
      v10 = v18;
      if ( v18 != 3 )
        v10 = 2;
      v18 = v10;
    }
  }
  if ( a3 )
    RtlWriteULongToUser(a2->pResidencyStatus, v18);
  else
    *a2->pResidencyStatus = v18;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v17);
  return 0LL;
}
