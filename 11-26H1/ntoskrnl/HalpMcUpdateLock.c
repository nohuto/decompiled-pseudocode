/*
 * XREFs of HalpMcUpdateLock @ 0x1404ECD50
 * Callers:
 *     HalpPowerStateCallback @ 0x1404ECC90 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057C560 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     MmLockPreChargedPagedPool @ 0x140B60510 (MmLockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateLock()
{
  if ( HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink && McMicrocodePatchRecordCharged )
    MmLockPreChargedPagedPool(
      HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink,
      *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52]);
  return 0LL;
}
