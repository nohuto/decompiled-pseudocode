/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1403758D8
 * Callers:
 *     DxgkOfferAllocations @ 0x140374E90 (DxgkOfferAllocations.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x14004B060 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFE.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x140230898 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2, char a3)
{
  unsigned int v5; // edi
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 NumAllocations; // r12
  D3DKMT_HANDLE *pResources; // rdx
  D3DKMT_HANDLE *HandleList; // r13
  struct _EX_RUNDOWN_REF *Pool2; // r15
  UINT v11; // r12d
  DXGALLOCATIONREFERENCE *AllocationSafe; // r13
  ULONG_PTR Count; // rdx
  int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v20; // ebx
  __int64 v21; // rbx
  ULONG_PTR i; // rbx
  struct VIDMM_MULTI_ALLOC *v23; // r8
  int v24; // eax
  struct _EX_RUNDOWN_REF *v26; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+60h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v28[3]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  _BYTE v30[64]; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+C8h] [rbp-40h]

  v26 = (struct _EX_RUNDOWN_REF *)this;
  v5 = 0;
  v6 = 0LL;
  v27 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3061LL) )
  {
    WdLogSingleEntry2(4LL, this, 0LL);
    WdLogGlobalForLineNumber = 8415;
    goto LABEL_27;
  }
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8424;
    goto LABEL_38;
  }
  pResources = a2->pResources;
  HandleList = (D3DKMT_HANDLE *)a2->HandleList;
  if ( (pResources != 0LL) == (HandleList != 0LL) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8433;
LABEL_38:
    v5 = -1073741811;
    goto LABEL_27;
  }
  if ( pResources )
    HandleList = pResources;
  Pool2 = 0LL;
  P = 0LL;
  v31 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v30;
    memset(v30, 0, 4LL * (unsigned int)NumAllocations);
    Pool2 = (struct _EX_RUNDOWN_REF *)v30;
LABEL_8:
    v31 = NumAllocations;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations >= 4 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( a3 )
  {
    if ( Pool2 )
    {
      RtlCopyFromUser(Pool2, HandleList, 4LL * a2->NumAllocations);
      v28[2] = Pool2;
      goto LABEL_12;
    }
    WdLogSingleEntry2(6LL, this, a2->NumAllocations);
    WdLogGlobalForLineNumber = 8448;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
      (__int64)this,
      a2->NumAllocations,
      0LL,
      0LL,
      0LL);
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    v5 = -1073741801;
LABEL_27:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
    return v5;
  }
  Pool2 = (struct _EX_RUNDOWN_REF *)HandleList;
LABEL_12:
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) <= 0x10u )
      goto LABEL_15;
    v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(v17);
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4712),
            Current,
            this,
            a2,
            (const unsigned int *)Pool2);
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_36;
  }
  v11 = 0;
  if ( !a2->pResources )
  {
    while ( v11 < a2->NumAllocations )
    {
      LODWORD(v26) = *((_DWORD *)&Pool2->Count + v11);
      AllocationSafe = DXGPROCESS::GetAllocationSafe(
                         *((_QWORD *)this + 5),
                         (DXGALLOCATIONREFERENCE *)v28,
                         (unsigned int)v26);
      if ( v6 )
        ExReleaseRundownProtection(v6 + 11);
      v27 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
      v6 = v27;
      *(_QWORD *)AllocationSafe = 0LL;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v28);
      if ( !v6 )
      {
        WdLogSingleEntry3(3LL, this, (unsigned int)v26, -1073741811LL);
        WdLogGlobalForLineNumber = 8556;
        goto LABEL_34;
      }
      if ( (DXGDEVICE *)v6[1].Count != this )
      {
        WdLogSingleEntry3(2LL, this, v6, -1073741811LL);
        WdLogGlobalForLineNumber = 8566;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Allocation 0x%p does not belong to the provided adapter, returning 0x%I64x",
          (__int64)this,
          (__int64)v6,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_34;
      }
      Count = v6[3].Count;
      if ( !Count )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8574;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          (__int64)v6,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_34;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 624LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              Count,
              (unsigned int)a2->Priority,
              a2->Flags.Value);
      v16 = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry3(3LL, this, v6, v15);
        WdLogGlobalForLineNumber = 8589;
        goto LABEL_63;
      }
      ++v11;
    }
    goto LABEL_15;
  }
LABEL_14:
  if ( v11 < a2->NumAllocations )
  {
    v21 = *((unsigned int *)&Pool2->Count + v11);
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v26, *((_DWORD *)&Pool2->Count + v11));
    if ( !v26 )
    {
      WdLogSingleEntry3(3LL, this, v21, -1073741811LL);
      WdLogGlobalForLineNumber = 8497;
LABEL_47:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
LABEL_34:
      if ( P != v30 && P )
        ExFreePoolWithTag(P, 0);
      v20 = -1073741811;
      goto LABEL_36;
    }
    if ( (DXGDEVICE *)v26[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v26, -1073741811LL);
      WdLogGlobalForLineNumber = 8507;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Resource 0x%p does not belong to the provided adapter, returning 0x%I64x",
        (__int64)this,
        (__int64)v26,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_47;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)&v26[10], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    for ( i = v26[3].Count; ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
        ++v11;
        goto LABEL_14;
      }
      v23 = *(struct VIDMM_MULTI_ALLOC **)(i + 24);
      if ( !v23 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8521;
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
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
        goto LABEL_47;
      }
      v24 = VIDMM_EXPORT::VidMmOfferAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
              v23,
              a2->Priority,
              a2->Flags);
      v16 = v24;
      if ( v24 < 0 )
        break;
    }
    WdLogSingleEntry3(3LL, this, i, v24);
    WdLogGlobalForLineNumber = 8536;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
LABEL_63:
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    v20 = v16;
LABEL_36:
    P = 0LL;
    v31 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
    return v20;
  }
LABEL_15:
  if ( P != v30 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  P = 0LL;
  v31 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
  return 0LL;
}
