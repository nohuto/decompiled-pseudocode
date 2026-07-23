/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x180026BA4
 * Callers:
 *     TppCallbackPerformDeferredWork @ 0x180026C20 (TppCallbackPerformDeferredWork.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E6BB0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18015FFF0 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned __int32 v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(HANDLE *)(a1 + 216),
         *(_DWORD *)(a1 + 224),
         *(PPORT_MESSAGE *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 208));
  return v2;
}
