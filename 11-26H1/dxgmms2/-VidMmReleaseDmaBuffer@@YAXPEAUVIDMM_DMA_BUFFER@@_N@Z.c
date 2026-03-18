/*
 * XREFs of ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidMmReleaseDmaBuffer @ 0x1400396F0 (VidMmReleaseDmaBuffer.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmReleaseDmaBuffer(struct VIDMM_DMA_BUFFER *a1, char a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v3 = *((_QWORD *)a1 + 16);
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(v3 + 8);
    WdLogGlobalForLineNumber = 3503;
  }
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 8, 0xFFFFFFFF) != 1 )
      return;
    goto LABEL_5;
  }
  v6 = *((_DWORD *)a1 + 8);
  v7 = v6 == 0;
  if ( v6 > 0 )
  {
    v8 = v6 - 1;
    *((_DWORD *)a1 + 8) = v8;
    v7 = v8 == 0;
  }
  if ( v7 )
LABEL_5:
    *((_BYTE *)a1 + 24) = 0;
}
