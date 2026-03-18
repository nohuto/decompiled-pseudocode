/*
 * XREFs of KdGetDebugDevice @ 0x1405E37D0
 * Callers:
 *     HalpDbgInitSystem @ 0x140BEB610 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *KdGetDebugDevice()
{
  return &HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead;
}
