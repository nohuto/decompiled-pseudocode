/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x1408059A0
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140B1B7B4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2);
}
