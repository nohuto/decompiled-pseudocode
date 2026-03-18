/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14038E5C0
 * Callers:
 *     DxgkReclaimAllocations @ 0x14038DDB0 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x14038E1A0 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x140049C9C (-VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_M.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x14038F1AC (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        char a4)
{
  unsigned int v7; // edi
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 NumAllocations; // r12
  D3DKMT_HANDLE *pResources; // rdx
  unsigned int *HandleList; // r9
  _BYTE *Pool2; // r15
  UINT k; // r12d
  __int64 v14; // r15
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  DXGDEVICE *v16; // r8
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r15d
  int v21; // eax
  BOOL *v22; // rcx
  DXGALLOCATIONREFERENCE *v23; // rax
  unsigned int v25; // ebx
  __int64 v26; // rbx
  DXGDEVICE *Count; // r8
  ULONG_PTR v28; // rbx
  int v29; // r15d
  struct VIDMM_MULTI_ALLOC *v30; // r9
  struct VIDMM_PAGING_QUEUE *v31; // r8
  int v32; // eax
  unsigned int v33; // r13d
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  struct DXGPROCESS *Current; // rax
  BOOL *v38; // rax
  UINT i; // ebx
  BOOL *pDiscarded; // rax
  UINT j; // edx
  __int64 v42; // r8
  int v44; // [rsp+54h] [rbp-104h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-100h]
  struct _EX_RUNDOWN_REF *v46; // [rsp+60h] [rbp-F8h] BYREF
  struct _EX_RUNDOWN_REF *v47; // [rsp+68h] [rbp-F0h] BYREF
  int v48; // [rsp+70h] [rbp-E8h]
  void *Src; // [rsp+78h] [rbp-E0h]
  DXGDEVICE *v50; // [rsp+80h] [rbp-D8h]
  DXGALLOCATIONREFERENCE *v51; // [rsp+88h] [rbp-D0h]
  UINT v52; // [rsp+90h] [rbp-C8h]
  struct DXGPAGINGQUEUE *v53; // [rsp+98h] [rbp-C0h]
  _BYTE v54[16]; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE *v55; // [rsp+B0h] [rbp-A8h]
  PVOID P; // [rsp+C0h] [rbp-98h]
  _BYTE v57[64]; // [rsp+C8h] [rbp-90h] BYREF
  int v58; // [rsp+108h] [rbp-50h]

  v53 = a2;
  v50 = this;
  v7 = 0;
  v8 = 0LL;
  v47 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3061LL) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v52 = i;
        if ( i >= a3->NumAllocations )
          break;
        pDiscarded = a3->pDiscarded;
        if ( a4 )
          RtlWriteULongToUser(&pDiscarded[i], 0);
        else
          pDiscarded[i] = 0;
      }
    }
    WdLogSingleEntry2(4LL, this, 0LL);
    WdLogGlobalForLineNumber = 8636;
    goto LABEL_54;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8645;
    goto LABEL_53;
  }
  v45 = 0;
  pResources = a3->pResources;
  HandleList = (unsigned int *)a3->HandleList;
  if ( (pResources != 0LL) == (HandleList != 0LL) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8656;
LABEL_53:
    v7 = -1073741811;
LABEL_54:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    return v7;
  }
  if ( pResources )
    HandleList = a3->pResources;
  Src = HandleList;
  Pool2 = 0LL;
  P = 0LL;
  v58 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v57;
    memset(v57, 0, 4LL * (unsigned int)NumAllocations);
    Pool2 = v57;
LABEL_8:
    v58 = NumAllocations;
    HandleList = (unsigned int *)Src;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( !a4 )
    goto LABEL_12;
  if ( !Pool2 )
  {
    WdLogSingleEntry2(6LL, this, a3->NumAllocations);
    WdLogGlobalForLineNumber = 8671;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
      (__int64)this,
      a3->NumAllocations,
      0LL,
      0LL,
      0LL);
    if ( P != v57 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v58 = 0;
    v7 = -1073741801;
    goto LABEL_54;
  }
  RtlCopyFromUser(Pool2, HandleList, 4LL * a3->NumAllocations);
  HandleList = (unsigned int *)Pool2;
  Src = Pool2;
  v55 = Pool2;
  Pool2 = P;
LABEL_12:
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) <= 0x10u )
    {
      if ( a3->pDiscarded )
      {
        for ( j = 0; j < a3->NumAllocations; ++j )
          a3->pDiscarded[j] = 0;
      }
      if ( P != v57 && P )
        ExFreePoolWithTag(P, 0);
      v25 = 0;
      goto LABEL_37;
    }
    v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(v35);
    v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v36 + 4712),
            Current,
            this,
            v53,
            a3,
            (const unsigned int *)Src);
LABEL_57:
    if ( P != v57 && P )
      ExFreePoolWithTag(P, 0);
