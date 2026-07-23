/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x140AD322C
 * Callers:
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  int v2; // eax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  v2 = *(_DWORD *)(a1 + 36);
  Src[0] = 9;
  Src[2] = v2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
}
