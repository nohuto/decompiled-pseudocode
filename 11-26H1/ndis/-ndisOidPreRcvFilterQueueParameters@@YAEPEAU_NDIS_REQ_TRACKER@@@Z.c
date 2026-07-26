/*
 * XREFs of ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400AC73C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  _BYTE *v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r8
  unsigned int *v19; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  KIRQL v21; // dl
  _LIST_ENTRY *p_PacketList; // rdx
  unsigned int v23; // eax
  void *v24; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v26; // rdx
  KIRQL v27; // dl
  _BYTE v29[64]; // [rsp+68h] [rbp-9h] BYREF
  KIRQL NewIrql; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 1;
  v6 = *(_OWORD *)ndisCaptureIovOidContext(v29, a1);
  v7 = *(_DWORD *)(v1 + 4);
  if ( v7 != 12 )
  {
    if ( v7 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      return v5;
    }
    *((_DWORD *)a1 + 10) = 0;
    v8 = *(_DWORD *)(v1 + 48);
    if ( v8 < 0x43C )
    {
      *(_DWORD *)(v1 + 56) = 1084;
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 52) = 0;
      return v5;
    }
    goto LABEL_10;
  }
  *((_DWORD *)a1 + 10) = 0;
  v8 = *(_DWORD *)(v1 + 48);
  if ( v8 >= 0x43C )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x43Cu )
    {
      v9 = -1073676266;
      goto LABEL_6;
    }
LABEL_10:
    if ( !(_BYTE)v6 )
      return 0;
    v10 = *(_DWORD *)(v1 + 4);
    if ( v10 == 12 )
    {
      v3 = *(_QWORD *)(v1 + 40);
      v11 = 1096;
      *(_DWORD *)(v1 + 60) = 0;
      v12 = 1096LL;
      v13 = *(_WORD *)(v3 + 2);
      if ( v13 < 0x448u )
        v12 = *(unsigned __int16 *)(v3 + 2);
      if ( v12 >= v8 )
      {
        v11 = v8;
      }
      else if ( v13 < 0x448u )
      {
        v11 = *(unsigned __int16 *)(v3 + 2);
      }
      *(_DWORD *)(v1 + 64) = v11;
    }
    else if ( v10 == 1 )
    {
      v3 = *(_QWORD *)(v1 + 40);
      v14 = 1096;
      v15 = 1096LL;
      v16 = *(_WORD *)(v3 + 2);
      if ( v16 < 0x448u )
        v15 = *(unsigned __int16 *)(v3 + 2);
      if ( v15 >= v8 )
      {
        v14 = v8;
      }
      else if ( v16 < 0x448u )
      {
        v14 = *(unsigned __int16 *)(v3 + 2);
      }
      *(_DWORD *)(v1 + 52) = v14;
    }
    *((_DWORD *)a1 + 10) = -1073741637;
    v17 = *(_DWORD *)(v3 + 12);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*((struct _NDIS_MINIPORT_BLOCK **)&v6 + 1), &NewIrql);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(*((struct _NDIS_MINIPORT_BLOCK **)&v6 + 1), v17, v18, v19);
    if ( !ReceiveQueueByQueueId )
    {
LABEL_31:
      v21 = NewIrql;
      *(_QWORD *)(*((_QWORD *)&v6 + 1) + 520LL) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v6 + 1) + 96LL), v21);
      *((_DWORD *)a1 + 10) = -1073741811;
      return v5;
    }
    if ( *(_DWORD *)(v1 + 4) == 12 )
    {
      p_PacketList = &ReceiveQueueByQueueId->PacketList;
      v23 = WORD1(ReceiveQueueByQueueId->PacketList.Flink);
      if ( v23 >= *(_DWORD *)(v1 + 48) )
        v23 = *(_DWORD *)(v1 + 48);
      v24 = *(void **)(v1 + 40);
      *(_DWORD *)(v1 + 60) = v23;
      memmove(v24, p_PacketList, v23);
      *(_WORD *)(v3 + 2) = *(_WORD *)(v1 + 60);
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( *(_BYTE **)(v26 + 72) != v4 )
        goto LABEL_31;
      v5 = 0;
    }
    v27 = NewIrql;
    *(_QWORD *)(*((_QWORD *)&v6 + 1) + 520LL) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)&v6 + 1) + 96LL), v27);
    return v5;
  }
  v9 = -1073676268;
LABEL_6:
  *(_DWORD *)(v1 + 68) = 1084;
  *((_DWORD *)a1 + 10) = v9;
  *(_QWORD *)(v1 + 60) = 0LL;
  return v5;
}
