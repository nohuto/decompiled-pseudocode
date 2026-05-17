/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x18003C6B0
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C634 (TppCallbackSendAndDestroyAlpcMessage.c)
 */

__int64 __fastcall TppCallbackPerformDeferredWork(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  return RtlClearThreadWorkOnBehalfTicket();
}
