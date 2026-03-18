/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x140B1B790
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140B1B7B4 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2)
{
  return RtlpSystemBootStatusRequest(32LL, a1, a2);
}
