/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x140012CE0
 * Callers:
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140012B50 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140016A20 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034908 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiIsWaitingOnAsyncCompletion @ 0x140035DE0 (VidSchiIsWaitingOnAsyncCompletion.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(struct HwQueueStagingList *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r12d
  struct HwQueueStagingList *v5; // r15
  int v6; // r8d
  __int64 v7; // rcx
  struct _VIDSCH_PRESENT_INFO *v8; // r10
  _QWORD *v9; // rcx
  int v10; // r13d
  int v11; // edx
  __int64 v12; // rcx
  unsigned int **v13; // rsi
  unsigned int *v14; // rsi
  unsigned int v15; // r14d
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r15
  char v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // [rsp+48h] [rbp-9h]
  struct _VIDSCH_PRESENT_INFO *v27; // [rsp+50h] [rbp-1h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v28; // [rsp+58h] [rbp+7h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v32; // [rsp+C0h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+77h] BYREF
  int v34; // [rsp+D0h] [rbp+7Fh]

  result = (__int64)&retaddr;
  v3 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a2 + 48) )
  {
    v6 = 16404;
    while ( 1 )
    {
      v7 = v3 + 431LL;
      v8 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8 * v7);
      v9 = (_QWORD *)(a2 + 8 * v7);
      v29 = v9;
      v27 = v8;
      if ( *((_BYTE *)v8 + 78948) )
        break;
LABEL_76:
      if ( ++v3 >= *(_DWORD *)(a2 + 48) )
        return result;
    }
    v10 = -1;
    result = 0xFFFFFFFFLL;
    v11 = -1;
    while ( 2 )
    {
      v34 = v10;
      if ( (_DWORD)result == *(_DWORD *)(a2 + 160) )
        goto LABEL_76;
      v12 = *v9;
      if ( v11 == -1 )
        v13 = (unsigned int **)(v12 + 32);
      else
        v13 = (unsigned int **)(v12 + 8 * (v10 + 5LL));
      v14 = *v13;
      if ( !v14 )
        goto LABEL_75;
      v26 = 1;
      v32 = 0;
      while ( 1 )
      {
        v33 = v14[15];
        v15 = v33;
        v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)&v14[350 * v33 + 30];
        v28 = v16;
        v17 = *((_DWORD *)v16 + 263);
        if ( v17 == 1 || v17 == 16 )
          break;
        if ( v17 <= 0xE && _bittest(&v6, v17) )
        {
          v18 = *((_DWORD *)v8 + 1);
          if ( v18 == 3
            || v18 == 5
            && (*((_DWORD *)v16 + 288) & 0x100) != 0
            && (v19 = v14[350 * v14[17] + 293], v19 != 5)
            && v19 != 15 )
          {
            if ( v33 == v14[16] )
            {
              if ( !*(_BYTE *)(a2 + 164)
                || !VidSchiCheckPendingFlipsForThisEntry(
                      (struct _VIDSCH_GLOBAL *)a2,
                      v8,
                      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)&v14[350 * v33 + 30],
                      (struct VIDSCH_FLIP_QUEUE *)v14) )
              {
                LOBYTE(v33) = 0;
                *((_DWORD *)v16 + 263) = 4;
                VidSchiExecuteMmIoFlip(v5, a2, v3, v14, v15, &v32, &v33);
                if ( (_BYTE)v33 )
                  VidSchiExecuteMmIoFlip(v5, a2, v3, v14, v15, &v32, &v33);
              }
LABEL_69:
              v8 = v27;
              v6 = 16404;
            }
          }
          v14[15] = ((_BYTE)v15 + 1) & 0x3F;
        }
        else
        {
          if ( v17 != 3 )
            goto LABEL_72;
          v14[15] = ((_BYTE)v33 + 1) & 0x3F;
        }
      }
      v20 = *((_QWORD *)v16 + 130);
      v21 = 1;
      if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip((__int64)&v14[350 * v33 + 30]) )
      {
        VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v14, v15);
        v5 = a1;
