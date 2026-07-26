/*
 * XREFs of GetMsgDpc @ 0x1400521D0
 * Callers:
 *     NdisMRegisterInterruptEx @ 0x14017DC00 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetMsgDpc(__int64 a1, int a2, int a3)
{
  return *(_QWORD *)(a1 + 224) + ((unsigned __int64)(a3 + a2 * (ndisMaxNumberOfProcessors + 1)) << 6);
}
