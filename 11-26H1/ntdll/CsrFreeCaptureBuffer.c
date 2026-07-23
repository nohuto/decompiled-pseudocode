/*
 * XREFs of CsrFreeCaptureBuffer @ 0x1800C8230
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800C7E2C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap_0(CsrPortHeap, 0, BaseAddress);
  return result;
}
