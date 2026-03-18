/*
 * XREFs of ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004B794
 * Callers:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004B6CC (VidSchiRundownUnorderedWaiterDevice.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1400552AC (VidSchiRundownUnorderedWaiterContext.c)
 *     ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140056140 (-VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterPacket(
        struct HwQueueStagingList *this,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v3 = *((_DWORD *)a2 + 70);
    LOBYTE(a3) = 1;
    if ( (v3 & 1) == 0 )
    {
      if ( (v3 & 4) != 0 )
      {
        VidSchiUnblockUnorderedWaitQueuePacket(this, (__int64)a2, a3);
      }
      else if ( (v3 & 8) != 0 )
      {
        v4 = *((_QWORD *)a2 + 11);
        if ( v4 )
          v5 = *(_QWORD *)(v4 + 104);
        else
          v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 3284LL) & 1) != 0 )
          VidSchiUnwaitWaitQueuePacket(this, (__int64)a2, a3, 0LL);
      }
    }
  }
}
