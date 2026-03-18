/*
 * XREFs of IsPointerInputMessageWithState @ 0x140144520
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x140144438 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1402B31DC (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 */

_BOOL8 __fastcall IsPointerInputMessageWithState(unsigned int a1)
{
  int v2; // ecx

  return a1 - 577 <= 3 || IsPointerInputClientMessage(a1) && v2 != 595;
}
