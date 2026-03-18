/*
 * XREFs of ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004AF78
 * Callers:
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140049444 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiSimulateProgressFenceCompletion(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  __int64 v5; // rbx
  LARGE_INTEGER *v6; // rsi
  char *v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rdx

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
  v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
  v6[1] = KeQueryPerformanceCounter(0LL);
  v7 = (char *)a3 + 56;
  v6->LowPart = 9;
  if ( *((_DWORD *)a2 + 12) )
  {
    v8 = 312LL;
    v6[3] = *(LARGE_INTEGER *)((char *)a2 + 296);
    v9 = *((_QWORD *)a2 + 37);
  }
  else
  {
    v8 = 800LL;
    v6[*((unsigned int *)a2 + 196) + 3] = *(LARGE_INTEGER *)((char *)a2 + 776);
    v9 = *((_QWORD *)a2 + 97);
    v7 += 24 * *((unsigned int *)a2 + 196);
  }
  *((_QWORD *)v7 + 1) = v9;
  v10 = *(unsigned __int64 **)((char *)a2 + v8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 24LL) + 56LL) )
  {
    if ( v9 > *v10 )
      *v10 = v9;
  }
  else if ( *(_DWORD *)v10 - (int)v9 < 0 )
  {
    *(_DWORD *)v10 = v9;
  }
  v6[2].QuadPart = (LONGLONG)a3;
  LOBYTE(v6[5].LowPart) = 1;
}
