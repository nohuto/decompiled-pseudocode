/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180064F5C
 * Callers:
 *     ?CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ @ 0x18000A7B8 (-CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ.c)
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180064C54 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x18006D4DC (-DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ @ 0x18007CC38 (-OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ @ 0x1800910E8 (-CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     ?Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ @ 0x180099424 (-Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ.c)
 *     ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x1800B6E84 (-MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ.c)
 *     ?Disconnected@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CBE04 (-Disconnected@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ?Start@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CC5B8 (-Start@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ?Stop@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CC5F8 (-Stop@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800D40E0 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D5E48 (-HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D7F04 (-SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800E65B8 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     _lambda_f708fe77e80299ddd28fceda5d023ce0_::operator() @ 0x1800E6828 (_lambda_f708fe77e80299ddd28fceda5d023ce0_--operator().c)
 *     ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x18014AAF0 (-CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180179744 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x18019363C (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x18019F230 (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x1801A03E4 (-StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x1801A04F8 (-StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     ?RecognizeTwoFingerPan@Magnifier@InputTraceLogging@@SAXXZ @ 0x1801B273C (-RecognizeTwoFingerPan@Magnifier@InputTraceLogging@@SAXXZ.c)
 *     ?RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ @ 0x1801B277C (-RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ.c)
 *     ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801D0BD0 (-OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4)
{
  int v4; // eax
  EVENT_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int8 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  *(_DWORD *)&v6.Id = *a2 << 24;
  *(_DWORD *)&v6.Level = *(unsigned __int16 *)(a2 + 1);
  v6.Keyword = *(_QWORD *)(a2 + 3);
  v7.Ptr = *(_QWORD *)(a1 + 8);
  v7.Size = *(unsigned __int16 *)v7.Ptr;
  v4 = *(unsigned __int16 *)(a2 + 11);
  v7.Reserved = 2;
  v8 = a2 + 11;
  v9 = v4;
  v10 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &v6, a3, a4, 2u, &v7);
}
