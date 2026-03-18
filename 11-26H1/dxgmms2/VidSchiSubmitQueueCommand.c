/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1400E8F40
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x140054C70 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x14000C1AC (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x14000D7DC (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  DWORD LowPart; // eax
  __int64 v6; // rbp
  LARGE_INTEGER *v7; // rcx

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  LowPart = a1[6].LowPart;
  v6 = *(_QWORD *)(v3 + 40);
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(a1);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_FLIP_QUEUE_ENTRY **)a1);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 6u:
        v7 = a1 + 41;
        if ( a1[40].LowPart != 5 )
          v7 = (LARGE_INTEGER *)v7->QuadPart;
        ((void (__fastcall *)(LARGE_INTEGER *))a1[38].QuadPart)(v7);
        VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 3284) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v3 + 40))
      || *(_BYTE *)(v3 + 212)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0) )
    {
      a1[8].LowPart &= ~4u;
    }
    if ( (a1[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 3000));
      RtlSetBitEx(v6 + 552, *(unsigned __int16 *)(v4 + 4));
    }
    if ( (a1[35].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)a1);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
}
