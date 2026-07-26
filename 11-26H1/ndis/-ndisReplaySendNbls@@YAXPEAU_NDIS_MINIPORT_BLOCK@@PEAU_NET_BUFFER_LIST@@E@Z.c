/*
 * XREFs of ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1400099A0
 * Callers:
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C65F4 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140009E10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisReplaySendNbls(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned __int8 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  struct _NET_BUFFER_LIST *v4; // rcx
  unsigned int v5; // r13d
  struct _NET_BUFFER_LIST *v6; // r12
  unsigned __int8 v7; // bp
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  char v12; // r9
  __int64 v13; // rbp
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v17; // rdi
  char *SourceHandle; // rax
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int Scratch; // ebx
  struct _NET_BUFFER_LIST *v28; // rax
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+50h] [rbp-58h]
  char v33; // [rsp+B8h] [rbp+10h]
  char v35; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = a3;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = v3->NblTracker;
    v10 = 0LL;
    v11 = ndisNblTrackerEpoch;
    v12 = 0;
    v13 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v33 = 0;
    v35 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(a2, 0LL, 0x92u, NblTracker, 0);
      v12 = 0;
      v10 = 0LL;
    }
    v14 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    v15 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)NblTracker & 1) != 0 )
    {
      v15 = (2 * v11) ^ ((unsigned __int64)NblTracker ^ (2 * v11)) & 0xFFFFFFFFFFFFFFFDuLL;
      v14 = *(_QWORD *)(((unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    Alignment = a2;
    if ( a2 )
    {
      while ( 1 )
      {
        v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
        {
          if ( v17 )
          {
            if ( (v17 & 4) != 0 )
              goto LABEL_50;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = 0LL;
          }
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v19 = *SourceHandle;
            if ( *SourceHandle == 17 || v19 == 5 || v19 == 18 )
            {
              if ( SourceHandle != (char *)v14 || Alignment->ParentNetBufferList )
              {
                ++v13;
                v20 = v15;
              }
              else
              {
                ++v10;
                v20 = 24LL;
                v29 = v10;
                ++v13;
              }
              goto LABEL_15;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                27,
                12,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)Alignment,
                v19);
LABEL_58:
              v10 = v29;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v10,
              27,
              11,
              (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
              (char)Alignment);
            goto LABEL_58;
          }
LABEL_50:
          v20 = v15 | 4;
LABEL_15:
          Alignment->NetBufferListInfo[27] = (void *)v20;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v21 = v30 - v13;
        v12 = v33;
        v31 = v30 - v13;
        if ( (v17 & 1) == 0 || !v21 )
          goto LABEL_21;
        if ( v33 || v35 )
        {
          v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v33 )
            goto LABEL_38;
          goto LABEL_20;
        }
        v35 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v12 = 1;
          v33 = 1;
          v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_20:
          v23 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v23 + *(_QWORD *)v22) += v31;
          goto LABEL_21;
        }
        v12 = 0;
        v33 = 0;
        v22 = 16 * ((v17 >> 1) & 1) + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_38:
        _InterlockedAdd64((volatile signed __int64 *)(v22 + 8), v31);
LABEL_21:
        v10 = v29;
        v30 = v13;
        if ( !Alignment )
        {
          v5 = 0;
          break;
        }
      }
    }
    v24 = v13 - v10;
    if ( (v15 & 1) == 0 || !v24 )
      goto LABEL_28;
    if ( v12 || v35 )
    {
      v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v12 )
      {
LABEL_42:
        _InterlockedAdd64((volatile signed __int64 *)(v25 + 8), v24);
        goto LABEL_28;
      }
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_42;
      }
      v25 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v26 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v26 + *(_QWORD *)v25) += v24;
LABEL_28:
    v7 = a3;
    v4 = 0LL;
    v3 = a1;
  }
  for ( ; a2; v6 = v28 )
  {
    Scratch = (unsigned int)a2->Scratch;
    if ( v6 && Scratch != v5 )
    {
      v4->Link.Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(v3, v6, v5, 0, v7);
      v6 = 0LL;
    }
    v28 = a2;
    v4 = a2;
    a2 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
    if ( v6 )
    {
      v28 = v6;
      Scratch = v5;
    }
    v5 = Scratch;
  }
  ndisMSendNBLToMiniportInternal(v3, v6, v5, 0, v7);
}
