/*
 * XREFs of VidSchiSubmitHwPagingCommand @ 0x1401095AC
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 */

void __fastcall VidSchiSubmitHwPagingCommand(__int64 a1, __int128 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 HwQueuePacket; // rax
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0

  v3 = VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 17));
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 344) + 8LL * v3);
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v5, 1);
  v7 = *a2;
  v8 = HwQueuePacket;
  v9 = a2[1];
  *(_DWORD *)HwQueuePacket = 895576406;
  *(_DWORD *)(HwQueuePacket + 48) = 8;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  v10 = *(_QWORD *)a2;
  *(_DWORD *)(v8 + 52) = 2;
  *(_QWORD *)(v8 + 96) = v5;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)(v8 + 280) = v7;
  *(_QWORD *)(v8 + 104) = CurrentThread;
  v12 = a2[2];
  *(_OWORD *)(v8 + 296) = v9;
  *(_QWORD *)(v8 + 72) = v10;
  v13 = a2[3];
  *(_OWORD *)(v8 + 312) = v12;
  v14 = a2[4];
  *(_OWORD *)(v8 + 328) = v13;
  *(_OWORD *)(v8 + 344) = v14;
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v8);
}
