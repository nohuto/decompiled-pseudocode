/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x14043C110
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x140075A48 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     ?VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14007B5F8 (-VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1401C2D18 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022EAE8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  unsigned __int8 *v3; // rdi
  __int64 v4; // r14
  unsigned __int64 AllocationHandle; // r15
  char *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // r15
  __int64 Current; // rbx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  const wchar_t *v16; // r9
  int v17; // eax
  int v18; // ebx
  int HostProcess; // eax
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r13d
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // rcx
  struct _EX_RUNDOWN_REF *v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // r13
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdi
  ULONG_PTR v38; // rcx
  unsigned __int8 *v39; // r14
  int v40; // edi
  int v41; // eax
  int v42; // eax
  ULONG_PTR v43; // r8
  VIDMM_EXPORT *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r15
  ULONG_PTR v48; // rcx
  unsigned int v49; // eax
  int v50; // r8d
  __int64 v51; // rcx
  struct _EX_RUNDOWN_REF *v52; // rdx
  struct _EX_RUNDOWN_REF *v53; // rbx
  ULONG_PTR v54; // rdx
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // edx
  __int64 v60; // r15
  __int64 v61; // r13
  int v62; // eax
  int Ptr_high; // eax
  int v64; // edi
  int v65; // eax
  struct DXGFASTMUTEX *v66; // rdx
  ULONG_PTR j; // rdi
  int v68; // eax
  ULONG_PTR i; // rdi
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rdi
  ULONG_PTR v73; // rcx
  struct _EX_RUNDOWN_REF *v74; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v75; // [rsp+58h] [rbp-A8h]
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 v76; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v77; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v78; // [rsp+70h] [rbp-90h]
  _BYTE v79[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v80[160]; // [rsp+90h] [rbp-70h] BYREF

  v78 = (unsigned __int8 *)a1;
  v3 = (unsigned __int8 *)a1;
  LODWORD(v4) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v7 = (char *)a2 + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v8 = 0;
    v9 = 0LL;
    v10 = (_QWORD *)*((_QWORD *)a2 + 40);
    v75 = v10;
    v74 = (struct _EX_RUNDOWN_REF *)((char *)a2 + 320);
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v74);
    if ( Current )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(Current + 1917) & 1) != 0 )
        {
          v8 = 1;
          v9 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        }
        else
        {
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, Current, 0, v12, 0);
          v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
          v4 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry1(2LL);
            v16 = L"Failed to acquire coredeviceaccess shared lock, returning 0x%I64x";
            WdLogGlobalForLineNumber = 137;
            goto LABEL_12;
          }
          v14 = *(_QWORD *)(Current + 16);
          if ( *(int *)(*(_QWORD *)(v14 + 16) + 3044LL) < 2000 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v80);
            v17 = DXGDEVICE::EvictAllAllocations((DXGDEVICE *)Current);
            v4 = v17;
            if ( v17 < 0 )
            {
              WdLogSingleEntry1(2LL);
              v16 = L"Failed to Evict All Allocations, returning 0x%I64x";
              WdLogGlobalForLineNumber = 169;
              goto LABEL_12;
            }
          }
          else
          {
            v15 = VIDMM_EXPORT::VidMmEvictionTest(
                    *(VIDMM_EXPORT **)(v14 + 760),
                    *(struct VIDMM_GLOBAL **)(v14 + 768),
                    *(struct VIDMM_DEVICE **)(Current + 792),
                    0LL);
            v4 = v15;
            if ( v15 < 0 )
            {
              WdLogSingleEntry1(2LL);
              v16 = L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x";
              WdLogGlobalForLineNumber = 153;
LABEL_12:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v4, 0LL, 0LL, 0LL, 0LL);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
              *((_QWORD *)v7 + 1) = 0LL;
              goto LABEL_19;
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
        }
        v10 = (_QWORD *)*v10;
        v75 = v10;
        Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v74);
        if ( !Current )
        {
          if ( v8 )
          {
            v18 = *(_DWORD *)(v9 + 4800);
            HostProcess = DXGPROCESS::GetHostProcess(a2);
            LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4712),
                            HostProcess,
                            v18,
                            0,
                            0,
                            D3DKMT_ESCAPE_VIDMM,
                            0,
                            0x840u,
                            v78);
          }
          break;
        }
      }
    }
    *((_QWORD *)v7 + 1) = 0LL;
