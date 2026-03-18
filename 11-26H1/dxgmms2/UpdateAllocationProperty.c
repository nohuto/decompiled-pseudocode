/*
 * XREFs of UpdateAllocationProperty @ 0x1400B2A2C
 * Callers:
 *     ?UpdateAllocationProperty@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_ALLOC@@U_VIDMM_VERIFY_BUDGET_GROUPS@@_N2PEAUVIDMM_UPDATEALLOCPROPERTY@@@Z @ 0x1400B3170 (-UpdateAllocationProperty@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_ALLOC@@U_VIDMM_VERIFY_BU.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z @ 0x1400385A8 (-DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ReleaseAllResidencyLocksForAllocation @ 0x1400B26E8 (ReleaseAllResidencyLocksForAllocation.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E5664 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E573C (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x140111AB8 (-VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VE.c)
 *     ?VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140115E78 (-VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 *     ?VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x14011681C (-VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SE.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall UpdateAllocationProperty(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        __int64 a2,
        __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int *a6)
{
  __int64 v6; // r13
  _DWORD **v8; // rax
  struct VIDMM_PHYSICAL_ADAPTER *v9; // r12
  int v10; // ebx
  unsigned int *v11; // r9
  __int64 v12; // r10
  _DWORD *v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // rbp
  int v16; // r8d
  __int64 v17; // rdx
  struct _D3DDDI_SEGMENTPREFERENCE v18; // edi
  __int64 v19; // rcx
  unsigned int v20; // r15d
  _DWORD **v21; // rbx
  int v22; // r8d
  int v23; // r15d
  __int64 v24; // rbx
  __int64 v25; // r11
  struct VIDMM_SEGMENT_BASE *MostPreferredSegment; // rax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  char v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int8 v35; // cl
  _QWORD *i; // rbx
  unsigned int v37; // r15d
  char v38; // dl
  unsigned int v39; // ecx
  char v40; // r8
  unsigned int v41; // ebx
  unsigned int v42; // r11d
  __int64 v43; // rcx
  const struct VIDMM_SEGMENT_BASE *v44; // rsi
  unsigned int v45; // r11d
  __int64 v46; // rcx
  int v47; // r15d
  _QWORD *v48; // rdi
  _QWORD *v49; // r12
  void *v50; // rsi
  _QWORD *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned __int16 *v54; // rcx
  unsigned __int16 v55; // ax
  bool v56; // [rsp+50h] [rbp-58h] BYREF
  char v57; // [rsp+51h] [rbp-57h]
  int v58; // [rsp+54h] [rbp-54h]
  unsigned int v59; // [rsp+58h] [rbp-50h]
  int v60; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v61; // [rsp+60h] [rbp-48h] BYREF
  __int64 v62; // [rsp+68h] [rbp-40h]
  VIDMM_PROCESS_ADAPTER_INFO *v65; // [rsp+B8h] [rbp+10h]

  v6 = *((_QWORD *)a1 + 7);
  v8 = *(_DWORD ***)a2;
  v9 = a1;
  v10 = a4;
  v11 = a6;
  v12 = a2;
  v62 = v6;
  v13 = *v8;
  v57 = 0;
  v14 = a6[3] >> 1;
  v15 = *(_QWORD *)v13;
  LOBYTE(v14) = (a6[3] & 2) != 0;
  v16 = v13[6] >> 1;
  LODWORD(v8) = a6[3] >> 2;
  LOBYTE(v16) = (v13[6] & 2) != 0;
  v17 = *(_QWORD *)v13 + 64LL;
  v18.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(*(_QWORD *)v13 + 44LL);
  LOBYTE(v8) = (a6[3] & 4) != 0;
  v59 = *(_DWORD *)(*(_QWORD *)v13 + 40LL);
  v58 = v16;
  v61 = v14;
  v60 = (int)v8;
  if ( (_BYTE)v14 )
  {
    v19 = *(_QWORD *)v17;
    v20 = *a6;
    v59 = *a6;
    if ( v19 && v13[18] && (v20 & (1 << *(_BYTE *)(v19 + 70))) == 0 )
    {
      VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
      VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
      (*(void (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *))(*(_QWORD *)v9 + 200LL))(v9);
      v11 = a6;
      v17 = v15 + 64;
      v12 = a2;
    }
    LOBYTE(v19) = v10;
    v58 = v19;
    *(_DWORD *)(v15 + 40) = v20;
    v13[6] = (2 * v10) | a5 & 0xFD | v13[6] & 0xFFFFFFFC;
  }
  if ( (v11[3] & 1) != 0 )
  {
    v21 = (_DWORD **)(v12 + 96);
    v22 = **(_DWORD **)(v12 + 96);
    if ( (v22 & 0x8000) == 0 )
    {
      v23 = 1 << *((_BYTE *)v9 + 144);
      if ( (v11[2] & 1) != 0 )
      {
        if ( v13[18] )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v17 + 64LL) & 0x1000) != 0 )
          {
            VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
            VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
            (*(void (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *))(*(_QWORD *)v9 + 200LL))(v9);
            v11 = a6;
          }
          else if ( (v22 & 0x10000) != 0 )
          {
            v57 = 1;
            v21 = (_DWORD **)(v12 + 96);
          }
        }
        if ( (v13[6] & 1) != 0 )
          *(_DWORD *)(v15 + 40) &= ~v23;
        **v21 |= 0x8000u;
      }
    }
  }
  if ( (_BYTE)v60 )
  {
    v18.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v11[1];
    v24 = 0LL;
    v25 = 0LL;
    v56 = v58;
    if ( v18.0 )
    {
      MostPreferredSegment = VidMmGetMostPreferredSegment(v9, v18, &v56);
      if ( (*(_BYTE *)&v18.0 & 0x1F) != 0 )
      {
        v27 = (unsigned __int16)((*(_BYTE *)&v18.0 & 0x1F) - 1);
        v24 = (*(_QWORD *)(*((_QWORD *)v9 + 219) + 8 * v27) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*((_QWORD *)v9 + 219) + 8 * v27) >> 64);
        v28 = *((_DWORD *)v9 + 24);
        LOBYTE(v58) = _bittest(&v28, v27);
      }
      else
      {
        LOBYTE(MostPreferredSegment) = v56;
        v58 = (int)MostPreferredSegment;
      }
      v29 = (v18.Value >> 6) & 0x1F;
      if ( v29 )
      {
        v30 = *(_QWORD *)(*((_QWORD *)v9 + 219) + 8LL * (unsigned __int16)(v29 - 1));
        v25 = (v30 + 8) & -(__int64)(v30 != 0);
      }
    }
    v31 = 0;
    if ( v13[18] )
    {
      v32 = (*(_QWORD *)(v15 + 64) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v15 + 64) >> 64);
      if ( v24 == v32 || v25 == v32 )
      {
        if ( *(_DWORD *)(v15 + 44) != v18.0 )
        {
          v33 = *((_QWORD *)v13 + 6);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8);
            if ( v34 )
            {
              v31 = 1;
              VidMmRecordAlloc(v9, v15, v34, 1LL);
            }
          }
        }
      }
      else
      {
        VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
        VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)v6, (struct VIDMM_GLOBAL_ALLOC *)v13);
        (*(void (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *))(*(_QWORD *)v9 + 200LL))(v9);
      }
    }
    v35 = 16 * v58;
    *(struct _D3DDDI_SEGMENTPREFERENCE *)(v15 + 44) = v18;
    v13[6] ^= ((unsigned __int8)v13[6] ^ v35) & 0x10;
    if ( v31 )
      VidMmRecordAlloc(v9, v15, *(_QWORD *)(*((_QWORD *)v13 + 6) + 8LL), 0LL);
  }
  if ( (a6[3] & 8) != 0 )
    v13[7] ^= ((unsigned __int16)v13[7] ^ (unsigned __int16)((unsigned __int16)a6[2] << 10)) & 0x800;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 34));
  for ( i = (_QWORD *)*((_QWORD *)v13 + 14); i != (_QWORD *)(v13 + 28); i = (_QWORD *)*i )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 32LL)
                                                            + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 24) + 240LL))
                                                + 144LL));
  v37 = v13[6];
  v38 = v60;
  LOWORD(v39) = v37;
  v40 = v61;
  v41 = v37 >> 8;
  if ( (_BYTE)v60 && (_BYTE)v61 )
  {
    v39 = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)(a3 << 8)) & 0xF000 ^ ((unsigned __int16)(a3 << 8) ^ (unsigned __int16)(v37 ^ (v37 ^ (a3 << 8)) & 0xF000)) & 0xF00;
    v13[6] = v39;
  }
  if ( v38 != v40 )
  {
    if ( !VidMmVerifyPreferredSegmentIsSubset(*(struct _D3DDDI_SEGMENTPREFERENCE *)(v15 + 44), v59) )
    {
      WdLogSingleEntry2(1LL, *(unsigned int *)(v15 + 44), v42);
      WdLogGlobalForLineNumber = 5265;
      DxgkLogInternalTriageEvent(v43, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL), 21);
    }
    v61 = 0;
    v44 = VidMmGetMostPreferredSegment(v9, v18, &v56);
    if ( !VidMmVerifyBudgetGroups(v9, v45, v44, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v61) )
    {
      WdLogSingleEntry3(1LL, v9, v59, v44);
      WdLogGlobalForLineNumber = 5283;
      DxgkLogInternalTriageEvent(v46, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL), 21);
    }
    v39 = ((unsigned __int8)v61 << 8) | v13[6] & 0xFFFF00FF;
    v13[6] = v39;
  }
  v47 = (unsigned __int16)v37 >> 12;
  if ( v47 != (unsigned __int16)v39 >> 12 || (((unsigned __int8)v41 ^ BYTE1(v39)) & 0xF) != 0 )
  {
    v48 = (_QWORD *)*((_QWORD *)v13 + 14);
    if ( v48 != (_QWORD *)(v13 + 28) )
    {
      v49 = v13 + 28;
      do
      {
        v65 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(v48 - 5) + 32LL)
                                             + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 24) + 240LL));
        v50 = (void *)(304LL * ((*(_DWORD *)(v15 + 52) >> 2) & 0x3F) + 8 + *((_QWORD *)v65 + 1));
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v65);
        v51 = (_QWORD *)*(v48 - 2);
        if ( v51 != v48 - 2 )
        {
          do
          {
            if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)(v51 - 5)) )
            {
              if ( (((unsigned __int8)v41 ^ (unsigned __int8)BYTE1(v13[6])) & 0xF) != 0 )
              {
                DecrementBudgetCounter(v50, (unsigned __int64 *)v50 + (v41 & 0xF) + 17, *(_QWORD *)(v15 + 16));
                v52 = (v13[6] >> 8) & 0xF;
                *((_QWORD *)v50 + v52 + 17) += *(_QWORD *)(v15 + 16);
              }
              if ( v47 != (unsigned __int8)HIBYTE(*((_WORD *)v13 + 12)) >> 4 )
              {
                DecrementBudgetCounter(
                  v50,
                  (unsigned __int64 *)v50 + ((unsigned __int8)v41 >> 4) + 9,
                  *(_QWORD *)(v15 + 16));
                v53 = (unsigned __int8)HIBYTE(*((_WORD *)v13 + 12)) >> 4;
                *((_QWORD *)v50 + v53 + 9) += *(_QWORD *)(v15 + 16);
              }
            }
            v51 = (_QWORD *)*v51;
          }
          while ( v51 != v48 - 2 );
          v49 = v13 + 28;
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v65);
        v48 = (_QWORD *)*v48;
        v6 = v62;
      }
      while ( v48 != v49 );
      v9 = a1;
    }
  }
  ReleaseAllResidencyLocksForAllocation(v6, (__int64)v13);
  a6[3] &= 0xFFFFFFF0;
  if ( v57 && *(_QWORD *)(v15 + 64) )
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    v54 = *(unsigned __int16 **)(v15 + 64);
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 24) + 1776LL) )
    {
      VIDMM_GLOBAL::NotifyResidency2(
        (VIDMM_GLOBAL *)v6,
        v9,
        (void ***)v15,
        1u,
        1,
        0,
        (*(_QWORD *)(v15 + 16) >> 12) + ((*(_QWORD *)(v15 + 16) & 0xFFFLL) != 0),
        v54[35],
        (*(__int64 *)(v15 + 72) >> 12) + ((*(_QWORD *)(v15 + 72) & 0xFFFLL) != 0),
        0LL);
    }
    else
    {
      v55 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)v54);
      VIDMM_GLOBAL::NotifyResidency(
        (VIDMM_GLOBAL *)v6,
        (struct VIDMM_GLOBAL_ALLOC *)v13,
        1u,
        v55,
        *(_QWORD *)(v15 + 72));
    }
  }
}
