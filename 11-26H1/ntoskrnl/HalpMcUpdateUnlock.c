/*
 * XREFs of HalpMcUpdateUnlock @ 0x1404ECD1C
 * Callers:
 *     HalpPowerStateCallback @ 0x1404ECC90 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057C560 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     MmUnlockPreChargedPagedPool @ 0x140B1AE60 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  if ( HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink && McMicrocodePatchRecordCharged )
    MmUnlockPreChargedPagedPool(
      HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink,
      *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52]);
  return 0LL;
}
