/*
 * XREFs of StorIsMFNDSupported @ 0x14005CB18
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     RaidAdapterMFNDChildPFControl @ 0x140062DF0 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14006324C (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x14006367C (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x140063AF0 (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterReconfigureMFND @ 0x140065184 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaProcessMFNDChildControllerEvent @ 0x140092038 (RaProcessMFNDChildControllerEvent.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B84B8 (StorpLogPerAdapterStatistics.c)
 *     StorGetLogForMFNDChildControllerAsyncEvent @ 0x1400CA714 (StorGetLogForMFNDChildControllerAsyncEvent.c)
 *     StorMFNDChildPFControl @ 0x140192010 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14019214C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDCapability @ 0x1401925B8 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x140192814 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x140192A90 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x140192C54 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0 (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x1401935F4 (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140193BD4 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140193EE4 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1401944CC (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x140194654 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x14019473C (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x140194E40 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x140195058 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140195D18 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsMFNDSupported(__int64 a1)
{
  return MFNDEnabled && (*(_BYTE *)(a1 + 111) & 1) != 0 && *(_QWORD *)(a1 + 6224) != 0LL;
}
