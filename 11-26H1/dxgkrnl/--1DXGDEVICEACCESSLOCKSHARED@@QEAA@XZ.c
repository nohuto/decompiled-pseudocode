/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1401BB9F0 (DxgkQueryAllocationResidency.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401C5C30 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1401F1E10 (DxgkGetOverlayState.c)
 *     DxgkCreateProtectedSession @ 0x1401FA080 (DxgkCreateProtectedSession.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x14020BF20 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x14020C200 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x14034D2A0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkQueryResourceInfo @ 0x1403536E0 (DxgkQueryResourceInfo.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x140373CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1403967E0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkGetAllocationPriority @ 0x140407D90 (DxgkGetAllocationPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1404098F0 (DxgkGetContextSchedulingPriority.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 136));
      KeLeaveCriticalRegion();
    }
  }
}