LABEL_72:
        if ( v32 )
          VidSchiCompletePendingFlipOnPlane((__int64)v5, a2, v3, (__int64)v14, 9);
        v10 = v34;
LABEL_75:
        v8 = v27;
        ++v10;
        v9 = v29;
        result = (unsigned int)v10;
        v11 = v10;
        v6 = 16404;
        continue;
      }
      break;
    }
    v22 = *((_DWORD *)v27 + 1);
    if ( v22 == 3 )
    {
      if ( v15 != v14[16]
        || *(_BYTE *)(a2 + 164)
        && VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)a2, v27, v16, (struct VIDSCH_FLIP_QUEUE *)v14) )
      {
        v5 = a1;
        *((_DWORD *)v16 + 263) = 2;
        if ( *(_BYTE *)(a2 + 67) )
          goto LABEL_65;
        *((_QWORD *)v16 + 138) = MEMORY[0xFFFFF78000000320];
LABEL_64:
        if ( !*(_BYTE *)(a2 + 67) )
        {
LABEL_67:
          if ( v21 )
            VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v14, v15);
          goto LABEL_69;
        }
LABEL_65:
        if ( *((_DWORD *)v16 + 263) == 2 )
          VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)a2, v3);
        goto LABEL_67;
      }
      *((_DWORD *)v16 + 263) = 4;
      v21 = 0;
      LOBYTE(v33) = 0;
      VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v14, v15);
      v5 = a1;
    }
    else
    {
      if ( v22 != 5 )
        goto LABEL_63;
      *((_DWORD *)v16 + 263) = 2;
      if ( !v26 && !*(_BYTE *)(a2 + 67) )
        goto LABEL_63;
      v26 = 0;
      if ( v15 != v14[16] && !*((_BYTE *)v16 + 1076) )
        goto LABEL_63;
      if ( !*(_BYTE *)(a2 + 67) )
        *((_QWORD *)v16 + 138) = MEMORY[0xFFFFF78000000320];
      if ( VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)a2, v27, v16, (struct VIDSCH_FLIP_QUEUE *)v14) )
      {
LABEL_63:
        v5 = a1;
        goto LABEL_64;
      }
      if ( *((_BYTE *)v16 + 1076) )
      {
        v23 = v20;
        v5 = a1;
        VidSchiRestartQueuedFlip(a1, v23, v3, v14, v15);
        if ( *(_BYTE *)(a2 + 7086) )
        {
          v24 = *((_DWORD *)v16 + 263);
          if ( !v24 )
            goto LABEL_72;
          if ( v24 <= 0xC )
          {
            v25 = 4672;
            if ( _bittest(&v25, v24) )
              goto LABEL_72;
          }
          if ( (unsigned __int8)VidSchiIsWaitingOnAsyncCompletion() )
            goto LABEL_72;
        }
      }
      else
      {
        v5 = a1;
      }
      if ( (*((_DWORD *)v16 + 288) & 0x2000) != 0 )
      {
        if ( *(_BYTE *)(a2 + 67) )
        {
          *((_DWORD *)v16 + 263) = 4;
        }
        else
        {
          VidSchiSelectPresentAtFlip(v5, (struct _VIDSCH_GLOBAL *)a2, v3, (struct VIDSCH_FLIP_QUEUE *)v14, &v33, &v28);
          v15 = v33;
          v16 = v28;
        }
        if ( *((_DWORD *)v16 + 263) != 4 )
          goto LABEL_64;
      }
      else
      {
        if ( v14[28] )
        {
          *((_DWORD *)v16 + 263) = 3;
          goto LABEL_64;
        }
        *((_DWORD *)v16 + 263) = 4;
      }
      v21 = 0;
      LOBYTE(v33) = 0;
      VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v14, v15);
    }
    VidSchiExecuteMmIoFlip(v5, a2, v3, v14, v15, &v32, &v33);
    if ( (_BYTE)v33 )
      VidSchiExecuteMmIoFlip(v5, a2, v3, v14, v15, &v32, &v33);
    goto LABEL_64;
  }
  return result;
}
