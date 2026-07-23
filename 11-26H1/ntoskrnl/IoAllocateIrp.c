/*
 * XREFs of IoAllocateIrp @ 0x14026BA40
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     CcSetValidData @ 0x140489944 (CcSetValidData.c)
 *     IopEjectDevice @ 0x1407B5808 (IopEjectDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B5B94 (PpIrpAllocateDeviceUsageNotification.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CD7E4 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CE800 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     PnpAsynchronousCall @ 0x140AE1C5C (PnpAsynchronousCall.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0D1A8 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140B4BA8C (WmipSetTraceNotify.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, (unsigned __int8)StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
