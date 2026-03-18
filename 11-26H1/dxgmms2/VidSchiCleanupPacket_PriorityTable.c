/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1400C458C
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x140058ED0 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1400230C0 (VidSchiSelectContext.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140030C50 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x140054C70 (VidSchiDrainContextFromWorkerThread.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(__int64 a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList(a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
