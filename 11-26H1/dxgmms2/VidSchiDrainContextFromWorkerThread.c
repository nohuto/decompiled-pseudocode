/*
 * XREFs of VidSchiDrainContextFromWorkerThread @ 0x140054C70
 * Callers:
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400C458C (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiReadCommandFromContextQueue @ 0x140024CE0 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140030C50 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 */

void __fastcall VidSchiDrainContextFromWorkerThread(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct _VIDSCH_QUEUE_PACKET *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  v2 = a1;
  v5 = 0;
  v3 = *(_QWORD *)(v1 + 24);
  while ( 1 )
  {
    v4 = (struct _VIDSCH_QUEUE_PACKET *)VidSchiReadCommandFromContextQueue(a1, 0, &v5);
    if ( !v4 )
      break;
    VidSchiSubmitQueueCommand(v4);
    VidSchiProcessPrimariesTerminationList(v3);
    a1 = v2;
  }
  VidSchiSetTransferContextRunningTime(v2, 0LL, 0);
}
