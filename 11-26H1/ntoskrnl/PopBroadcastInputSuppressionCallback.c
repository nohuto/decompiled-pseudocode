/*
 * XREFs of PopBroadcastInputSuppressionCallback @ 0x140B76320
 * Callers:
 *     PopBroadcastInputSuppressionCallback2 @ 0x1407DA370 (PopBroadcastInputSuppressionCallback2.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060EE68 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEvaluateInputSuppressionAction @ 0x140B763E0 (PopEvaluateInputSuppressionAction.c)
 */

__int64 __fastcall PopBroadcastInputSuppressionCallback(_QWORD *a1)
{
  __int64 v2; // rax

  if ( !SSHSupportIsPlatformAoAc() )
    return 0LL;
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == a1[1]
      || *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == a1[1] )
    {
      goto LABEL_16;
    }
    if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == *a1 )
    {
      v2 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == a1[1] )
      goto LABEL_16;
    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    {
      v2 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4;
LABEL_13:
      if ( v2 == a1[1] )
      {
LABEL_16:
        PopEvaluateInputSuppressionAction();
        return 0LL;
      }
    }
  }
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 && *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 == a1[1] )
    goto LABEL_16;
  return 0LL;
}
