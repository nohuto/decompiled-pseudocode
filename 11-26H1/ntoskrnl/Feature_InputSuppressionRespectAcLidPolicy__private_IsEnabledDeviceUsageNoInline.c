/*
 * XREFs of Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060EE68
 * Callers:
 *     PopBroadcastInputSuppressionCallback2 @ 0x1407DA370 (PopBroadcastInputSuppressionCallback2.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B76320 (PopBroadcastInputSuppressionCallback.c)
 *     PopEvaluateInputSuppressionAction @ 0x140B763E0 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback @ 0x14060EEA4 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputSuppressionRespectAcLidPolicy__private_featureState & 0x10) != 0 )
    return Feature_InputSuppressionRespectAcLidPolicy__private_featureState & 1;
  else
    return Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_featureState,
             3LL);
}
