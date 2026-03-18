/*
 * XREFs of ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140054244
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x14003CED0 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteAllWaitsPacket(struct HwQueueStagingList *this, struct _VIDSCH_QUEUE_PACKET *a2)
{
  int v4; // eax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v4 = *((_DWORD *)a2 + 70);
    if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(this, (__int64)a2, 0LL);
      VidSchiUnwaitWaitQueuePacket(this, (__int64)a2, 0LL, 0LL);
    }
  }
}
