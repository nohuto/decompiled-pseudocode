/*
 * XREFs of PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x1407DF590
 * Callers:
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1407E4E04 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendPowerAdaptiveReserveConfigurationQuery(__int64 *a1)
{
  __int64 v2; // rax
  int Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+28h] [rbp-50h]

  memset_0(&Src, 0, 0x48uLL);
  v2 = *a1;
  Src = 20;
  v5 = v2;
  return PopUmpoSendPowerMessage(&Src, 0x48uLL, 0);
}
