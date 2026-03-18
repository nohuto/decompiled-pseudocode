/*
 * XREFs of Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DF8
 * Callers:
 *     xxxDwmControl @ 0x14017E230 (xxxDwmControl.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback @ 0x1401B0E30 (Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback.c)
 */

__int64 Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RestartDWMViaSingleDWMControl__private_featureState & 0x10) != 0 )
    return Feature_RestartDWMViaSingleDWMControl__private_featureState & 1;
  else
    return Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback(
             (unsigned int)Feature_RestartDWMViaSingleDWMControl__private_featureState,
             3LL);
}
