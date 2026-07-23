/*
 * XREFs of Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405FDBFC
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback @ 0x1405352D4 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback.c)
 */

__int64 Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CrossProcessorClassThreadStealing__private_featureState & 0x10) != 0 )
    return Feature_CrossProcessorClassThreadStealing__private_featureState & 1;
  else
    return Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback(
             (unsigned int)Feature_CrossProcessorClassThreadStealing__private_featureState,
             3u);
}
