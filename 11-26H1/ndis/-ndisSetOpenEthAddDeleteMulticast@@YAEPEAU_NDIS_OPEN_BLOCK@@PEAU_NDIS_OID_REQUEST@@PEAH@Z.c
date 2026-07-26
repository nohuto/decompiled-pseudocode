/*
 * XREFs of ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C16AC
 * Callers:
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BDFF0 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140021FB0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x140035420 (WPP_RECORDER_SF_qqqDD.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097D48 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097F74 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *v3; // r13
  unsigned __int8 v4; // r14
  int *v5; // r15
  _X_FILTER *EthDB; // rbx
  int v9; // edx
  int IsValidMulticastFilter; // ebp
  unsigned __int8 *InformationBuffer; // rdx
  int v12; // eax
  _X_FILTER *p_NoFTypeOpenList; // r15
  _NDIS_OPEN_BLOCK *OpenList; // r14
  __int64 v15; // rax
  unsigned int NextNumAddresses; // r9d
  __int64 v17; // rcx
  int v18; // r10d
  unsigned __int8 *NextMCastAddressBuf; // r12
  unsigned int v20; // r11d
  unsigned __int16 v21; // ax
  __int64 v22; // r12
  bool v23; // zf
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v27; // r10
  UINT v28; // ecx
  unsigned __int8 result; // al
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // [rsp+50h] [rbp-48h]
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+A0h] [rbp+8h] BYREF
  int *v33; // [rsp+B0h] [rbp+18h]
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v4 = 1;
  v5 = a3;
  MiniportHandle = a1->MiniportHandle;
  v3 = MiniportHandle;
  LOBYTE(v32) = 1;
  EthDB = MiniportHandle->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x41u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        11,
        66,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids);
      goto LABEL_54;
    }
    goto LABEL_57;
  }
  if ( !a1->MaxMulticastAddresses )
  {
    IsValidMulticastFilter = 0;
    goto LABEL_54;
  }
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength != 6 )
  {
    *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    IsValidMulticastFilter = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x43u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        a2);
      goto LABEL_54;
    }
    goto LABEL_57;
  }
  memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
  a1->OldNumAddresses = a1->NumAddresses;
  a1->NumAddresses = 0;
  InformationBuffer = (unsigned __int8 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( a2->DATA.QUERY_INFORMATION.Oid == 16843272 )
    v12 = ethAddOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v32);
  else
    v12 = ethDeleteOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v32);
  v4 = v32;
  IsValidMulticastFilter = v12;
  if ( (_BYTE)v32 == 1 )
    goto LABEL_54;
  p_NoFTypeOpenList = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  v9 = -1;
  EthDB->NextOldNumAddresses = EthDB->NextNumAddresses;
  EthDB->NextNumAddresses = 0;
  do
  {
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_16;
      if ( IsValidMulticastFilter )
        goto LABEL_44;
      if ( p_NoFTypeOpenList != EthDB )
        break;
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
      OpenList = EthDB->NoFTypeOpenList;
      if ( !OpenList )
        goto LABEL_41;
LABEL_16:
      if ( IsValidMulticastFilter )
        goto LABEL_44;
      v15 = 0LL;
      while ( 1 )
      {
        v32 = v15;
        if ( (unsigned int)v15 >= OpenList->NumAddresses )
          break;
        NextNumAddresses = EthDB->NextNumAddresses;
        v17 = 0LL;
        v18 = 0;
        if ( NextNumAddresses )
        {
          NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          MCastAddressBuf = OpenList->MCastAddressBuf;
          v34 = 3 * v15;
          v20 = *(_DWORD *)&MCastAddressBuf[v15].MCastAddress[2];
          v9 = -1;
          while ( *(_DWORD *)&NextMCastAddressBuf[6 * v17 + 2] <= v20 )
          {
            if ( *(_DWORD *)&NextMCastAddressBuf[6 * v17 + 2] >= v20 )
            {
              v21 = *(_WORD *)&NextMCastAddressBuf[6 * v17];
              v3 = MiniportHandle;
              if ( v21 > *(_WORD *)MCastAddressBuf[(unsigned __int64)v34 / 3].MCastAddress )
                break;
              if ( v21 >= *(_WORD *)MCastAddressBuf[(unsigned __int64)v34 / 3].MCastAddress )
                goto LABEL_32;
            }
            v17 = (unsigned int)(v17 + 1);
            v18 = v17;
            if ( (unsigned int)v17 >= NextNumAddresses )
              goto LABEL_28;
          }
          v9 = 1;
        }
LABEL_28:
        EthDB->NextNumAddresses = NextNumAddresses + 1;
        if ( NextNumAddresses + 1 > EthDB->MaxMulticastAddresses )
        {
          IsValidMulticastFilter = -1073676279;
          v9 = -1;
          break;
        }
        v22 = (unsigned int)v17;
        if ( v9 > 0 )
          memmove(
            EthDB->NextMCastAddressBuf[(unsigned int)(v17 + 1)],
            EthDB->NextMCastAddressBuf[v17],
            6 * (NextNumAddresses + 1 + ~v18));
        memmove(EthDB->NextMCastAddressBuf[v22], OpenList->MCastAddressBuf[v32].MCastAddress, 6uLL);
LABEL_32:
        v15 = (unsigned int)(v32 + 1);
        v9 = -1;
      }
      OpenList = OpenList->FilterNextOpen;
    }
    if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
    {
LABEL_41:
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
      OpenList = EthDB->FTypeOpenList;
      v23 = OpenList == 0LL;
      continue;
    }
    v23 = p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList;
  }
  while ( !v23 );
LABEL_44:
  v24 = EthDB->NextNumAddresses;
  if ( v24 == EthDB->NextOldNumAddresses && (v25 = 0LL, v24) )
  {
    NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
    v27 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
    while ( 1 )
    {
      v9 = 3 * v25;
      if ( *(_DWORD *)&v27[6 * v25 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v25 + 2]
        || *(_WORD *)&v27[6 * v25] != *(_WORD *)&NextOldMCastAddressBuf[6 * v25] )
      {
        break;
      }
      v9 = 0;
      v25 = (unsigned int)(v25 + 1);
      if ( (unsigned int)v25 >= v24 )
        goto LABEL_50;
    }
LABEL_52:
    v4 = 0;
    *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
    v28 = 6 * EthDB->NextNumAddresses;
    *(_DWORD *)&a2->NdisReserved[72] = a2->DATA.QUERY_INFORMATION.Oid;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v28;
    a2->DATA.QUERY_INFORMATION.Oid = 16843011;
  }
  else
  {
LABEL_50:
    if ( v9 )
      goto LABEL_52;
    memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    EthDB->NextOldNumAddresses = 0;
    v4 = 1;
  }
  v5 = v33;
LABEL_54:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v3,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v4);
  if ( IsValidMulticastFilter )
  {
LABEL_57:
    if ( (byte_14011D044 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v3->IfIndex,
        &SetOpenEthAddDeleteMulticastFailed,
        &v3->InterfaceGuid,
        (__int64)&v3->InterfaceGuid,
        v3->IfIndex,
        v3->NetLuid.Value,
        IsValidMulticastFilter,
        1,
        (char)a1);
  }
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
