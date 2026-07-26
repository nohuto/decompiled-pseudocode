/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x140024390
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140038FC0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  struct NDIS_PCW_CONTEXT *v4; // rsi
  struct _NDIS_OPEN_BLOCK *v6; // r14
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int *v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int *v10; // rdi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r12
  char v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rbx
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v21; // rdi
  unsigned __int8 *SourceHandle; // rax
  unsigned __int8 v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-68h]
  char v32; // [rsp+40h] [rbp-58h]
  unsigned int v33; // [rsp+44h] [rbp-54h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+50h] [rbp-48h]

  v4 = a4;
  v6 = a1;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = a1->NblTracker;
    v14 = 0LL;
    v15 = ndisNblTrackerEpoch;
    v16 = 0LL;
    v17 = a3 & 1;
    v33 = ndisNblTrackerEpoch;
    v35 = 0LL;
    v34 = 0LL;
    v32 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(a2, 0LL, 0x95u, NblTracker, a3 & 1);
      v15 = v33;
      v14 = 0LL;
    }
    v18 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    v19 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v19 = (2LL * v15) ^ ((unsigned __int64)NblTracker ^ (2LL * v15)) & 0xFFFFFFFFFFFFFFFDuLL;
      v18 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    if ( a2 )
    {
      Alignment = a2;
      while ( 1 )
      {
        v21 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v21 )
        {
          if ( v21 )
          {
            if ( (v21 & 4) != 0 )
              goto LABEL_61;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = 0LL;
          }
          SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v23 = *SourceHandle;
            if ( *SourceHandle == 17 || v23 == 5 || v23 == 18 )
            {
              if ( SourceHandle != (unsigned __int8 *)v18 || Alignment->ParentNetBufferList )
              {
                ++v16;
                v24 = v19;
              }
              else
              {
                ++v14;
                v24 = 24LL;
                v34 = v14;
                ++v16;
              }
              goto LABEL_32;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v31) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)Alignment,
                v31);
LABEL_67:
              v14 = v34;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)Alignment);
            goto LABEL_67;
          }
LABEL_61:
          v24 = v19 | 4;
LABEL_32:
          Alignment->NetBufferListInfo[27] = (void *)v24;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v25 = v35 - v16;
        v36 = v35 - v16;
        if ( (v21 & 1) == 0 || !v25 )
          goto LABEL_38;
        if ( v17 || v32 )
        {
          v26 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v17 )
            goto LABEL_50;
          goto LABEL_37;
        }
        v32 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v17 = 1;
          v26 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_37:
          v27 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v27 + *(_QWORD *)v26) += v36;
          goto LABEL_38;
        }
        v17 = 0;
        v26 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_50:
        _InterlockedAdd64((volatile signed __int64 *)(v26 + 8), v36);
LABEL_38:
        v14 = v34;
        v35 = v16;
        if ( !Alignment )
        {
          v4 = a4;
          v6 = a1;
          break;
        }
      }
    }
    v28 = v16 - v14;
    if ( (v19 & 1) == 0 || !v28 )
      goto LABEL_2;
    if ( v17 || v32 )
    {
      v29 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v17 )
        goto LABEL_46;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v29 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_46:
        _InterlockedAdd64((volatile signed __int64 *)(v29 + 8), v28);
        goto LABEL_2;
      }
      v29 = 16 * ((v19 >> 1) & 1) + (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v30 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v30 + *(_QWORD *)v29) += v28;
  }
LABEL_2:
  if ( byte_14011F740 )
  {
    for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      i->NetBufferListInfo[13] = 0LL;
  }
  v8 = (unsigned int *)((char *)v4 + 16);
  if ( (*((_DWORD *)v4 + 2) & 0x80u) != 0 )
  {
    if ( *v8 == -1 )
      *v8 = KeGetPcr()->Prcb.Number;
    v9 = ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *v8);
    ++*(_QWORD *)(v9 + *(_QWORD *)v4 + 56);
  }
  v10 = (unsigned int *)((char *)v4 + 16);
  if ( (*((_DWORD *)v4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      v10 = (unsigned int *)((char *)v4 + 16);
      *v8 = KeGetPcr()->Prcb.Number;
    }
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + (unsigned __int64)(*v8 * ndisPcwPerCpuDataStride) + *(_QWORD *)v4 + 376) = __rdtsc();
  }
  ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *))v6->ProtSendNetBufferListsComplete)(
    v6->SendCompleteNetBufferListsContext,
    a2);
  if ( (*((_DWORD *)v4 + 3) & 0x200) != 0 )
  {
    if ( *v8 == -1 )
    {
      *v8 = KeGetPcr()->Prcb.Number;
      v8 = v10;
    }
    v11 = *(_QWORD *)v4 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(*v8 * ndisPcwPerCpuDataStride);
    v12 = __rdtsc();
    *(_QWORD *)(v11 + 176) += (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12) - *(_QWORD *)(v11 + 376);
    *(_QWORD *)(v11 + 376) = 0LL;
  }
}
