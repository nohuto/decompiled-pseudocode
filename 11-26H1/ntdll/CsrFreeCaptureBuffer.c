/*
 * XREFs of CsrFreeCaptureBuffer @ 0x1800CAAC0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800CA6BC (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 CsrFreeCaptureBuffer()
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap_0();
  return result;
}
