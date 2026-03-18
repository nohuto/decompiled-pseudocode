/*
 * XREFs of xxxBroadcastMessage @ 0x1401293B0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 *     EditionxxxBroadcastSPIChange @ 0x1401289F0 (EditionxxxBroadcastSPIChange.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7)
{
  return xxxBroadcastMessageEx(0LL, a2, a3, a4, a5, a6, a7, 0);
}
