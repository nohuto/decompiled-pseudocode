/*
 * XREFs of ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F790 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x14001F920 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisIsValidPMProtocolOffload@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x14001FB20 (-ndisIsValidPMProtocolOffload@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140021330 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400214B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int PMProtocolOffloadSize; // eax
  struct _NDIS_PM_PROTOCOL_OFFLOAD *v10; // rcx
  struct _NDIS_OPEN_BLOCK *v11; // r10
  struct _NDIS_FILTER_BLOCK *v12; // rdx
  unsigned __int8 result; // al
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = MiniportFromReqTracker;
  v6 = *(_QWORD *)(v3 + 32);
  v15 = 1;
  if ( v4
    && (v14 = *(_QWORD *)(v4 + 24), *(_BYTE *)(v14 + 56) <= 6u)
    && (*(_BYTE *)(v14 + 56) != 6 || *(_BYTE *)(v14 + 57) < 0x14u)
    || (v7 = *((_QWORD *)a1 + 1)) != 0
    && (*(_DWORD *)(v6 + 88) & 0x4000) == 0
    && (v8 = *(_QWORD *)(v7 + 16), *(_BYTE *)(v8 + 100) <= 6u)
    && (*(_BYTE *)(v8 + 100) != 6 || *(_BYTE *)(v8 + 101) < 0x14u)
    || *(_DWORD *)(v6 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( (*(_DWORD *)(v6 + 88) & 0xC0000) != 0 )
    return 0;
  PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize(*(struct _NDIS_PM_PROTOCOL_OFFLOAD **)(v6 + 40));
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v6 + 48) < PMProtocolOffloadSize )
  {
    *(_DWORD *)(v6 + 56) = PMProtocolOffloadSize;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v6 + 48) < 0x100u )
    {
      *(_DWORD *)(v6 + 56) = 256;
      result = 1;
      *((_DWORD *)a1 + 10) = -1073676268;
      return result;
    }
  }
  if ( !ndisIsValidPMProtocolOffload(v10) )
  {
    result = 1;
    *((_DWORD *)a1 + 10) = -1073676267;
    return result;
  }
  if ( !*((_QWORD *)a1 + 3)
    || (*((_DWORD *)a1 + 10) = ndisSourcePreAddProtocolOffload(v11, 0LL, (struct _NDIS_OID_REQUEST *)v6, &v15),
        (result = v15) == 0) )
  {
    v12 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
    if ( !v12
      || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
      || (*((_DWORD *)a1 + 10) = ndisSourcePreAddProtocolOffload(0LL, v12, (struct _NDIS_OID_REQUEST *)v6, &v15),
          (result = v15) == 0) )
    {
      if ( !*(_QWORD *)a1 )
        return 0;
      *((_DWORD *)a1 + 10) = ndisMiniportPreAddProtocolOffload(v5, (struct _NDIS_OID_REQUEST *)v6, &v15);
      result = v15;
      if ( !v15 )
        return 0;
    }
  }
  return result;
}
