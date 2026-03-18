/*
 * XREFs of Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140276FA8
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x140238340 (EditionChangeForegroundQueueForMouseInput.c)
 * Callees:
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x140276FE0 (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_57240160__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_57240160__private_featureState & 1;
  else
    return Feature_Bugfix_57240160__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_57240160__private_featureState,
             3LL);
}
