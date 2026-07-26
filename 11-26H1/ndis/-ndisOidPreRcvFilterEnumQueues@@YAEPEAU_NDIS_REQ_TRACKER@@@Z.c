/*
 * XREFs of ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AD550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x140077700 (-ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned int v1; // r13d
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v3; // rsi
  char v4; // r12
  _OWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  struct _NDIS_MINIPORT_BLOCK *v8; // rdi
  int v9; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  char v12; // r15
  struct _NDIS_RECEIVE_QUEUE_BLOCK *OidSourceHandle; // rax
  unsigned int NumReceiveQueues; // esi
  unsigned int v15; // ecx
  __int64 v16; // rax
  KIRQL v17; // dl
  __int64 v18; // rax
  struct _NDIS_RECEIVE_QUEUE_INFO *v19; // r15
  _LIST_ENTRY *Flink; // rax
  bool i; // zf
  struct _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rdx
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v23; // rax
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v24; // rdi
  KIRQL v25; // dl
  __int64 v26; // rax
  unsigned int v27; // ecx
  struct _NDIS_MINIPORT_BLOCK *v29[2]; // [rsp+40h] [rbp-69h]
  __int128 v30; // [rsp+70h] [rbp-39h]
  char v31[128]; // [rsp+80h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+110h] [rbp+67h] BYREF
  struct _NDIS_RECEIVE_QUEUE_BLOCK **v33; // [rsp+118h] [rbp+6Fh]
  unsigned int v34; // [rsp+120h] [rbp+77h]
  struct _NDIS_RECEIVE_QUEUE_BLOCK *p_ReceiveQueueList; // [rsp+128h] [rbp+7Fh]

  v1 = 0;
  p_ReceiveQueueList = 0LL;
  NewIrql = 0;
  v3 = 0LL;
  v4 = 1;
  v5 = (_OWORD *)ndisCaptureIovOidContext(v31, a1);
  *(_OWORD *)v29 = *v5;
  v30 = v5[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      25,
      28,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a1);
  }
  v7 = *((_QWORD *)a1 + 4);
  v8 = v29[1];
  v9 = *(_DWORD *)(v7 + 4);
  if ( v9 != 2 && v9 )
  {
    v10 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_34;
  }
  v10 = (_DWORD *)((char *)a1 + 40);
  *(_DWORD *)(v7 + 52) = 0;
  if ( !LOBYTE(v29[0]) )
  {
    v4 = 0;
    goto LABEL_34;
  }
  *v10 = -1073741637;
  if ( *((_QWORD *)&v30 + 1) )
  {
    v11 = *((_QWORD *)a1 + 4);
    if ( *(_DWORD *)(v11 + 4) == 2 )
    {
      v12 = 0;
    }
    else
    {
      OidSourceHandle = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v11);
      p_ReceiveQueueList = OidSourceHandle;
      v3 = OidSourceHandle;
      if ( !OidSourceHandle || LOBYTE(OidSourceHandle->AdapterLink.Flink) != 18 )
        goto LABEL_34;
      v12 = 1;
    }
    LOBYTE(v33) = v12;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v29[1], &NewIrql);
    if ( v12 )
    {
      NumReceiveQueues = *(_DWORD *)&v3->QueueParameters.QueueName.String[27];
    }
    else
    {
      NumReceiveQueues = v29[1]->NumReceiveQueues;
      if ( v29[1]->DefaultReceiveQueue )
        ++NumReceiveQueues;
    }
    v15 = 1096 * NumReceiveQueues + 16;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) = v15;
    v16 = *((_QWORD *)a1 + 4);
    v34 = v15;
    if ( v15 <= *(_DWORD *)(v16 + 48) )
    {
      v18 = *(_QWORD *)(v16 + 40);
      v19 = (struct _NDIS_RECEIVE_QUEUE_INFO *)(v18 + 16);
      *(_DWORD *)v18 = 1048960;
      *(_DWORD *)(v18 + 4) = 16;
      *(_DWORD *)(v18 + 8) = NumReceiveQueues;
      *(_DWORD *)(v18 + 12) = 1096;
      if ( (_BYTE)v33 )
      {
        p_ReceiveQueueList = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)((char *)p_ReceiveQueueList + 736);
        Flink = p_ReceiveQueueList->AdapterLink.Flink;
        for ( i = p_ReceiveQueueList->AdapterLink.Flink == (_LIST_ENTRY *)p_ReceiveQueueList;
              ;
              i = *v33 == p_ReceiveQueueList )
        {
          v33 = (struct _NDIS_RECEIVE_QUEUE_BLOCK **)Flink;
          if ( i || v1 >= NumReceiveQueues )
            break;
          ndisCopyReceiveQueueInfo(v19, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&Flink[-1]);
          v19 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v19 + 1096);
          ++v1;
          Flink = (_LIST_ENTRY *)*v33;
        }
      }
      else
      {
        DefaultReceiveQueue = v29[1]->DefaultReceiveQueue;
        if ( DefaultReceiveQueue )
        {
          ndisCopyReceiveQueueInfo((struct _NDIS_RECEIVE_QUEUE_INFO *)(v18 + 16), DefaultReceiveQueue);
          v19 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v19 + 1096);
          v1 = 1;
        }
        v23 = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v29[1]->ReceiveQueueList.Flink;
        p_ReceiveQueueList = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&v29[1]->ReceiveQueueList;
        if ( v23 != (struct _NDIS_RECEIVE_QUEUE_BLOCK *)&v29[1]->ReceiveQueueList )
        {
          v24 = v23;
          do
          {
            if ( v1 >= NumReceiveQueues )
              break;
            ndisCopyReceiveQueueInfo(v19, v24);
            v24 = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v24->AdapterLink.Flink;
            v19 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v19 + 1096);
            ++v1;
          }
          while ( v24 != p_ReceiveQueueList );
          v8 = v29[1];
        }
      }
      v25 = NewIrql;
      v8->MiniportThread = 0LL;
      KeReleaseSpinLock(&v8->Lock, v25);
      v26 = *((_QWORD *)a1 + 4);
      v27 = v34;
      *v10 = 0;
      *(_DWORD *)(v26 + 52) = v27;
    }
    else
    {
      v17 = NewIrql;
      v29[1]->MiniportThread = 0LL;
      KeReleaseSpinLock(&v29[1]->Lock, v17);
      *v10 = -1073676266;
    }
  }
LABEL_34:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Du,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v8,
      *v10);
  return v4;
}
