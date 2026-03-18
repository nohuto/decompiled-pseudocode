/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x140103BD0
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( *(_QWORD *)(a1 + 41200) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 41144, 0LL);
    *(_QWORD *)(a1 + 41152) = KeGetCurrentThread();
    v10 = *(unsigned int *)(a1 + 41208);
    v11 = *(_QWORD *)(a1 + 41200);
    if ( (_DWORD)v10 == dword_14008A4F4 )
    {
      *(_DWORD *)(a1 + 41208) = 0;
      v10 = 0LL;
    }
    v12 = 6 * v10;
    *(_QWORD *)(v11 + 8 * v12) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v11 + 8 * v12 + 32) = a5;
    *(_QWORD *)(v11 + 8 * v12 + 24) = a6;
    *(_DWORD *)(v11 + 8 * v12 + 36) = a2;
    *(_QWORD *)(v11 + 8 * v12 + 8) = a3;
    *(_QWORD *)(v11 + 8 * v12 + 16) = a4;
    *(_DWORD *)(v11 + 8 * v12 + 40) = *(_DWORD *)(a1 + 41180);
    ++*(_DWORD *)(a1 + 41208);
    *(_QWORD *)(a1 + 41152) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 41144, 0LL);
    KeLeaveCriticalRegion();
  }
}
