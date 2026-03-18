/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1403BEDFC
 * Callers:
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402324D0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x1403BEA70 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x140231D68 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  struct _EX_RUNDOWN_REF *v7; // rdx
  unsigned int ULongFromUser; // esi
  ULONG_PTR i; // rbx
  __int64 v10; // rdx
  UINT j; // r14d
  unsigned int v13; // r15d
  UINT v14; // ebx
  _BYTE v15[24]; // [rsp+58h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v16; // [rsp+B8h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
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
      WdLogGlobalForLineNumber = 6798;
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v16, hResource);
      v7 = v16;
      if ( v16 )
      {
        if ( (DXGDEVICE *)v16[1].Count == this )
        {
          if ( a3 )
          {
            ULongFromUser = RtlReadULongFromUser((unsigned int *)a2->pPriorities);
            v7 = v16;
          }
          else
          {
            ULongFromUser = *a2->pPriorities;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)&v7[10], 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
          for ( i = v16[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v16);
              return 0LL;
            }
            v10 = *(_QWORD *)(i + 24);
            if ( !v10 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                        + 8LL)
                                                            + 184LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              v10,
              ULongFromUser);
          }
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6855;
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
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v16);
          return -1073741811LL;
        }
        WdLogSingleEntry3(2LL, this, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 6820;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)this,
          (__int64)v16,
          -1073741811LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
        WdLogGlobalForLineNumber = 6811;
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v16);
    }
    return 3221225485LL;
  }
  if ( a2->AllocationCount )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= a2->AllocationCount )
        return 0LL;
      if ( a3 )
      {
        v13 = RtlReadULongFromUser((unsigned int *)&a2->phAllocationList[j]);
        v14 = RtlReadULongFromUser((unsigned int *)&a2->pPriorities[j]);
      }
      else
      {
        v13 = a2->phAllocationList[j];
        v14 = a2->pPriorities[j];
      }
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v16, v13);
      if ( !v16 )
        break;
      if ( (DXGDEVICE *)v16[1].Count != this )
      {
        WdLogSingleEntry3(2LL, this, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 6920;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)this,
          (__int64)v16,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_26;
      }
      if ( !v16[3].Count )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6929;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          (__int64)v16,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
        return -1073741811LL;
      }
      (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                        + 184LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v16[3].Count,
        v14);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
    }
    WdLogSingleEntry3(3LL, this, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 6911;
LABEL_26:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
    return 3221225485LL;
  }
  return 0LL;
}
