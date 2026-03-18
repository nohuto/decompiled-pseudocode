/*
 * XREFs of PopUmpoQuerySmartSuspendPrediction @ 0x1407DB538
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PopUmpoQuerySmartSuspendPrediction(__int64 a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 18;
  Src[2] = 1;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 1, a1);
}
