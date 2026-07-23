/*
 * XREFs of PopBroadcastInputSuppressionCallback2 @ 0x1407DA370
 * Callers:
 *     <none>
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060EE68 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B76320 (PopBroadcastInputSuppressionCallback.c)
 */

__int64 __fastcall PopBroadcastInputSuppressionCallback2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
    return PopBroadcastInputSuppressionCallback(a1, a2, a3, a4);
  else
    return 0LL;
}
