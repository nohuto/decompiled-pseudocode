/*
 * XREFs of HalpMcUpdateUnlock @ 0x1404E62FC
 * Callers:
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     MmUnlockPreChargedPagedPool @ 0x140B1D110 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  if ( HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread && McMicrocodePatchRecordCharged )
    MmUnlockPreChargedPagedPool(
      HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread,
      *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16]);
  return 0LL;
}
