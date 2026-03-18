/*
 * XREFs of VidSchSubmitPagingCommand @ 0x1401092D8
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1401095AC (VidSchiSubmitHwPagingCommand.c)
 */

void __fastcall VidSchSubmitPagingCommand(__int64 a1, __int128 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r14
  KSPIN_LOCK *v8; // r15
  _QWORD *v9; // rax
  size_t v10; // r12
  _DWORD *Pool2; // rbx
  _QWORD *v12; // r14
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  struct _KTHREAD *CurrentThread; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  KPRIORITY PriorityThread; // eax
  _QWORD v24[20]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = a1;
  if ( !VidSchIsTDRPending(a1) )
  {
    if ( *(_BYTE *)(v3 + 63) )
    {
      VidSchiSubmitHwPagingCommand(v3, a2);
      return;
    }
    v4 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, *((_DWORD *)a2 + 17));
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 328) + 8 * v4);
    if ( *((_BYTE *)a2 + 72) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v3 + 352) + 8 * v4);
      if ( v22 )
        v5 = v22;
    }
    v6 = 1136;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL);
    v8 = (KSPIN_LOCK *)(v7 + 2024);
    if ( (unsigned int)(*(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113)) > 0x470 )
      v6 = *(_DWORD *)(v7 + 160) * (72 * *(_DWORD *)(v7 + 84) + 224) + 8 * (*(_DWORD *)(v7 + 84) + 113);
    v9 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 2024), (_QWORD **)(v5 + 720), (_DWORD *)(v5 + 736));
    v10 = v6;
    if ( v9 )
    {
      Pool2 = v9 - 1;
      if ( v9 == (_QWORD *)8 )
      {
        v12 = Pool2 + 14;
        goto LABEL_10;
      }
    }
    else
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, v6, 895576406LL);
      if ( Pool2 )
        goto LABEL_9;
      memset(v24, 0, sizeof(v24));
      v20 = *(_QWORD *)(v5 + 96);
      LODWORD(v24[4]) |= 0x40u;
      LODWORD(v24[2]) = 1;
      LODWORD(v24[6]) = *(unsigned __int16 *)(v20 + 4);
      VidSchRegisterCompletionEvent(v7, (__int64)v24);
      do
      {
        v21 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v7 + 2024),
                (_QWORD **)(v5 + 720),
                (_DWORD *)(v5 + 736));
        if ( v21 )
          Pool2 = v21 - 1;
        else
          VidSchWaitForCompletionEvent(v7, (__int64)v24, 19LL);
      }
      while ( !Pool2 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v7 + 2032), v24, 0LL);
      v3 = a1;
    }
    memset(Pool2, 0, v10);
LABEL_9:
    v12 = Pool2 + 14;
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 1;
    VidSchiInterlockedInsertTailList(v8, v5 + 768, (_QWORD *)Pool2 + 1, (_DWORD *)(v5 + 784));
LABEL_10:
    v13 = *a2;
    v14 = a2[1];
    *Pool2 = 895576406;
    Pool2[12] = 8;
    *v12 = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 2;
    *((_QWORD *)Pool2 + 11) = v5;
    CurrentThread = KeGetCurrentThread();
    *(_OWORD *)(Pool2 + 70) = v13;
    *((_QWORD *)Pool2 + 13) = CurrentThread;
    v16 = a2[2];
    v17 = *(_QWORD *)a2;
    *(_OWORD *)(Pool2 + 74) = v14;
    *((_QWORD *)Pool2 + 9) = v17;
    v18 = a2[3];
    *(_OWORD *)(Pool2 + 78) = v16;
    v19 = a2[4];
    *(_OWORD *)(Pool2 + 82) = v18;
    *(_OWORD *)(Pool2 + 86) = v19;
    if ( (*(_DWORD *)(v3 + 2824) & 4) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext((struct _VIDSCH_CONTEXT *)v5, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue((__int64)Pool2);
    return;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
    VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)a2 + 1), 1);
}
