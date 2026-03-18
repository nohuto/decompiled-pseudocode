/*
 * XREFs of Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline @ 0x1402118AC
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109EE0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x14018BE18 (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 * Callees:
 *     Feature_PTPMouseTiming__private_IsEnabledFallback @ 0x1402118E4 (Feature_PTPMouseTiming__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PTPMouseTiming__private_featureState & 0x10) != 0 )
    return Feature_PTPMouseTiming__private_featureState & 1;
  else
    return Feature_PTPMouseTiming__private_IsEnabledFallback(
             (unsigned int)Feature_PTPMouseTiming__private_featureState,
             3LL);
}
