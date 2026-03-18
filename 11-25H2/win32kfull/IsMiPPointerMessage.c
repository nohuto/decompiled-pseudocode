/*
 * XREFs of IsMiPPointerMessage @ 0x140138FC0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x140138F20 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 */

_BOOL8 __fastcall IsMiPPointerMessage(__int64 a1, unsigned __int64 a2)
{
  int v2; // ecx

  if ( (unsigned int)(a1 - 577) > 3 && !(unsigned int)IsPointerInputClientMessage(a1) )
  {
    if ( v2 != 528 || (_WORD)a2 != 582 )
      return 0LL;
    a2 >>= 16;
  }
  return (_WORD)a2 == 1;
}
