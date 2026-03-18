/*
 * XREFs of PopUmpoSendUserPresencePredictionAction @ 0x140B3AC78
 * Callers:
 *     PopEvaluateGlobalUserStatus @ 0x140A3ECC8 (PopEvaluateGlobalUserStatus.c)
 *     PopUserPresencePredictionModeCallback @ 0x140B3F230 (PopUserPresencePredictionModeCallback.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendUserPresencePredictionAction(int a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 12;
  Src[2] = a1;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0, 0LL);
}
