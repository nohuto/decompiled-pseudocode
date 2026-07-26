/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004B850
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C60F0 (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C61BC (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C6304 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  unsigned int v7; // r10d
  _BYTE *v8; // r9
  __int64 v10; // r13
  struct _LIST_ENTRY *v11; // rdx
  char v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  struct _LIST_ENTRY *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r13
  struct _NET_BUFFER_LIST *v35; // rcx
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-60h]
  _QWORD v39[3]; // [rsp+50h] [rbp-58h] BYREF
  char v41; // [rsp+B8h] [rbp+10h]
  char v43; // [rsp+D0h] [rbp+28h]
  struct _LIST_ENTRY *v44; // [rsp+D8h] [rbp+30h]

  v7 = a4;
  v8 = a7;
  v10 = a1;
  *a5 = 0LL;
  *a7 = 0;
  a6->Blink = a6;
  a6->Flink = a6;
  if ( (_DWORD)a2 != 49 )
  {
    if ( (_DWORD)a2 == 51 )
    {
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)a1, (void *)a3, a6);
      return;
    }
    if ( (_DWORD)a2 != 53 )
    {
      if ( (_DWORD)a2 == 54 )
      {
        ndisQueueReceiveNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3);
        return;
      }
      if ( (_DWORD)a2 != 52 )
      {
        if ( (_DWORD)a2 == 50 )
        {
          v31 = a1 + 584;
          v32 = (_QWORD *)(a3 + 72);
          v33 = *(_QWORD **)(v31 + 8);
          if ( *v33 != v31 )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(a3 + 80) = v33;
          *v33 = v32;
          *(_QWORD *)(v31 + 8) = v32;
          *(_DWORD *)(v10 + 632) = *(_DWORD *)(a3 + 32);
        }
        goto LABEL_37;
      }
      v11 = 0LL;
      if ( !*(_DWORD *)ndisNblTrackerMode )
      {
LABEL_34:
        v30 = (struct _LIST_ENTRY *)a3;
        if ( a3 )
        {
          do
          {
            v30[7].Flink = (_LIST_ENTRY *)v7;
            v11 = v30;
            v30 = v30->Flink;
          }
          while ( v30 );
        }
        **(_QWORD **)(v10 + 552) = a3;
        *(_QWORD *)(v10 + 552) = v11;
        *(_DWORD *)(v10 + 632) = 0;
LABEL_37:
        *v8 = 1;
        return;
      }
      v12 = 1;
      v13 = 0LL;
      v14 = *(_QWORD *)(a1 + 608);
      v15 = 0LL;
      v16 = ndisNblTrackerEpoch;
      v44 = 0LL;
      v41 = 1;
      v43 = 0;
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)a3, 0LL, 1u, (void *)v14, 1u);
        v12 = 1;
        v11 = 0LL;
      }
      v17 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
      v18 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v14 & 1) != 0 )
      {
        v18 = (2 * v16) ^ (v14 ^ (2 * v16)) & 0xFFFFFFFFFFFFFFFDuLL;
        v17 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      }
      v19 = (_QWORD *)a3;
      if ( a3 )
      {
        while ( 1 )
        {
          v20 = v19[45];
          while ( v19[45] == v20 )
          {
            if ( v20 )
            {
              if ( (v20 & 4) != 0 )
                goto LABEL_54;
            }
            else if ( !v19[15] )
            {
              v19[15] = 0LL;
            }
            v21 = (unsigned __int8 *)v19[15];
            if ( v21 )
            {
              v22 = *v21;
              if ( *v21 == 17 || v22 == 5 || v22 == 18 )
              {
                if ( v21 != (unsigned __int8 *)v17 || v19[3] )
                {
                  ++v13;
                  v23 = v18;
                }
                else
                {
                  v11 = (struct _LIST_ENTRY *)((char *)v11 + 1);
                  v23 = 24LL;
                  v44 = v11;
                  ++v13;
                }
                goto LABEL_20;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v36) = *v21;
                WPP_RECORDER_SF_qD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  0x1Bu,
                  0xCu,
                  (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                  (char)v19,
                  v36);
LABEL_65:
                v11 = v44;
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v11) = 3;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v11,
                27,
                11,
                (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
                (char)v19);
              goto LABEL_65;
            }
LABEL_54:
            v23 = v18 | 4;
LABEL_20:
            v19[45] = v23;
            v19 = (_QWORD *)*v19;
            if ( !v19 )
              break;
          }
          v24 = v15 - v13;
          v12 = v41;
          if ( (v20 & 1) == 0 || !v24 )
            goto LABEL_26;
          if ( v41 || v43 )
          {
            v25 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v41 )
              goto LABEL_42;
            goto LABEL_25;
          }
          v43 = 1;
          if ( KeGetCurrentIrql() == 2 )
          {
            v12 = 1;
            v41 = 1;
            v25 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_25:
            v26 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(v26 + *(_QWORD *)v25) += v24;
            goto LABEL_26;
          }
          v12 = 0;
          v41 = 0;
          v25 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_42:
          _InterlockedAdd64((volatile signed __int64 *)(v25 + 8), v24);
LABEL_26:
          v11 = v44;
          v15 = v13;
          if ( !v19 )
          {
            v10 = a1;
            break;
          }
        }
      }
      v27 = v13 - (_QWORD)v11;
      if ( (v18 & 1) != 0 && v27 )
      {
        if ( v12 || v43 )
        {
          v28 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( !v12 )
          {
LABEL_46:
            _InterlockedAdd64((volatile signed __int64 *)(v28 + 8), v27);
            goto LABEL_33;
          }
        }
        else
        {
          if ( KeGetCurrentIrql() != 2 )
          {
            v28 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            goto LABEL_46;
          }
          v28 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        }
        v29 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v29 + *(_QWORD *)v28) += v27;
      }
LABEL_33:
      v7 = a4;
      v8 = a7;
      v11 = 0LL;
      goto LABEL_34;
    }
    v34 = a1 + 544;
    v35 = *(struct _NET_BUFFER_LIST **)v34;
    if ( *(_QWORD *)v34 )
    {
      v37 = 0LL;
      v38 = &v37;
      v39[0] = 0LL;
      v39[1] = v39;
      NdisClassifyNblChain2(v35, a2, (void *)a3, (struct NBL_QUEUE_t *)&v37, (struct NBL_QUEUE_t *)v39);
      if ( *(_QWORD *)v34 != v37 )
      {
        if ( v37 )
        {
          *(_QWORD *)v34 = v37;
          *(_QWORD *)(v34 + 8) = v38;
        }
        else
        {
          *(_QWORD *)v34 = 0LL;
          *(_QWORD *)(v34 + 8) = v34;
        }
      }
      *a5 = v39[0];
    }
  }
}
