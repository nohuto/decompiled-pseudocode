/*
 * XREFs of EvictResources @ 0x1401172F8
 * Callers:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1401172D0 (-EvictResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x140100430 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010873C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x14010F778 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1401119B4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EvictResources(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool a3,
        char a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v8; // rbp
  __int64 *v10; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r9
  unsigned __int64 *v19; // r10
  int v20; // eax
  const unsigned __int64 *FullPfnArray; // rax
  __int64 v22; // rax
  unsigned __int8 (__fastcall *v23)(__int64 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, __int64); // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD **v30; // r12
  __int64 v31; // rax
  _QWORD *i; // rbx
  __int64 v33; // rcx
  __int64 v34; // rdx
  struct VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  unsigned __int64 v36; // r11
  int v37; // r10d
  int v38; // r10d
  int v39; // r10d
  int v40; // r10d
  unsigned __int8 AllocationPriorityClassFromPriority; // al
  volatile unsigned __int8 v42; // al
  __int64 *v43; // rbp
  __int64 *v44; // rax
  __int64 **v45; // rcx
  signed __int32 v46[8]; // [rsp+0h] [rbp-98h] BYREF
  bool v47[8]; // [rsp+20h] [rbp-78h]
  unsigned int v48[2]; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-48h] BYREF
  char v50; // [rsp+58h] [rbp-40h]
  _BYTE v51[16]; // [rsp+60h] [rbp-38h] BYREF

  v6 = *((_QWORD *)a1 + 7);
  v8 = *(_QWORD *)a2;
  v10 = (__int64 *)*((_QWORD *)a2 + 8);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v12 + 24) = v8;
    *(_QWORD *)(v12 + 32) = *(int *)(v8 + 188);
    WdLogGlobalForLineNumber = 3638;
  }
  if ( *(_DWORD *)(v8 + 76) && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc((VIDMM_GLOBAL *)v6, (struct VIDMM_GLOBAL_ALLOC *)v8, 0);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v49,
    (struct DXGPUSHLOCKFAST *)(v8 + 304),
    0);
  if ( *((_DWORD *)v10 + 27) == 1 )
  {
    KeEnterCriticalRegion();
    v13 = v49;
    ExAcquirePushLockExclusiveEx(v49, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v50 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (struct DXGFASTMUTEX *const)(v8 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
  v17 = a6;
  if ( !a6 )
    v17 = *(_QWORD *)(v8 + 48);
  if ( *(_DWORD *)(v6 + 40088) )
  {
    if ( (*(_DWORD *)(v8 + 24) & 0x800000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v14, (struct VIDMM_GLOBAL_ALLOC *)v8);
    if ( (**(_DWORD **)(v8 + 368) & 0x10000) != 0 )
    {
      Feature_NotifyResidency2__private_ReportDeviceUsage();
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 24) + 1776LL) )
      {
        v18 = *((_QWORD *)a2 + 8);
        v19 = 0LL;
        v20 = *((_DWORD *)a1 + 24);
        if ( _bittest(&v20, *(unsigned __int8 *)(v18 + 70)) )
        {
          FullPfnArray = VidMmGetFullPfnArray((const struct VIDMM_GLOBAL_ALLOC *)v8);
          v18 = *((_QWORD *)a2 + 8);
          v19 = (unsigned __int64 *)FullPfnArray;
        }
        VIDMM_GLOBAL::NotifyResidency2(
          (VIDMM_GLOBAL *)v6,
          a1,
          (void ***)a2,
          0,
          a3,
          0,
          (*((_QWORD *)a2 + 2) >> 12) + ((*((_QWORD *)a2 + 2) & 0xFFFLL) != 0),
          *(unsigned __int16 *)(v18 + 70),
          (*((__int64 *)a2 + 9) >> 12) + ((*((_QWORD *)a2 + 9) & 0xFFFLL) != 0),
          v19);
      }
      else if ( (*(_DWORD *)(*((_QWORD *)a2 + 8) + 64LL) & 0x1000) == 0 )
      {
        VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v6, (struct VIDMM_GLOBAL_ALLOC *)v8, 0, 0, 0LL);
      }
    }
  }
  v22 = *v10;
  LOBYTE(v15) = a3;
  LOBYTE(v16) = a4;
  *(_QWORD *)v48 = a6;
  v23 = *(unsigned __int8 (__fastcall **)(__int64 *, struct VIDMM_PHYSICAL_ALLOC *, __int64, __int64, _DWORD, __int64))(v22 + 40);
  v47[0] = a5;
  if ( v23(v10, a2, v15, v16, *(_DWORD *)v47, a6) )
  {
    if ( v17 )
    {
      v25 = *(_QWORD *)(v17 + 8);
      if ( v25 )
        VidMmRecordAlloc((__int64 *)a1, (__int64)a2, v25, 1);
    }
    if ( *((_QWORD *)a2 + 17) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
        v26[3] = *((_QWORD *)a2 + 17);
        v26[4] = *((int *)a2 + 19);
        v26[5] = *((unsigned int *)a2 + 18);
        WdLogGlobalForLineNumber = 3745;
      }
      (*(void (__fastcall **)(__int64 *, struct VIDMM_PHYSICAL_ALLOC *, _QWORD, _QWORD, _QWORD))(*v10 + 24))(
        v10,
        a2,
        *((_QWORD *)a2 + 17),
        *((_QWORD *)a2 + 2),
        **(_QWORD **)(v8 + 328));
      *((_QWORD *)a2 + 17) = 0LL;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v24);
      WdLogGlobalForLineNumber = 3756;
    }
    *(_WORD *)(*(_QWORD *)(v8 + 368) + 10LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v8 + 368) + 40LL) = 0LL;
    v27 = (_QWORD *)(v8 + 240);
    *((_QWORD *)a2 + 8) = 0LL;
    v28 = *(_QWORD *)(v8 + 240);
    if ( *(_QWORD *)(v28 + 8) == v8 + 240 )
    {
      v29 = *(_QWORD **)(v8 + 248);
      if ( (_QWORD *)*v29 == v27 )
      {
        *v29 = v28;
        v30 = (_QWORD **)(v8 + 112);
        *(_QWORD *)(v28 + 8) = v29;
        *v27 = 0LL;
        *(_QWORD *)(v8 + 248) = 0LL;
        v31 = 1728LL;
        if ( *((_DWORD *)v10 + 27) != 1 )
          v31 = 1736LL;
        *(_QWORD *)((char *)a1 + v31) -= *((_QWORD *)a2 + 2);
        for ( i = *v30; i != v30; i = (_QWORD *)*i )
        {
          v33 = 240LL;
          if ( *((_DWORD *)v10 + 27) != 1 )
            v33 = 248LL;
          v34 = v33
              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 32LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 24) + 240LL))
                          + 8LL);
          *(_QWORD *)(v34 + 304LL * *((unsigned __int16 *)a1 + 36)) -= *((_QWORD *)a2 + 2);
          CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                    (VIDMM_PROCESS *)*(i - 5),
                                    *(_DWORD *)(*(_QWORD *)(v6 + 24) + 240LL),
                                    *((_WORD *)a1 + 36),
                                    *((_WORD *)v10 + 35));
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 7408));
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 7416), v36);
          v38 = v37 - 102;
          if ( v38 )
          {
            v39 = v38 - 8;
            if ( v39 )
            {
              v40 = v39 - 90;
              if ( v40 )
              {
                if ( v40 == 7 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v6 + 7424));
                  _InterlockedAdd64((volatile signed __int64 *)(v6 + 7432), v36);
                  *((_QWORD *)CommitmentInformation + 20) += v36;
                }
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v6 + 7456));
                _InterlockedAdd64((volatile signed __int64 *)(v6 + 7464), v36);
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 7488));
              _InterlockedAdd64((volatile signed __int64 *)(v6 + 7496), v36);
            }
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 7472));
            _InterlockedAdd64((volatile signed __int64 *)(v6 + 7480), v36);
          }
        }
        v10[43] += *((_QWORD *)a2 + 2);
        AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(*((_DWORD *)a2 + 12));
        v10[AllocationPriorityClassFromPriority + 45] += *((_QWORD *)a2 + 2);
        v42 = g_Feature_Largify64KBPrototype;
        *(_DWORD *)(v8 + 72) = 0;
        *((_DWORD *)a2 + 14) &= 0xFFFFFF40;
        if ( !v42 )
          goto LABEL_53;
        v43 = (__int64 *)(v8 + 352);
        v44 = (__int64 *)*v43;
        if ( !*v43 )
          goto LABEL_53;
        if ( (__int64 *)v44[1] == v43 )
        {
          v45 = (__int64 **)v43[1];
          if ( *v45 == v43 )
          {
            *v45 = v44;
            v44[1] = (__int64)v45;
            *v43 = 0LL;
            v43[1] = 0LL;
LABEL_53:
            _InterlockedOr(v46, 0);
            ++*(_QWORD *)(v6 + 48);
            goto LABEL_21;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_21:
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v51);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v49);
}
