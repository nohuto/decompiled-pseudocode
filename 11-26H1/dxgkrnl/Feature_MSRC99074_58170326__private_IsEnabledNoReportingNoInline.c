/*
 * XREFs of Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline @ 0x140080C64
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401FC7C0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x140212610 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     Feature_MSRC99074_58170326__private_IsEnabledFallback @ 0x140080C48 (Feature_MSRC99074_58170326__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99074_58170326__private_featureState & 2) != 0 )
    return Feature_MSRC99074_58170326__private_featureState & 1;
  else
    return Feature_MSRC99074_58170326__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99074_58170326__private_featureState,
             0);
}
