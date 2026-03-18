/*
 * XREFs of ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkUnlock2 @ 0x14028E410 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A3E84 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADA.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1402A532C (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DdiCreateAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEALLOCATION@@@Z @ 0x1402A5CE4 (-DdiCreateAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEALLOCATION@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1402A6174 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     DxgkReleaseHandleDataCB @ 0x1402A65F0 (DxgkReleaseHandleDataCB.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402AF984 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402CB1B0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E7C4C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkQueryDisplayConfig @ 0x14031A260 (DxgkQueryDisplayConfig.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033B500 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B290 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x14034B9A4 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140361170 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x140361780 (DxgkAcquireHandleDataCB.c)
 *     DxgkGetPresentStats @ 0x140372490 (DxgkGetPresentStats.c)
 *     DxgkSubmitCommand @ 0x140373650 (DxgkSubmitCommand.c)
 *     DxgkOfferAllocations @ 0x140374E90 (DxgkOfferAllocations.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGGLOBAL::SearchDxgThreadList(KSPIN_LOCK *this, struct _ETHREAD *a2)
{
  __int64 *v4; // rdi
  __int64 ***v5; // rbx
  __int64 **i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(this + 221, &LockHandle);
  v5 = (__int64 ***)(this + 66);
  for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
    {
      v4 = i[3];
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct DXGPROCESS *)v4;
}
