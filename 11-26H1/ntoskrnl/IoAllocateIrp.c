/*
 * XREFs of IoAllocateIrp @ 0x14026C4D0
 * Callers:
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     CcSetValidData @ 0x14048FE94 (CcSetValidData.c)
 *     IopEjectDevice @ 0x1407B27A8 (IopEjectDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B2B34 (PpIrpAllocateDeviceUsageNotification.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CA744 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CB760 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     CmpGetVolumeClusterSize @ 0x1408B685C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     WmipSendWmiIrp @ 0x140A0E708 (WmipSendWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA5C88 (IopFilterResourceRequirementsCall.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     PnpAsynchronousCall @ 0x140AE4154 (PnpAsynchronousCall.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140B49CFC (WmipSetTraceNotify.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140C48150 (IovAllocateIrp.c)
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
