/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348
 * Callers:
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x14013590C (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     xxxPromotePointerToMouse @ 0x140135AFC (xxxPromotePointerToMouse.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x140135B9C (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140136048 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x140136220 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 *     EditionFindThreadPointerData @ 0x140136330 (EditionFindThreadPointerData.c)
 *     xxxSendPointerMessage @ 0x140136FB4 (xxxSendPointerMessage.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x140137EB0 (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x14028B868 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADPOINTERDATA *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 UserSessionState; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CTouchProcessor::FindThreadPointerData(*(CTouchProcessor **)(UserSessionState + 3256), a1, v2);
}
