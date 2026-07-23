/*
 * XREFs of KdGetDebugDevice @ 0x1405E6140
 * Callers:
 *     HalpDbgInitSystem @ 0x140BF1610 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

_KTIMER *KdGetDebugDevice()
{
  return &HalpDeviceBlockUnblockPushLock.Timer;
}
