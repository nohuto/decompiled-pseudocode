/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800012CC
 * Callers:
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180097584 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180099008 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z @ 0x1800AD4C8 (-SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D7F44 (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F28A0 (-ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800F321C (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F32E0 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F3338 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F3390 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x1801394C0 (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x18013950C (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180139558 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180153930 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x180155974 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x180185CD8 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x18019FBF4 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x18019FFBC (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801A0600 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801C0C14 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  v6[4] = a5;
  v6[5] = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 3, v6);
}
