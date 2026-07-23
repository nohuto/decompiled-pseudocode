/*
 * XREFs of PopUmpoQuerySmartSuspendPrediction @ 0x1407DF544
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PopUmpoQuerySmartSuspendPrediction()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 18;
  Src[2] = 1;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
}
