/*
 * XREFs of RtlQueryFeatureConfigurationChangeStamp @ 0x1404F91C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlQueryFeatureConfigurationChangeStamp()
{
  return CmpFreezeListLock.WaitBlock[3].Thread;
}
