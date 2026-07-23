/*
 * XREFs of HalpMcUpdateLock @ 0x1404E6330
 * Callers:
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     MmLockPreChargedPagedPool @ 0x140B635B0 (MmLockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateLock()
{
  if ( HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread && McMicrocodePatchRecordCharged )
    MmLockPreChargedPagedPool(
      HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread,
      *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16]);
  return 0LL;
}