LABEL_37:
    P = 0LL;
    v58 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    return v25;
  }
  if ( a3->pResources )
  {
    v23 = 0LL;
LABEL_30:
    v48 = (int)v23;
    if ( (unsigned int)v23 >= a3->NumAllocations )
      goto LABEL_31;
    v51 = v23;
    v26 = HandleList[(_QWORD)v23];
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v46, HandleList[(_QWORD)v23]);
    if ( v46 )
    {
      Count = (DXGDEVICE *)v46[1].Count;
      if ( Count == this )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, (struct DXGFASTMUTEX *const)&v46[10], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
        v28 = v46[3].Count;
        v29 = 0;
        while ( 1 )
        {
          if ( !v28 )
            goto LABEL_63;
          v30 = *(struct VIDMM_MULTI_ALLOC **)(v28 + 24);
          if ( !v30 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 8753;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Allocation 0x%p does not have a VidMm handle",
              v28,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
            goto LABEL_76;
          }
          v44 = 0;
          v31 = v53 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v53 + 4) : 0LL;
          v32 = VIDMM_EXPORT::VidMmReclaimAllocation(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  v31,
                  v30,
                  &a3->PagingFenceValue,
                  (enum _D3DDDI_RECLAIM_RESULT *)((unsigned __int64)&v44 & -(__int64)(a3->pDiscarded != 0LL)));
          v33 = v32;
          if ( v32 < 0 )
            break;
          v34 = v45;
          if ( v33 == 259 )
            v34 = 259;
          v45 = v34;
          if ( v44 == 2 )
          {
            v29 = 2;
LABEL_63:
            v38 = a3->pDiscarded;
            if ( v38 )
            {
              if ( a4 )
                RtlWriteULongToUser(&v38[(_QWORD)v51], v29);
              else
                v38[(_QWORD)v51] = v29;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
            v23 = (DXGALLOCATIONREFERENCE *)(unsigned int)(v48 + 1);
            Pool2 = P;
            HandleList = (unsigned int *)Src;
            goto LABEL_30;
          }
          if ( v44 == 1 )
            v29 = 1;
          v28 = *(_QWORD *)(v28 + 64);
        }
        WdLogSingleEntry3(3LL, this, v28, v32);
        WdLogGlobalForLineNumber = 8770;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
        if ( P != v57 && P )
          ExFreePoolWithTag(P, 0);
        v25 = v33;
      }
      else
      {
        WdLogSingleEntry2(2LL, this, Count);
        WdLogGlobalForLineNumber = 8738;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between device and resource device. Device: 0x%I64x, Resource Device: 0x%I64x",
          (__int64)this,
          v46[1].Count,
          0LL,
          0LL,
          0LL);
LABEL_76:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
LABEL_35:
        if ( P != v57 && P )
          ExFreePoolWithTag(P, 0);
        v25 = -1073741811;
      }
      goto LABEL_37;
    }
    v42 = v26;
    v25 = -1073741811;
    WdLogSingleEntry3(3LL, this, v42, -1073741811LL);
    WdLogGlobalForLineNumber = 8729;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
    goto LABEL_57;
  }
  for ( k = 0; k < a3->NumAllocations; ++k )
  {
    v14 = HandleList[k];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v46, HandleList[k]);
    v51 = AllocationSafe;
    if ( v8 )
    {
      ExReleaseRundownProtection(v8 + 11);
      AllocationSafe = v51;
    }
    v47 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v8 = v47;
    *(_QWORD *)AllocationSafe = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
    if ( !v8 )
    {
      v25 = -1073741811;
      WdLogSingleEntry3(3LL, this, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 8835;
      goto LABEL_57;
    }
    v16 = (DXGDEVICE *)v8[1].Count;
    if ( v16 != this )
    {
      WdLogSingleEntry2(2LL, this, v16);
      WdLogGlobalForLineNumber = 8844;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Mismatch between device and allocation device. Device: 0x%I64x, Allocation Device: 0x%I64x",
        (__int64)this,
        v8[1].Count,
        0LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    v17 = v8[3].Count;
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8852;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Allocation 0x%p does not have a VidMm handle",
        (__int64)v8,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    v44 = 0;
    if ( v53 )
      v18 = *((_QWORD *)v53 + 4);
    else
      v18 = 0LL;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                            + 632LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            v18,
            v17,
            &a3->PagingFenceValue,
            (unsigned __int64)&v44 & -(__int64)(a3->pDiscarded != 0LL));
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry3(3LL, this, v8, v19);
      WdLogGlobalForLineNumber = 8869;
      if ( P != v57 && P )
        ExFreePoolWithTag(P, 0);
      v25 = v20;
      goto LABEL_37;
    }
    v21 = v45;
    if ( v20 == 259 )
      v21 = 259;
    v45 = v21;
    v22 = a3->pDiscarded;
    if ( v22 )
    {
      if ( a4 )
        RtlWriteULongToUser(&v22[k], v44);
      else
        v22[k] = v44;
    }
    Pool2 = P;
    HandleList = (unsigned int *)Src;
  }
LABEL_31:
  if ( Pool2 != v57 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  P = 0LL;
  v58 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
  return v45;
}
