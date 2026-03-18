/*
 * XREFs of RtlWriteULong64ToUser @ 0x140196810
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140059E20 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005E6F0 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x1400A7060 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 *     DxgkGetDWMVerticalBlankEvent @ 0x1401B5BF0 (DxgkGetDWMVerticalBlankEvent.c)
 *     NtDxgkDisplayMuxSwitchPrepare @ 0x1401B9940 (NtDxgkDisplayMuxSwitchPrepare.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401C5C30 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 *     NtDxgkDuplicateHandle @ 0x1401EC630 (NtDxgkDuplicateHandle.c)
 *     DxgkUpdateAllocationProperty @ 0x1401F28D0 (DxgkUpdateAllocationProperty.c)
 *     DxgkAcquireKeyedMutex @ 0x1401FE890 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1401FEBB0 (DxgkAcquireKeyedMutex2.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140211790 (NtDxgkVailPromoteCompositionSurface.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     DxgkLock @ 0x1402B9040 (DxgkLock.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402C3CA0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkReclaimAllocations2 @ 0x14038E1A0 (DxgkReclaimAllocations2.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x1403A0BD0 (DxgkOpenAdapterFromDeviceName.c)
 *     DxgkCreateContext @ 0x1403A3C90 (DxgkCreateContext.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     NtDxgkEnumProcesses @ 0x1403C1BB0 (NtDxgkEnumProcesses.c)
 *     DxgkDispMgrCreate @ 0x1403C5460 (DxgkDispMgrCreate.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetContextSchedulingPriority @ 0x1404098F0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkTrimProcessCommitment @ 0x14040B170 (DxgkTrimProcessCommitment.c)
 *     DxgkCreateBundleObjectInternal @ 0x14041DAC8 (DxgkCreateBundleObjectInternal.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ProbeForRead_0 @ 0x14006E455 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}
