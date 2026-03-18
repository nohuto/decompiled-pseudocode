/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x140016178
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiFlushQueuePacket @ 0x14004626C (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x140005A84 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x140017DE4 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x14003A658 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  bool v5; // si
  struct _VIDSCH_CONTEXT *v8; // r10
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned int i; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // dl
  bool v18; // zf
  unsigned int v19; // ecx
  char v20; // al
  char v21; // cl
  __int64 v22; // rdx
  __int64 v23; // r14
  int v24; // eax
  bool v25; // al
  struct _VIDSCH_CONTEXT *v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp-48h]
  struct _VIDSCH_CONTEXT *v28; // [rsp+58h] [rbp-40h]

  v5 = 0;
  v28 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v11 = a2[11];
    a3 = a2 + 35;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v11 )
    {
      v8 = (struct _VIDSCH_CONTEXT *)a2[11];
      v28 = v8;
      v10 = *(_QWORD *)(v11 + 104);
    }
    else
    {
      v9 = a2[12];
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL);
    }
    v12 = *(_QWORD *)(v10 + 40);
  }
  else
  {
    v12 = a5;
  }
  v13 = *((unsigned int *)a3 + 29);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( *(_QWORD *)((char *)a3 + 156) && (_DWORD)v13 != -1 && *(_QWORD *)(v12 + 8 * v13 + 3448) )
    {
      for ( i = 0; i < *(_DWORD *)(v12 + 160); ++i )
      {
        v15 = *(int *)(304LL * i + *(_QWORD *)(v12 + 8 * v13 + 3448) + 188);
        if ( (int)v15 > -1 )
        {
          v16 = *(_QWORD *)(v12 + 3576) + 160 * v15;
          if ( v16 )
          {
            if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v16
              && *((_DWORD *)a3 + 40) == *(_DWORD *)(v16 + 4)
              && a3[21] == *(_QWORD *)(v16 + 8)
              && *(_DWORD *)(v16 + 112) == 3 )
            {
              goto LABEL_33;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  v17 = -1;
  v18 = !_BitScanForward(&v19, a3[75] & 0x3FF);
  v20 = v19;
  v21 = 0;
  if ( !v18 )
    v17 = v20;
  if ( v17 != -1 )
    v21 = v17;
  v27 = v21;
  v22 = *(int *)(*(_QWORD *)(v12 + 8 * v13 + 3448) + 304LL * (unsigned int)v21 + 188);
  if ( (int)v22 <= -1 || (v23 = *(_QWORD *)(v12 + 3576) + 160 * v22) == 0 )
  {
LABEL_23:
    v25 = 0;
LABEL_24:
    VidSchiProcessPresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v12,
      a1,
      v28,
      (struct VIDSCH_HW_QUEUE *)v9,
      (struct _VIDSCH_DEVICE *)v10,
      (struct VIDSCH_SUBMIT_DATA2 *)a3,
      a4,
      v5,
      v25);
    return;
  }
  if ( *(_QWORD *)(v23 + 120) != v23 + 120 )
  {
    v26 = v8;
    goto LABEL_26;
  }
  v24 = *(_DWORD *)(v23 + 112);
  if ( v24 == 3 )
  {
    if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v23
      && *((_DWORD *)a3 + 40) == *(_DWORD *)(v23 + 4)
      && a3[21] == *(_QWORD *)(v23 + 8) )
    {
LABEL_33:
      v25 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( v24 != 1
    || !VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
  {
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(v23 + 97) )
  {
    v25 = 0;
    v5 = 1;
    *(_BYTE *)(v23 + 97) = 1;
    goto LABEL_24;
  }
  if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, v13, v27) )
    goto LABEL_23;
  v26 = v28;
LABEL_26:
  VidSchiPostponePresentHistoryToken(
    v26,
    (struct VIDSCH_HW_QUEUE *)v9,
    (struct _VIDSCH_DEVICE *)v10,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v12);
}
