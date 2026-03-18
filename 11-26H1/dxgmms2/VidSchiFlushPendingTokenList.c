/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x140004A88
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1400039F8 (VidSchExitIndependentFlipInternal.c)
 *     VidSchConfirmToken @ 0x140004960 (VidSchConfirmToken.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiTryEnterIndependentFlip @ 0x140005A2C (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiFlushPendingTokenList(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // rsi
  bool v9; // bp
  char *v10; // rbx
  void **v11; // rax
  struct VIDSCH_HW_QUEUE *v12; // r9
  struct _VIDSCH_CONTEXT *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  struct _VIDSCH_DEVICE *v16; // [rsp+20h] [rbp-38h]
  union _ULARGE_INTEGER v17; // [rsp+30h] [rbp-28h]

  v6 = *(int *)(*((_QWORD *)a2 + a3 + 431) + 304LL * a4 + 188);
  if ( (int)v6 <= -1 )
    v7 = 0LL;
  else
    v7 = *((_QWORD *)a2 + 447) + 160 * v6;
  v8 = (void **)(v7 + 120);
  v9 = *(_DWORD *)(v7 + 112) == 3;
  while ( 1 )
  {
    v10 = (char *)*v8;
    if ( *v8 == v8 )
      break;
    if ( *((void ***)v10 + 1) != v8 || (v11 = *(void ***)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *v8 = v11;
    v11[1] = v8;
    WdLogSingleEntry1(8LL, *((_QWORD *)v10 + 19));
    v12 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)v10 + 4);
    v13 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)v10 + 3);
    v17 = *(union _ULARGE_INTEGER *)(v10 + 16);
    v16 = (struct _VIDSCH_DEVICE *)*((_QWORD *)v10 + 5);
    WdLogGlobalForLineNumber = 13477;
    VidSchiProcessPresentHistoryToken(a2, a1, v13, v12, v16, (struct VIDSCH_SUBMIT_DATA2 *)(v10 + 48), v17, 0, v9);
    --*((_DWORD *)a2 + 217);
    v14 = *((_QWORD *)v10 + 3);
    if ( v14 )
      --*(_DWORD *)(v14 + 800);
    v15 = *((_QWORD *)v10 + 5);
    if ( v15 )
    {
      --*(_DWORD *)(v15 + 1840);
      VidSchiSignalRegisteredEvent(a2, *((_QWORD *)v10 + 5) + 144LL);
    }
    VidSchiSignalRegisteredEvent(a2, (char *)a2 + 1944);
    ExFreePoolWithTag(v10, 0x30626956u);
  }
}
