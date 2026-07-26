/*
 * XREFs of NdisClGetProtocolVcContextFromTapiCallId @ 0x1400D5840
 * Callers:
 *     <none>
 * Callees:
 *     ndisUnicodeStringToPointer @ 0x1400D5748 (ndisUnicodeStringToPointer.c)
 */

NDIS_STATUS __stdcall NdisClGetProtocolVcContextFromTapiCallId(
        UNICODE_STRING *TapiCallId,
        PNDIS_HANDLE ProtocolVcContext)
{
  return ((int)ndisUnicodeStringToPointer(&TapiCallId->Length, (__int64 *)ProtocolVcContext) >> 31) & 0xC0000001;
}
