/*
 * XREFs of PageInAllocation_0 @ 0x1400D2924
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400D3840 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMEN.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004E2F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004E570 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     TrimMarkedForEvictionAllocations @ 0x14009B0D4 (TrimMarkedForEvictionAllocations.c)
 *     CheckForLargePageUpgrade @ 0x1400B1318 (CheckForLargePageUpgrade.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     AcquireGpuResources @ 0x1400D2F84 (AcquireGpuResources.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400D351C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ReferenceAllocationForPreparation @ 0x1400D3624 (ReferenceAllocationForPreparation.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     CancelAllReclaimedAllocationsInList @ 0x1400F8C34 (CancelAllReclaimedAllocationsInList.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x140116E50 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall PageInAllocation_0(
        _QWORD *a1,
        __int64 *a2,
        int a3,
        char a4,
        bool *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v9; // ebp
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdi
  VIDMM_SEGMENT **v14; // rdi
  VIDMM_SEGMENT **v15; // r12
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int16 *v21; // rbp
  _QWORD *v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int16 v32; // di
  __int64 v33; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v34; // rdx
  _QWORD *v35; // rbx
  _QWORD *v36; // rdx
  int v37; // eax
  __int64 v38; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+90h] [rbp+18h]

  v39 = a3;
  v9 = a3;
  *(_QWORD *)a6 = 0LL;
  v11 = *a2;
  v12 = a1[7];
  LODWORD(v13) = ReferenceAllocationForPreparation((VIDMM_GLOBAL *)v12);
  if ( (int)v13 >= 0 )
    goto LABEL_16;
  v14 = (VIDMM_SEGMENT **)(a2 + 16);
  v15 = (VIDMM_SEGMENT **)(a2 + 16);
  v16 = v11 + 304;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(0LL);
      WdLogGlobalForLineNumber = 2930;
      v15 = v14;
    }
    LOBYTE(v17) = v9 == 0;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 208LL))(a1, v17, 0LL);
    if ( *(_QWORD *)a6 )
    {
      LOBYTE(v18) = v9 == 0;
      v30 = *(_QWORD *)(*(_QWORD *)(v12 + 40320) + 8LL * ((*(_DWORD *)(****(_QWORD ****)a6 + 52LL) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v30 + 208LL))(v30, v18, 0LL);
      v15 = (VIDMM_SEGMENT **)(a2 + 16);
    }
    LOBYTE(v19) = a4;
    LODWORD(v13) = AcquireGpuResources((_DWORD)a1, (_DWORD)a2, v9, v19, a7, a8);
    if ( (int)v13 >= 0 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      WdLogGlobalForLineNumber = 3056;
    }
LABEL_19:
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
      WdLogGlobalForLineNumber = 3073;
    }
    if ( *v15 )
    {
      v34 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2[18];
      if ( v34 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)*v15 + 64), v34);
        a2[18] = 0LL;
      }
      (*(void (__fastcall **)(VIDMM_SEGMENT *, __int64 *, __int64, __int64, _QWORD))(*(_QWORD *)*v15 + 24LL))(
        *v15,
        a2,
        a2[14],
        a2[2],
        **(_QWORD **)(v11 + 328));
      *v15 = 0LL;
      a2[14] = 0LL;
    }
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    CancelAllReclaimedAllocationsInList(v28, a1 + 222);
    CancelAllReclaimedAllocationsInList(v29, a1 + 220);
    WdLogSingleEntry2(3LL, v11, v9);
    WdLogGlobalForLineNumber = 3111;
    if ( v9 )
      goto LABEL_13;
    v24 = 1LL;
    if ( (*(_DWORD *)(v11 + 24) & 1) == 0 || a4 )
      goto LABEL_13;
    v9 = 2;
    v39 = 2;
    TrimMarkedForEvictionAllocations((__int64)a1, a2[2] + ((unsigned __int64)a2[2] >> 2));
    v14 = (VIDMM_SEGMENT **)(a2 + 16);
  }
  v21 = (unsigned __int16 *)*v15;
  VIDMM_SEGMENT::TrimResidentBytes(*v15, *(const struct VIDMM_PARTITION_ADAPTER_INFO **)(v11 + 328));
  v22 = *(_QWORD **)(v11 + 328);
  if ( *(_QWORD *)(*v22 + 64LL) > v22[2] )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v31 = WdLogNewEntry5_WdTrace(0LL);
      *(_QWORD *)(v31 + 24) = v22[2];
      *(_QWORD *)(v31 + 32) = *(_QWORD *)(*v22 + 64LL);
      WdLogGlobalForLineNumber = 26808;
    }
    v32 = 0;
    if ( *(_DWORD *)(v12 + 6952) )
    {
      do
      {
        v33 = *(_QWORD *)(*(_QWORD *)(v12 + 40320) + 8LL * v32);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 88LL))(v33, *(_QWORD *)(v11 + 328));
        ++v32;
      }
      while ( (unsigned int)v32 < *(_DWORD *)(v12 + 6952) );
      v16 = v11 + 304;
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  if ( (*(_DWORD *)(352LL * v21[34] + *(_QWORD *)(*(_QWORD *)(v12 + 24) + 3032LL) + 16) & 4) != 0 )
    VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v21);
  v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 224LL))(a1, a2);
  v13 = v23;
  if ( v23 < 0 )
  {
    v38 = (unsigned int)Feature_CommitPagetableInstrumentation__private_featureState;
    if ( (Feature_CommitPagetableInstrumentation__private_featureState & 0x10) == 0 )
    {
      LODWORD(v38) = Feature_CommitPagetableInstrumentation__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor,
        v38,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v38,
        3,
        (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor);
    }
    WdLogSingleEntry2(3LL, v11, v13);
    WdLogGlobalForLineNumber = 3028;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      WdLogGlobalForLineNumber = 3051;
    }
    v9 = v39;
    goto LABEL_19;
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v12, (*((_DWORD *)a2 + 13) >> 2) & 0x3F, 0, 0LL, 0LL, 0, 0);
  *(_QWORD *)(v11 + 312) = 0LL;
  LODWORD(v13) = 0;
  ExReleasePushLockExclusiveEx(v16, 0LL);
  KeLeaveCriticalRegion();
  v24 = *(_QWORD *)v12;
  *(_QWORD *)(*(_QWORD *)v12 + 280LL) += a2[2];
LABEL_13:
  if ( (*(_DWORD *)(v11 + 24) & 0x10000) != 0 )
  {
    *a5 = 0;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = v11;
      WdLogGlobalForLineNumber = 3139;
    }
    return 3223191830LL;
  }
  else if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v12) )
  {
    *a5 = 0;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v11;
      WdLogGlobalForLineNumber = 3146;
    }
    return 3221226166LL;
  }
  else
  {
    if ( g_Feature_Largify64KBPrototype && (int)v13 >= 0 )
    {
      *(_DWORD *)(v11 + 24) &= ~0x40000000u;
      LOBYTE(a6) = 0;
      if ( CheckForLargePageUpgrade((struct VIDMM_PHYSICAL_ALLOC *)a2, &a6, v26) )
      {
        v35 = (_QWORD *)(v11 + 352);
        v36 = *(_QWORD **)(v12 + 44688);
        if ( *v36 != v12 + 44680 )
          __fastfail(3u);
        *v35 = v12 + 44680;
        v35[1] = v36;
        *v36 = v35;
        *(_QWORD *)(v12 + 44688) = v35;
      }
      else
      {
        v37 = *(_DWORD *)(v11 + 24);
        if ( (v37 & 0x20000000) != 0 )
        {
          if ( !(_BYTE)a6 )
            v37 |= 0x40000000u;
          *(_DWORD *)(v11 + 24) = v37 | 0x10000000;
        }
      }
    }
LABEL_16:
    *a5 = (int)v13 < 0;
    return (unsigned int)v13;
  }
}
