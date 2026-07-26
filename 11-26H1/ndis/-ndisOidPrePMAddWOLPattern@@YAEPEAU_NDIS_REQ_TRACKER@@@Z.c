/*
 * XREFs of ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001F940
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14001DDE0 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14001FAE0 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x14001FB90 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B85CC (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B98B8 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

__int64 __fastcall ndisOidPrePMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbp
  unsigned __int8 v2; // si
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  __int64 v5; // rdi
  struct _NDIS_PM_WOL_PATTERN *v6; // r9
  bool v7; // cf
  unsigned int WoLPatternSize; // eax
  struct _NDIS_PM_WOL_PATTERN *v9; // r9
  int v10; // r10d
  unsigned int v11; // edx
  _NDIS_PROTOCOL_BLOCK *v12; // rcx
  struct _NDIS_FILTER_BLOCK *v14; // rdx
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  int v16; // eax
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v2 = 1;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *((_QWORD *)a1 + 4);
  v22 = 1;
  if ( v1
    && (ProtocolHandle = v1->ProtocolHandle, ProtocolHandle->MajorNdisVersion <= 6u)
    && (ProtocolHandle->MajorNdisVersion != 6 || ProtocolHandle->MinorNdisVersion < 0x14u)
    || *(_DWORD *)(v5 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  if ( (*(_DWORD *)(v5 + 88) & 0xC0000) != 0 )
    return 0;
  v6 = *(struct _NDIS_PM_WOL_PATTERN **)(v5 + 40);
  v7 = *(_DWORD *)(v5 + 48) < 0xC4u;
  *(_DWORD *)(v5 + 56) = 0;
  if ( v7 )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    return v2;
  }
  WoLPatternSize = ndisGetWoLPatternSize(v6);
  *((_DWORD *)a1 + 10) = v10;
  v11 = *(_DWORD *)(v5 + 48);
  if ( v11 < WoLPatternSize )
  {
    *(_DWORD *)(v5 + 56) = WoLPatternSize;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v2;
  }
  if ( !ndisIsValidWoLPattern(v9, v11) )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    return v2;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v12 = v1->ProtocolHandle;
    if ( v12->MajorNdisVersion == 6 )
    {
      if ( v12->MinorNdisVersion < 0x14u )
        goto LABEL_10;
    }
    else if ( v12->MajorNdisVersion <= 6u )
    {
LABEL_10:
      *((_DWORD *)a1 + 10) = -1073741637;
      return v2;
    }
    v16 = ndisSourcePreAddWoLPattern(v1, 0LL, (struct _NDIS_OID_REQUEST *)v5, (char *)&v22);
    v2 = v22;
    *((_DWORD *)a1 + 10) = v16;
    if ( v2 )
      return v2;
  }
  v14 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
  if ( v14 && (*(_DWORD *)(v5 + 88) & 0x4000) == 0 )
  {
    FilterDriver = v14->FilterDriver;
    if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
      && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
       || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x14u) )
    {
      goto LABEL_10;
    }
    v18 = ndisSourcePreAddWoLPattern(0LL, v14, (struct _NDIS_OID_REQUEST *)v5, (char *)&v22);
    v2 = v22;
    *((_DWORD *)a1 + 10) = v18;
    if ( v2 )
      return v2;
  }
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
  {
    v21 = ndisMiniportPreAddWoLPattern(v3, (struct _NDIS_OID_REQUEST *)v5, &v22);
    v2 = v22;
    *((_DWORD *)a1 + 10) = v21;
    if ( v2 )
      return v2;
    return 0;
  }
  v19 = ndisXlateAddWolPatternToPacketPatternOid((struct _NDIS_OID_REQUEST *)v5, &v22);
  v2 = v22;
  *((_DWORD *)a1 + 10) = v19;
  if ( v2 != 1 )
  {
    v20 = ndisSetAddWakeUpPattern(v3, (struct _NDIS_OID_REQUEST *)v5, &v22);
    v2 = v22;
    *((_DWORD *)a1 + 10) = v20;
    if ( v2 != 1 )
      return 0;
  }
  return v2;
}
