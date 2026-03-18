/*
 * XREFs of IsPointerParentNotify @ 0x140137050
 * Callers:
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     NtUserfnPARENTNOTIFY @ 0x140136FC0 (NtUserfnPARENTNOTIFY.c)
 *     NtUserfnPOINTERINPUT @ 0x140137340 (NtUserfnPOINTERINPUT.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140142CF0 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     _QuerySendMessage @ 0x1402B31DC (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}
