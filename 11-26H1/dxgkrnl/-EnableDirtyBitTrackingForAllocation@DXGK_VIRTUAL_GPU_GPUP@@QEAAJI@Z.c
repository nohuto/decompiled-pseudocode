/*
 * XREFs of ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E6B4
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x14021EBF0 (-LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z.c)
 * Callees:
 *     ?DdiStartDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401B2B10 (-DdiStartDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int started; // ebx

  v2 = *((_QWORD *)this + 23);
  v3 = 112LL * a2;
  started = ADAPTER_RENDER::DdiStartDirtyTracking(*((ADAPTER_RENDER **)this + 1), *(void *const *)(v3 + v2 + 96));
  if ( started >= 0 )
  {
    *(_DWORD *)(v3 + v2 + 88) = 1;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1133;
  }
  return (unsigned int)started;
}
