/*
 * XREFs of VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400EBAC0 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 */

void __fastcall VidSchiSendToExecutionQueueWithWait(__int64 a1, char a2)
{
  struct _KEVENT *v4; // rcx

  v4 = *(struct _KEVENT **)(*(_QWORD *)(a1 + 48) + 96LL);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 8;
  v4[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeResetEvent(v4 + 10);
  VidSchiSendToExecutionQueue(a1, a2);
}
