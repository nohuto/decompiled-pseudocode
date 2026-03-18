/*
 * XREFs of Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x1401A8F5C
 * Callers:
 *     ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8E70 (-UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Feature_HEATInjectionUIAccess__private_IsEnabledFallback @ 0x1401A8F94 (Feature_HEATInjectionUIAccess__private_IsEnabledFallback.c)
 */

__int64 Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HEATInjectionUIAccess__private_featureState & 0x10) != 0 )
    return Feature_HEATInjectionUIAccess__private_featureState & 1;
  else
    return Feature_HEATInjectionUIAccess__private_IsEnabledFallback(
             (unsigned int)Feature_HEATInjectionUIAccess__private_featureState,
             3LL);
}
