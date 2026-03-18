/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B69E0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140123E90 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SaveResourceCB(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        bool *a3,
        void *a4)
{
  __int64 v4; // rsi
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi

  v4 = *(_QWORD *)a2;
  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    WdLogSingleEntry1(4LL, v4);
    WdLogGlobalForLineNumber = 6303;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4 + 304, 0LL);
    *(_QWORD *)(v4 + 312) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 136));
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0x_EtwWriteTransfer((__int64)v7, &EventVidMmSaveResource, v8, v4);
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v7, (struct VIDMM_GLOBAL_ALLOC *)v4);
    v9 = *((_QWORD *)a2 + 8);
    v10 = *((_QWORD *)a2 + 9);
    VIDMM_MEMORY_SEGMENT::TransferToSystem(this, a2, 1, *(struct VIDMM_LOCAL_ALLOC **)(v4 + 48), 1);
    *((_QWORD *)a2 + 16) = v9;
    *((_QWORD *)a2 + 15) = v10;
  }
  return 0LL;
}
