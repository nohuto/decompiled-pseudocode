/*
 * XREFs of Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline @ 0x140230678
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback @ 0x140532E34 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback.c)
 */

__int64 Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_CrossProcessorClassThreadStealing__private_featureState & 2) != 0 )
    return Feature_CrossProcessorClassThreadStealing__private_featureState & 1;
  else
    return Feature_CrossProcessorClassThreadStealing__private_IsEnabledFallback(
             (unsigned int)Feature_CrossProcessorClassThreadStealing__private_featureState,
             0LL);
}
