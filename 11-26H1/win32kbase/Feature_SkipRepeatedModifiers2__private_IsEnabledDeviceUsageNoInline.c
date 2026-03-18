/*
 * XREFs of Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline @ 0x14021CAD4
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 * Callees:
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledFallback @ 0x14021CB10 (Feature_SkipRepeatedModifiers2__private_IsEnabledFallback.c)
 */

__int64 Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SkipRepeatedModifiers2__private_featureState & 0x10) != 0 )
    return Feature_SkipRepeatedModifiers2__private_featureState & 1;
  else
    return Feature_SkipRepeatedModifiers2__private_IsEnabledFallback(
             (unsigned int)Feature_SkipRepeatedModifiers2__private_featureState,
             3LL);
}
