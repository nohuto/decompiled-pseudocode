/*
 * XREFs of RtlReadULong64FromUser @ 0x140196750
 * Callers:
 *     RtlReadULong64FromUser$thunk$2147908448085668007 @ 0x1400A7030 (RtlReadULong64FromUser$thunk$2147908448085668007.c)
 *     DxgkNetDispGetNextChunkInfo @ 0x1401B7180 (DxgkNetDispGetNextChunkInfo.c)
 *     DxgkCheckSharedResourceAccess @ 0x1401BB270 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401C5C30 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkAcquireKeyedMutex @ 0x1401FE890 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1401FEBB0 (DxgkAcquireKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1401FF7A0 (DxgkOpenKeyedMutex.c)
 *     DxgkCheckMonitorPowerState @ 0x1402C42E0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckOcclusion @ 0x140320AC0 (DxgkCheckOcclusion.c)
 *     DxgkMarkDeviceAsError @ 0x1403A3140 (DxgkMarkDeviceAsError.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403F7020 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1403F8A00 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkSetContextSchedulingPriority @ 0x140401A40 (DxgkSetContextSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1404098F0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkSetVidPnSourceOwner @ 0x140435750 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ProbeForRead_0 @ 0x14006E455 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadULong64FromUser(volatile void *a1)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  return *(_QWORD *)a1;
}
