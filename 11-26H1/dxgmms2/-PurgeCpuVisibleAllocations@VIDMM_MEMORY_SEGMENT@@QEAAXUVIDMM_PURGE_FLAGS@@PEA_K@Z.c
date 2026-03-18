/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140
 * Callers:
 *     PurgeSegments @ 0x1400FEE38 (PurgeSegments.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF9E0 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rsi
  struct VIDMM_GLOBAL_ALLOC *v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  int v19; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 64) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
      WdLogGlobalForLineNumber = 3590;
    }
    v6 = *(_QWORD **)(a1 + 136);
    while ( v6 != (_QWORD *)(a1 + 136) )
    {
      v7 = (struct VIDMM_GLOBAL_ALLOC *)(v6 - 30);
      v6 = (_QWORD *)*v6;
      if ( (*((_BYTE *)v7 + 36) & 1) != 0 )
        VidMmSuspendAccessToAllocation(**(struct VIDMM_WORKER_THREAD ***)(a1 + 8), v7);
    }
    v8 = *(_QWORD **)(a1 + 264);
    while ( v8 != (_QWORD *)(a1 + 264) )
    {
      v9 = v8 - 30;
      v8 = (_QWORD *)*v8;
      v10 = v9 + 38;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9 + 38, 0LL);
      v9[39] = KeGetCurrentThread();
      if ( *((int *)v9 + 46) > 0 )
      {
        v9[39] = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 38, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v9;
          WdLogGlobalForLineNumber = 3639;
        }
        if ( (v9[3] & 4) != 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 213;
        }
        VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v9, a2, a3, v17, v18, v19);
      }
      else
      {
        if ( (*((_BYTE *)v9 + 36) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
            WdLogGlobalForLineNumber = 3650;
          }
          v13 = v9[6];
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v13 + 8) + 16LL), &ApcState);
          v19 = 1;
          v18 = 0LL;
          v17 = 0LL;
          v14 = VidMmRotateLegacyAllocation(*(_QWORD *)(a1 + 8), *v9, 3LL);
          if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741558 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v14, 0LL);
            WdLogGlobalForLineNumber = 213;
          }
          *((_BYTE *)v9 + 36) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          v15 = *v9;
          v16 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v15 + 144);
          if ( v16 )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(*(VIDMM_CPU_HOST_APERTURE **)(a1 + 512), v16);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 512),
              *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v15 + 144));
            *(_QWORD *)(v15 + 144) = 0LL;
          }
        }
        v10[1] = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
