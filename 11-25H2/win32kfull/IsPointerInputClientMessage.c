/*
 * XREFs of IsPointerInputClientMessage @ 0x140143F90
 * Callers:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x140067230 (IsPointerInputMessage.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140068030 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsMiPPointerMessage @ 0x140138FC0 (IsMiPPointerMessage.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 *     IsPointerInputHookCall @ 0x140143E80 (IsPointerInputHookCall.c)
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140169658 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     UnlinkSendListSms @ 0x14016F354 (UnlinkSendListSms.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14016F640 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x140175320 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x14027CBFC (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputClientMessage(unsigned int a1)
{
  return a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
