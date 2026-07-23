/*
 * XREFs of RtlQueryFeatureConfigurationChangeStamp @ 0x1404F27D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_FEATURE_CHANGE_STAMP RtlQueryFeatureConfigurationChangeStamp(void)
{
  return *(_QWORD *)&CmpFreezeListLock.Timer.Processor;
}
