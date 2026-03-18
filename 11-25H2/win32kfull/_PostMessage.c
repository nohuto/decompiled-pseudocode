/*
 * XREFs of _PostMessage @ 0x1400208B0
 * Callers:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x1400205D8 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400212A8 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x140021AE8 (xxxCancelMouseMoveTracking.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401117B8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PostPointerEventMessage @ 0x14011BED0 (PostPointerEventMessage.c)
 *     PostDeviceNotification @ 0x14011D5FC (PostDeviceNotification.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140168DC8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1401A1724 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1401A182C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     EditionPostInertiaMessage @ 0x1401AAC00 (EditionPostInertiaMessage.c)
 *     _SetMagnificationInputTransform @ 0x140203308 (_SetMagnificationInputTransform.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020F2CC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     NtUserEndMenu @ 0x140219020 (NtUserEndMenu.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14022C174 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     SetMouseTrails @ 0x140241038 (SetMouseTrails.c)
 *     xxxDDETrackSendHook @ 0x140256024 (xxxDDETrackSendHook.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x14028B784 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1402A6420 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AC860 (xxxCancelTrackingForThread.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1402B10FC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1402B6BC0 (PsW32ScreenSaver_Show.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C246C (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     _PostMessageExtended @ 0x1400208EC (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