LABEL_19:
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v4;
  }
  Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
  v76 = Value;
  if ( (_DWORD)AllocationHandle )
  {
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, 0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79, a2);
    v21 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)a2 + 74) )
    {
      v22 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v21 + 8);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v21 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = *((_QWORD *)a2 + 35);
        if ( (*(_BYTE *)(v23 + 16LL * v21 + 8) & 0x1F) == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * v21);
          goto LABEL_31;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v24 = 0LL;
LABEL_31:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v24);
    DXGALLOCATIONREFERENCE::MoveAssign(&v77, &v74);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
    v25 = v77;
    if ( !v77 || (Count = v77[1].Count) == 0 )
    {
LABEL_37:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
      LODWORD(v4) = -1073741811;
LABEL_38:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
      return (unsigned int)v4;
    }
    _m_prefetchw((const void *)(Count + 64));
    v27 = *(_QWORD *)(Count + 64);
    do
    {
      if ( !v27 )
        goto LABEL_37;
      v28 = v27;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v27 + 1, v27);
    }
    while ( v28 != v27 );
    v29 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)a2 + 74) )
    {
      v30 = *((_QWORD *)a2 + 35);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *(_DWORD *)(16 * (((unsigned __int64)(unsigned int)AllocationHandle >> 6) & 0xFFFFFF) + v30 + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
    v32 = *(_QWORD *)(v25[1].Count + 16);
    if ( !v32 )
    {
LABEL_62:
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      v45 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
      if ( (unsigned int)v45 < *((_DWORD *)a2 + 74) )
      {
        v46 = *((_QWORD *)a2 + 35);
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
          && (*(_DWORD *)(v46 + 16 * v45 + 8) & 0x1F) != 0 )
        {
          v47 = 16 * ((AllocationHandle >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v47 + v46 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + v47 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v48 = v25[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
      v3 = v78;
      goto LABEL_71;
    }
    v33 = *(_QWORD *)(v32 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, (struct DXGADAPTER *const)v33, 0LL);
    v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80, 0LL);
    v4 = v34;
    if ( v34 < 0 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
      v35 = ((unsigned int)AllocationHandle >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 < *((_DWORD *)a2 + 74) )
      {
        v36 = *((_QWORD *)a2 + 35);
        if ( (((unsigned int)AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
          && (*(_DWORD *)(v36 + 16 * v35 + 8) & 0x1F) != 0 )
        {
          v37 = 16LL * (((unsigned int)AllocationHandle >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v37 + v36 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)a2 + 35) + v37 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)a2 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      v38 = v25[1].Count;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v38 + 16), (struct DXGDEVICE *)v38);
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 226;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
      goto LABEL_38;
    }
    if ( *(_BYTE *)(v33 + 209) )
    {
      v39 = v78;
      *((_DWORD *)v78 + 3) = HIDWORD(v25[2].Ptr);
      *((_QWORD *)v39 + 2) = 0LL;
      *((_DWORD *)v39 + 2) = 0;
      v40 = *(_DWORD *)(v33 + 4800);
      v41 = DXGPROCESS::GetHostProcess(a2);
      v42 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v33 + 4712),
              v41,
              v40,
              0,
              0,
              D3DKMT_ESCAPE_VIDMM,
              0,
              0x840u,
              v39);
    }
    else
    {
      v43 = v25[1].Count;
      v44 = *(VIDMM_EXPORT **)(v32 + 760);
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 3044LL) < 2000 )
      {
        VIDMM_EXPORT::VidMmEvictAllocation(
          v44,
          *(struct VIDMM_GLOBAL **)(v32 + 768),
          (struct VIDMM_MULTI_ALLOC *)v25[3].Count,
          0LL,
          0LL);
        goto LABEL_61;
      }
      v42 = VIDMM_EXPORT::VidMmEvictionTest(
              v44,
              *(struct VIDMM_GLOBAL **)(v32 + 768),
              *(struct VIDMM_DEVICE **)(v43 + 792),
              (struct VIDMM_MULTI_ALLOC *)v25[3].Count);
    }
    LODWORD(v4) = v42;
LABEL_61:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
    Value = v76;
    goto LABEL_62;
  }
LABEL_71:
  if ( Value )
  {
    v77 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79, a2);
    v49 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
    if ( v49 < *((_DWORD *)a2 + 74) )
    {
      v50 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v49 + 8);
      if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v49 + 8) & 0x60)
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) != 0 )
      {
        v51 = *((_QWORD *)a2 + 35);
        if ( (*(_BYTE *)(v51 + 16LL * v49 + 8) & 0x1F) == 4 )
        {
          v52 = *(struct _EX_RUNDOWN_REF **)(v51 + 16LL * v49);
LABEL_79:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74, v52);
          DXGRESOURCEREFERENCE::MoveAssign(&v77, &v74);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v74);
          v53 = v77;
          if ( v77 )
          {
            v54 = v77[1].Count;
            if ( v54 )
            {
              _m_prefetchw((const void *)(v54 + 64));
              v55 = *(_QWORD *)(v54 + 64);
              while ( v55 )
              {
                v56 = v55;
                v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 64), v55 + 1, v55);
                if ( v56 == v55 )
                {
                  v57 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v57 < *((_DWORD *)a2 + 74) )
                  {
                    v58 = *((_QWORD *)a2 + 35);
                    v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
                    if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60)
                      && (v59 & 0x2000) == 0
                      && (v59 & 0x1F) != 0 )
                    {
                      *(_DWORD *)(16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + v58 + 8) |= 0x2000u;
                    }
                  }
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
                  v60 = *(_QWORD *)(v53[1].Count + 16);
                  if ( v60 )
                  {
                    v61 = *(_QWORD *)(v60 + 16);
                    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, (struct DXGADAPTER *const)v61, 0LL);
                    v62 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80, 0LL);
                    v4 = v62;
                    if ( v62 >= 0 )
                    {
                      if ( *(_BYTE *)(v61 + 209) )
                      {
                        Ptr_high = HIDWORD(v53[2].Ptr);
                        *((_DWORD *)v3 + 3) = 0;
                        *((_QWORD *)v3 + 2) = 0LL;
                        *((_DWORD *)v3 + 2) = Ptr_high;
                        v64 = *(_DWORD *)(v61 + 4800);
                        v65 = DXGPROCESS::GetHostProcess(a2);
                        LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v61 + 4712),
                                        v65,
                                        v64,
                                        0,
                                        0,
                                        D3DKMT_ESCAPE_VIDMM,
                                        0,
                                        0x840u,
                                        v78);
                      }
                      else
                      {
                        v66 = (struct DXGFASTMUTEX *)&v53[10];
                        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v53[1].Count + 16) + 16LL) + 3044LL) < 2000 )
                        {
                          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v74, v66, 0);
                          if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
                            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v74);
                          for ( i = v53[3].Count; i; i = *(_QWORD *)(i + 64) )
                            VIDMM_EXPORT::VidMmEvictAllocation(
                              *(VIDMM_EXPORT **)(v60 + 760),
                              *(struct VIDMM_GLOBAL **)(v60 + 768),
                              *(struct VIDMM_MULTI_ALLOC **)(i + 24),
                              0LL,
                              0LL);
                        }
                        else
                        {
                          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v74, v66, 0);
                          if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
                            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v74);
                          for ( j = v53[3].Count; j; j = *(_QWORD *)(j + 64) )
                          {
                            v68 = VIDMM_EXPORT::VidMmEvictionTest(
                                    *(VIDMM_EXPORT **)(v60 + 760),
                                    *(struct VIDMM_GLOBAL **)(v60 + 768),
                                    *(struct VIDMM_DEVICE **)(v53[1].Count + 792),
                                    *(struct VIDMM_MULTI_ALLOC **)(j + 24));
                            v4 = v68;
                            if ( v68 < 0 )
                            {
                              WdLogSingleEntry1(2LL);
                              WdLogGlobalForLineNumber = 332;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                -1,
                                (__int64)L"VIDMM_GLOBAL::EvictionTest reported failure, returning 0x%I64x",
                                v4,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                              break;
                            }
                          }
                        }
                        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v74);
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 294;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to acquire CoreAdapterAccess shared lock, returning 0x%I64x",
                        v4,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
                    Value = v76;
                  }
                  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
                  v70 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v70 < *((_DWORD *)a2 + 74) )
                  {
                    v71 = *((_QWORD *)a2 + 35);
                    if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v71 + 16 * v70 + 8) & 0x60)
                      && (*(_DWORD *)(v71 + 16 * v70 + 8) & 0x1F) != 0 )
                    {
                      v72 = 16LL * ((*(unsigned int *)&Value >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v72 + v71 + 8) & 0x2000) == 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 224;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                          224LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      *(_DWORD *)(*((_QWORD *)a2 + 35) + v72 + 8) &= ~0x2000u;
                    }
                  }
                  *((_QWORD *)a2 + 32) = 0LL;
                  ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
                  KeLeaveCriticalRegion();
                  v73 = v53[1].Count;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v73 + 16), (struct DXGDEVICE *)v73);
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v77);
                  return (unsigned int)v4;
                }
              }
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v77);
          return 3221225485LL;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v52 = 0LL;
    goto LABEL_79;
  }
  return (unsigned int)v4;
}
