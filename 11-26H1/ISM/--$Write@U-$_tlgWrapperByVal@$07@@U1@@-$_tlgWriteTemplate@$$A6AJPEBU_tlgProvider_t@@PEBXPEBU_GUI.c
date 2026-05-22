/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000B8E4
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18000AE90 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18002A5BC (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18006D610 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18007F698 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180098C98 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180098D84 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?HandleActivationChange@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_LUID@@0@Z @ 0x1800AF434 (-HandleActivationChange@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_LUID@@0@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800F14DC (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800F3274 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x1800FB360 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x1801556AC (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x1801573D4 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[7] = 8LL;
  v7[5] = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
