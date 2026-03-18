/*
 * XREFs of ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x140013918
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1400277A0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400160B0 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct HwQueueStagingList *a1,
        struct VIDSCH_HW_QUEUE *a2,
        unsigned __int64 *a3,
        struct _VIDSCH_QUEUE_PACKET *a4,
        bool *a5)
{
  struct HwQueueStagingList *v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // sf
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v5 = a1;
  v6 = *((int *)a4 + 12);
  *a5 = 0;
  switch ( (_DWORD)v6 )
  {
    case 0:
      v8 = *((unsigned int *)a4 + 196);
      v9 = *((_QWORD *)a2 + 3 * v8 + 7);
      v10 = *((_QWORD *)a4 + 97);
      v11 = a3[v8];
      if ( !*(_BYTE *)(v9 + 29) )
      {
        if ( *(_DWORD *)(v9 + 48) == 6 || *(_BYTE *)(v9 + 30) )
        {
          if ( v11 < v10 )
            return;
          goto LABEL_6;
        }
        v12 = (int)v11 - (int)v10 < 0;
        goto LABEL_15;
      }
LABEL_6:
      VidSchiCompleteHwQueuePacket(v5, a4, 1);
LABEL_7:
      *a5 = 1;
      return;
    case 3:
      goto LABEL_19;
    case 4:
      VidSchiCompleteHwQueueWaitPacket(v5, a4);
      goto LABEL_7;
    case 5:
      if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) == (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
      {
        VidSchiCompleteHwQueueSignalPacket(v5, a4);
        goto LABEL_7;
      }
      return;
    case 7:
      if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) == (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
        goto LABEL_6;
      return;
  }
  if ( (_DWORD)v6 != 8 )
  {
LABEL_19:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, a2, a4, v6);
    WdLogGlobalForLineNumber = 916;
  }
  v13 = *((_QWORD *)a2 + 7);
  v14 = *((_QWORD *)a4 + 37);
  v15 = *a3;
  if ( *(_BYTE *)(v13 + 29) )
    goto LABEL_6;
  if ( *(_DWORD *)(v13 + 48) == 6 || *(_BYTE *)(v13 + 30) )
  {
    if ( v15 >= v14 )
      goto LABEL_6;
    return;
  }
  v12 = (int)v15 - (int)v14 < 0;
LABEL_15:
  if ( !v12 )
    goto LABEL_6;
}
