/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x140408124
 * Callers:
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226B90 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetAllocationPriority @ 0x140407D90 (DxgkGetAllocationPriority.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x14022EF8C (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  unsigned int v8; // r14d
  ULONG_PTR i; // rsi
  __int64 v10; // rdx
  UINT j; // esi
  unsigned int v12; // r14d
  _QWORD *v13; // r9
  ULONG_PTR Count; // rdx
  struct _EX_RUNDOWN_REF *v15; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v16[56]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+20h] BYREF

  v17 = 0;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( hResource )
  {
    if ( a2->AllocationCount )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 6979;
      return 3221225485LL;
    }
    if ( a2->phAllocationList )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 6989;
      return 3221225485LL;
    }
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v15, hResource);
    if ( !v15 || *(_DWORD *)(v15[1].Count + 468) != a2->hDevice )
    {
      WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
      WdLogGlobalForLineNumber = 7001;
LABEL_24:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v15);
      return 3221225485LL;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)&v15[10], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v8 = 0;
    for ( i = v15[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v10 = *(_QWORD *)(i + 24);
      if ( !v10 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 7017;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          i,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
        goto LABEL_24;
      }
      (*(void (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                          + 8LL)
                                                              + 1112LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v10,
        &v17);
      if ( v8 <= v17 )
        v8 = v17;
    }
    if ( a3 )
      RtlWriteULongToUser(a2->pPriorities, v8);
    else
      *a2->pPriorities = v8;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v15);
  }
  else if ( a2->AllocationCount )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= a2->AllocationCount )
        return 0LL;
      v12 = a3 ? RtlReadULongFromUser((unsigned int *)&a2->phAllocationList[j]) : a2->phAllocationList[j];
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v15, v12);
      if ( !v15 )
        break;
      v13 = (_QWORD *)*((_QWORD *)this + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 16LL) != v13[2] )
      {
        WdLogSingleEntry3(2LL, this, v15, -1073741811LL);
        WdLogGlobalForLineNumber = 7102;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)this,
          (__int64)v15,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_33;
      }
      Count = v15[3].Count;
      if ( !Count )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 7118;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          (__int64)v15,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_33;
      }
      (*(void (__fastcall **)(_QWORD, ULONG_PTR, unsigned int *))(*(_QWORD *)(v13[95] + 8LL) + 1112LL))(
        v13[96],
        Count,
        &v17);
      if ( a3 )
        RtlWriteULongToUser(&a2->pPriorities[j], v17);
      else
        a2->pPriorities[j] = v17;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v15);
    }
    WdLogSingleEntry3(3LL, this, v12, -1073741811LL);
    WdLogGlobalForLineNumber = 7093;
LABEL_33:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v15);
    return 3221225485LL;
  }
  return 0LL;
}
