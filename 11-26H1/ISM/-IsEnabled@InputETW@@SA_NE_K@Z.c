/*
 * XREFs of ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x18000A9A4 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180022320 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180064C54 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x18006BE38 (-FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18006BF98 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1800965D0 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180097C40 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180099008 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F28A0 (-ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F32E0 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F3338 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F3390 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x180144D5C (-AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z.c)
 *     ?CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18014504C (-CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801466AC (-StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801469BC (-StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1801498F8 (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180149A3C (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014E138 (-DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Win.c)
 *     ?DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014E27C (-DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows.c)
 *     ?DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014E3C0 (-DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18014E504 (-DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windo.c)
 *     ?DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@_K2@Z @ 0x18014E680 (-DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x18014E7D4 (-FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014EB0C (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014ED30 (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014F080 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014F958 (-ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@Syst.c)
 *     ?ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18014FA9C (-ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x180150E88 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180153F5C (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801546B8 (-ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801547B0 (-ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180154EC0 (-ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x180154FB0 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x18015507C (-ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180155148 (-ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x180155508 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180156ED4 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180157008 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x18015713C (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180157290 (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x1801573D4 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x18015744C (-FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x180157B5C (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z @ 0x180158DEC (-StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18015F6EC (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x1801793F4 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180179744 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18017978C (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x180179A94 (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x180179B28 (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18017A0A4 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801B7030 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801B7850 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180011FE0 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

char __fastcall InputETW::IsEnabled()
{
  _DWORD *v0; // rcx
  char v1; // r8

  v0 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( !v0 || *v0 <= 1u || !(unsigned __int8)tlgKeywordOn(v0, 0LL, 1LL) )
    return 0;
  return v1;
}
