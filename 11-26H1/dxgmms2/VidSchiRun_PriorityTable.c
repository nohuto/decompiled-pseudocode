/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1400E8CE0
 * Callers:
 *     VidSchiWorkerThread @ 0x1400C1BB0 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiRewindPacket @ 0x14000BD80 (VidSchiRewindPacket.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x14000C1AC (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x14000D7DC (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1400303B0 (VidSchiAdjustWorkerThreadPriority.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140035CE0 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiRecoverFromTDR @ 0x14009B420 (VidSchiRecoverFromTDR.c)
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _VIDSCH_CONTEXT *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  _QWORD *v11; // rcx
  int v12; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v13 = 0;
    v2 = VidSchiScheduleCommandToRun(a1, &v13);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( !v13 || (v12 = *((_DWORD *)a1 + 815), v12 == 2) || v12 == 3 )
      {
        VidSchiIncrementContextReference((__int64)v4);
        v5 = *(_QWORD *)(v3 + 88);
        v6 = *(_QWORD *)(v5 + 104);
        v7 = *(_QWORD *)(v5 + 96);
        v8 = *(_DWORD *)(v3 + 48);
        v9 = *(_QWORD *)(v6 + 40);
        if ( v8 )
        {
          switch ( v8 )
          {
            case 8:
              VidSchiSubmitPagingCommand((LARGE_INTEGER *)v3);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_FLIP_QUEUE_ENTRY **)v3);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 6:
              v11 = (_QWORD *)(v3 + 328);
              if ( *(_DWORD *)(v3 + 320) != 5 )
                v11 = (_QWORD *)*v11;
              (*(void (__fastcall **)(_QWORD *))(v3 + 304))(v11);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v9 + 3284) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v6 + 40))
            || *(_BYTE *)(v6 + 212)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 208), 0, 0) )
          {
            *(_DWORD *)(v3 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v3 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 3000));
            RtlSetBitEx(v9 + 552, *(unsigned __int16 *)(v7 + 4));
          }
          if ( (*(_DWORD *)(v3 + 280) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v3);
          else
            VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v4);
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidschiUnselectContext(v4);
        VidSchiDecrementContextReference(v4, 0);
      }
      else
      {
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidSchiRewindPacket(v3, 0, 1, 0);
        VidschiUnselectContext(v4);
      }
    }
    if ( VidSchIsTDRPending((__int64)a1) )
    {
      v10 = *((_DWORD *)a1 + 815);
      if ( v10 != 2 && v10 != 3 )
        break;
    }
  }
  VidSchiRecoverFromTDR((__int64)a1);
}
