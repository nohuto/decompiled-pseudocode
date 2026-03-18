/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x140108A8C
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     VidSchiSuspendFlipQueues @ 0x140106C98 (VidSchiSuspendFlipQueues.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromContext @ 0x1401087A0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1401088A0 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1401089B0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  struct _VIDSCH_CONTEXT **v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  __int64 QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (struct _VIDSCH_CONTEXT **)(a1 + 272);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(struct _VIDSCH_CONTEXT ***)(a2 + 48);
  v5 = *v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1LL);
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 6;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = v5;
  *(_QWORD *)(QueuePacket + 104) = KeGetCurrentThread();
  *(_OWORD *)(QueuePacket + 280) = *(_OWORD *)a2;
  *(_OWORD *)(QueuePacket + 296) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(QueuePacket + 312) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(QueuePacket + 328) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(QueuePacket + 344) = *(_OWORD *)(a2 + 64);
  if ( (*(_DWORD *)(a1 + 2824) & 4) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue(QueuePacket);
}
