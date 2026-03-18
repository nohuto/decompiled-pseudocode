/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4
 * Callers:
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400B6F04 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     EtwTraceDisplayChange @ 0x1400B7070 (EtwTraceDisplayChange.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1400B7130 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1400B72F0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1400B75A4 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1400B76B4 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1400B78D4 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x140188C54 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1401A0000 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14022008C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x140221E88 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  char v3; // dl

  v2 = a2;
  v3 = 0;
  if ( v2 < dword_14029EE20
    && (!a1
     || (a1 & (unsigned __int64)qword_14029EE30) != 0 && (a1 & (unsigned __int64)qword_14029EE38) == qword_14029EE38) )
  {
    return 1;
  }
  return v3;
}
