/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x140136F28 (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxSendPointerMessage @ 0x14013745C (xxxSendPointerMessage.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x14013863C (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     xxxPromotePointerToMouse @ 0x140138C44 (xxxPromotePointerToMouse.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140138D58 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x140138F20 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 *     EditionFindThreadPointerData @ 0x140139010 (EditionFindThreadPointerData.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1401393DC (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x140266CA0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14027C45C (Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 */

struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  struct _LIST_ENTRY *result; // rax
  __int64 UserSessionState; // rax

  if ( (unsigned int)Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(0LL, v4);
    return (struct _LIST_ENTRY *)CTouchProcessor::FindThreadPointerData(
                                   *(CTouchProcessor **)(UserSessionState + 3256),
                                   a1,
                                   a2);
  }
  else
  {
    result = a1->Flink;
    if ( a1->Flink == a1 )
    {
      return 0LL;
    }
    else
    {
      while ( LOWORD(result[1].Flink) != a2 )
      {
        result = result->Flink;
        if ( result == a1 )
          return 0LL;
      }
    }
  }
  return result;
}
