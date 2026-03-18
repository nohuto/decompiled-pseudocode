/*
 * XREFs of VidSchMarkDeviceAsError @ 0x140007450
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchInvalidateHwContext @ 0x140057AA0 (VidSchInvalidateHwContext.c)
 *     VidSchiMarkDevicesInError @ 0x14009A454 (VidSchiMarkDevicesInError.c)
 *     VidMmValidateHistoryBuffers @ 0x1400A3D50 (VidMmValidateHistoryBuffers.c)
 *     ?MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z @ 0x1400A9314 (-MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z.c)
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7280 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1400C45C0 (VidSchiMarkTdrFaultingDevice.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ValidateAllocationReferences @ 0x1400E5810 (ValidateAllocationReferences.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall VidSchMarkDeviceAsError(__int64 a1, int a2)
{
  char v2; // si
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-48h] BYREF
  char v7; // [rsp+38h] [rbp-38h]
  int v8; // [rsp+3Ch] [rbp-34h]
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v10; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 208) && (a2 == 14 || a2 < 0) )
  {
    v2 = 1;
    VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1);
  }
  v4 = *(_QWORD *)(a1 + 40) + 2016LL;
  v10 = 0;
  v9[0] = v4;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
  v5 = *(_QWORD *)(a1 + 40);
  v7 = 0;
  v6[1] = v6;
  v8 = 2;
  v6[0] = v6;
  VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v5);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v5);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
  if ( v2 )
    VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1);
}
