/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x1407DF3EC
 * Callers:
 *     PopFanUpdateSpeed @ 0x1407DEFE0 (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_FAN_NOISE_CHANGE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
