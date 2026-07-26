/*
 * XREFs of ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400ADCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x140071D10 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  unsigned int v4; // esi
  int *v5; // rdx
  int v6; // eax
  _DWORD *v7; // r14
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned int *v12; // r9
  struct _NDIS_RECEIVE_FILTER_BLOCK *ReceiveFilterByFilterId; // rax
  unsigned int *v14; // r13
  KIRQL v15; // dl
  _NDIS_RECEIVE_FILTER_PARAMETERS *p_FilterParameters; // rdx
  unsigned int v17; // eax
  KIRQL v18; // dl
  char *v19; // rcx
  KIRQL v20; // dl
  unsigned int v21; // eax
  struct _NDIS_MINIPORT_BLOCK *v22[2]; // [rsp+20h] [rbp-59h]
  char v23[112]; // [rsp+60h] [rbp-19h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+E8h] [rbp+6Fh]
  void *v26; // [rsp+F0h] [rbp+77h]

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = (_OWORD *)ndisCaptureIovOidContext(v23, a1);
  v4 = 36;
  v5 = (int *)((char *)a1 + 40);
  *(_OWORD *)v22 = *v3;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *v5 = -1073741637;
    return 1;
  }
  *v5 = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
  {
    v6 = -1073676268;
LABEL_6:
    *(_DWORD *)(v1 + 68) = 36;
LABEL_7:
    *v5 = v6;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
    return 1;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
  {
    v6 = -1073676266;
    goto LABEL_6;
  }
  v7 = (_DWORD *)((char *)a1 + 40);
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) == 2 )
  {
    v4 = 44;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
    {
      v6 = -1073676268;
LABEL_13:
      *(_DWORD *)(v1 + 68) = 44;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
      v6 = -1073676266;
      goto LABEL_13;
    }
    v7 = (_DWORD *)((char *)a1 + 40);
  }
  if ( !LOBYTE(v22[0]) )
    return 0;
  *v5 = -1073741637;
  v9 = *(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v4;
  v26 = v9;
  v10 = v9[4];
  if ( v10 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v22[1], &NewIrql);
    ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v22[1], v10, v11, v12);
    v14 = (unsigned int *)ReceiveFilterByFilterId;
    if ( ReceiveFilterByFilterId )
    {
      p_FilterParameters = &ReceiveFilterByFilterId->FilterParameters;
      v17 = v4
          + ReceiveFilterByFilterId->FilterParameters.FieldParametersArrayElementSize
          * ReceiveFilterByFilterId->FilterParameters.FieldParametersArrayNumElements;
      v25 = v17;
      *(_DWORD *)(v1 + 68) = v17;
      if ( v17 <= *(_DWORD *)(v1 + 52) )
      {
        memmove(v26, p_FilterParameters, v4);
        v19 = (char *)v26;
        *((_DWORD *)v26 + 5) = v4;
        memmove(&v19[v4], (char *)v14 + v14[38], v14[40] * v14[39]);
        v20 = NewIrql;
        v22[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22[1]->Lock, v20);
        v21 = v25;
        *v7 = 0;
        *(_DWORD *)(v1 + 60) = v21;
      }
      else
      {
        v18 = NewIrql;
        v22[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22[1]->Lock, v18);
        *v7 = -1073676266;
      }
      return 1;
    }
    v15 = NewIrql;
    v22[1]->MiniportThread = 0LL;
    KeReleaseSpinLock(&v22[1]->Lock, v15);
  }
  *v7 = -1073741811;
  return 1;
}
