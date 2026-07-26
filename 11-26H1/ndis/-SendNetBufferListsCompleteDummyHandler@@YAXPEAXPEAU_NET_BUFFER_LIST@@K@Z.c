/*
 * XREFs of ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400A5470
 * Callers:
 *     <none>
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SendNetBufferListsCompleteDummyHandler(
        _QWORD *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  if ( *(_BYTE *)NdisFilterHandle != 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ++NdisFilterHandle[117];
  NdisFSendNetBufferListsComplete(NdisFilterHandle, NetBufferList, SendCompleteFlags);
}
