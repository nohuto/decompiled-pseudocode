/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x140028DF4
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x140028C80 (VidSchDdiNotifyDpc.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiForceTdr @ 0x140059150 (VidSchiForceTdr.c)
 * Callees:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x140026E70 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1400279C0 (VidSchiProcessDpcDmaPacket.c)
 *     ?VidMmCheckForApertureCorruption@@YAXPEBVVIDMM_GLOBAL@@@Z @ 0x140028A3C (-VidMmCheckForApertureCorruption@@YAXPEBVVIDMM_GLOBAL@@@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x14002F828 (VidSchiProcessPeriodicNotificationCookie.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004C410 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140057248 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 */

void __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // r15
  PSLIST_ENTRY v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *p_Next; // r8
  struct _SLIST_ENTRY *v11; // rdi
  unsigned int v12; // ebp
  unsigned int v13; // esi
  struct _SLIST_ENTRY *Next; // rcx
  int v15; // eax
  struct _VIDSCH_VSYNC_COOKIE *v16; // rcx
  struct _SLIST_ENTRY *v17; // r14

  v2 = *(union _SLIST_HEADER **)(a1 + 744);
  v5 = ExpInterlockedFlushSList(v2 + 129);
  v9 = 0LL;
  if ( v5 )
  {
    do
    {
      p_Next = &v5->Next;
      v5 = v5->Next;
      *p_Next = v9;
      v9 = p_Next;
    }
    while ( v5 );
    do
    {
      v11 = (struct _SLIST_ENTRY *)(v9 - 2);
      v12 = -1;
      v13 = *((_DWORD *)v9 - 4);
      v9 = (_QWORD *)*v9;
      switch ( v13 )
      {
        case 1u:
        case 2u:
        case 9u:
          Next = v11[2].Next[6].Next;
          v12 = WORD2(Next->Next);
          if ( a2 )
          {
            _InterlockedExchange((volatile __int32 *)&Next[31].Next + 2, 1);
            VidMmCheckForApertureCorruption(*(const struct VIDMM_GLOBAL **)(a1 + 768), v6);
          }
          VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v11[-1]);
          break;
        case 0xBu:
          v12 = WORD2(v11[2].Next->Next);
          VidSchiProcessMonitoredFenceSignaledDpc(v11);
          break;
        case 0x13u:
          v12 = WORD2(v11[2].Next->Next);
          VidSchiProcessNativeFenceSignaledDpc(v11);
          break;
        case 0xFu:
          v17 = v11[2].Next;
          v12 = WORD2(v17->Next);
          ExpInterlockedPushEntrySList((PSLIST_HEADER)&v17[706], v11);
          if ( (byte_14008A203 & 0x40) != 0 )
            VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v17);
          break;
        case 0x10u:
          v12 = WORD2(v11[2].Next->Next);
          VidSchiProcessGpuEngineTimeoutDpc(v11);
          break;
        case 0xCu:
          v12 = WORD2(v11[2].Next->Next);
          VidSchiProcessHwQueuePageFaultedDpc(v11);
          break;
        case 0x11u:
          v12 = WORD2(v11[2].Next[1].Next->Next);
          VidSchiProcessSuspendContextCompletedDpc(v11);
          break;
        default:
          if ( v13 <= 0x12 && (v15 = 263304, _bittest(&v15, v13)) )
          {
            v16 = (struct _VIDSCH_VSYNC_COOKIE *)&v11[-1];
            if ( BYTE3(v11[2].Next[4].Next) )
              VidSchiProcessDpcVSyncHwFlipQueue(v16);
            else
              VidSchiProcessDpcVSyncCookie(v16);
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(&v2[215].Region + *((unsigned int *)&v11[5].Next + 3)) + 44848),
              v11);
          }
          else if ( v13 == 14 )
          {
            VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v2);
          }
          break;
      }
      if ( (byte_14008A202 & 1) != 0 )
        McTemplateK0dq_EtwWriteTransfer(v7, &NotifyDpcCB, p_Next, v12, v13);
    }
    while ( v9 );
  }
  else if ( (byte_14008A202 & 1) != 0 )
  {
    McTemplateK0dq_EtwWriteTransfer(v7, &NotifyDpcCB, v8, 0xFFFFFFFFLL, 0);
  }
}
