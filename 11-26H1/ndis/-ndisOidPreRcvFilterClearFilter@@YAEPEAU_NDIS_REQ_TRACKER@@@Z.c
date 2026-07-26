/*
 * XREFs of ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AD090
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x140071D10 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  char v3; // si
  __int64 v4; // r15
  unsigned int v5; // r14d
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  _NDIS_OPEN_BLOCK *v7; // rbp
  __int64 v8; // r8
  unsigned int *v9; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v11; // dl
  struct _NDIS_RECEIVE_FILTER_BLOCK *v12; // r14
  struct _NDIS_MINIPORT_BLOCK *v14[2]; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+60h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+C0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 40);
  *(_OWORD *)v14 = *(_OWORD *)ndisCaptureIovOidContext(&v15, a1);
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_14;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    if ( !LOBYTE(v14[0]) )
      return 0;
    v5 = *(_DWORD *)(v4 + 12);
    if ( !v5 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741811;
      return v3;
    }
    OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
    v7 = OidSourceHandle;
    if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v14[1], &NewIrql);
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v14[1], v5, v8, v9);
      v11 = NewIrql;
      v12 = ReceiveFilterByFilterId;
      v14[1]->MiniportThread = 0LL;
      KeReleaseSpinLock(&v14[1]->Lock, v11);
      if ( v12 && v12->Open == v7 && *(_DWORD *)(v4 + 8) == v12->FilterParameters.QueueId )
        return 0;
      goto LABEL_7;
    }
LABEL_14:
    *((_DWORD *)a1 + 10) = -1073741637;
    return v3;
  }
  *(_DWORD *)(v1 + 56) = 16;
  *((_DWORD *)a1 + 10) = -1073676268;
  return v3;
}
