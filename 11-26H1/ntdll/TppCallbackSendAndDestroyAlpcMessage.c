/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x18003C634
 * Callers:
 *     TppCallbackPerformDeferredWork @ 0x18003C6B0 (TppCallbackPerformDeferredWork.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E8150 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801600F0 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(a1 + 208));
  return v2;
}
