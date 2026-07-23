/*
 * XREFs of KiIsTsaMitigationDesired @ 0x1405F4D60
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405F9AC0 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
