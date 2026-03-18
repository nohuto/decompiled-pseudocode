/*
 * XREFs of MapInVideoMemory @ 0x140102EA8
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x140102E90 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     MapInCpuVisibleSegment @ 0x140103038 (MapInCpuVisibleSegment.c)
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 */

__int64 __fastcall MapInVideoMemory(__int64 a1, __int64 ***a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // r10
  char v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax

  v5 = *(_QWORD *)(a1 + 56);
  v7 = a3;
  v8 = a1;
  v9 = -1073741823;
  v10 = **a2;
  v11 = *(_QWORD *)(*v10 + 64);
  if ( (*(_DWORD *)(v5 + 6984) & 0x20) != 0
    || (*((_DWORD *)v10 + 7) & 0x80u) != 0
    || (a1 = *(unsigned int *)v10[46], (a1 & 4) != 0) && !*(_BYTE *)(v11 + 482)
    || (v12 = *(_DWORD *)(v11 + 64), (v12 & 0x2004) == 0) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 4407;
    }
  }
  else
  {
    if ( (v12 & 4) != 0 )
    {
      v13 = MapInCpuVisibleSegment(v5, a2);
LABEL_9:
      v9 = v13;
      if ( v13 >= 0 )
        return v9;
      goto LABEL_13;
    }
    if ( (v12 & 0x2000) != 0 )
    {
      v13 = MapInCpuHostAperture(v5, v11, a2);
      goto LABEL_9;
    }
  }
LABEL_13:
  if ( v7 )
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventPerformanceWarning, a3, 22);
    v10[39] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 38, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_DWORD *)a2 + 7) & 3) == 2 )
    {
      *a4 = 1;
      VidMmSuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(v8 + 56), (struct VIDMM_GLOBAL_ALLOC *)v10);
    }
    VIDMM_GLOBAL::EvictOneAllocation(*(VIDMM_GLOBAL **)(v8 + 56), a2, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 38, 0LL);
    v10[39] = (__int64)KeGetCurrentThread();
    return 0;
  }
  return v9;
}
