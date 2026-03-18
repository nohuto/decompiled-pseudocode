/*
 * XREFs of Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060BD08
 * Callers:
 *     PopBroadcastInputSuppressionCallback2 @ 0x1407D7270 (PopBroadcastInputSuppressionCallback2.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B71AF0 (PopBroadcastInputSuppressionCallback.c)
 *     PopEvaluateInputSuppressionAction @ 0x140B71BB0 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback @ 0x14060BD44 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback.c)
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
