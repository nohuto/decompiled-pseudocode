/*
 * XREFs of ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140021800
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140022630 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140021FB0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x140035420 (WPP_RECORDER_SF_qqqDD.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisSetOpenEthMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r14
  int *v4; // r15
  struct _NDIS_OID_REQUEST *v5; // rbx
  unsigned __int8 v7; // bp
  _X_FILTER *EthDB; // rsi
  unsigned int v9; // edx
  int v10; // edi
  char *InformationBuffer; // r14
  unsigned int v12; // ebp
  _X_FILTER *p_NoFTypeOpenList; // r15
  _NDIS_OPEN_BLOCK *OpenList; // rbx
  unsigned int k; // edi
  unsigned int NextNumAddresses; // r8d
  int v17; // ebp
  unsigned int v18; // eax
  int v19; // r10d
  unsigned __int8 *NextMCastAddressBuf; // r11
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rcx
  unsigned int v22; // r9d
  _ETH_MULTICAST_WRAPPER *v23; // r14
  unsigned int v24; // r8d
  __int64 v25; // r14
  int v26; // eax
  unsigned int i; // edi
  unsigned int NumAddresses; // edx
  __int64 v30; // r9
  unsigned int j; // ebx
  int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rbx
  _ETH_MULTICAST_WRAPPER *v35; // r8
  unsigned int v36; // eax
  unsigned __int16 v37; // ax
  unsigned int v38; // r8d
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v40; // r10
  unsigned __int16 v41; // cx
  char v42; // [rsp+38h] [rbp-70h]
  int IsValidMulticastFilter; // [rsp+B0h] [rbp+8h]
  struct _NDIS_OID_REQUEST *v44; // [rsp+B8h] [rbp+10h]
  _NDIS_MINIPORT_BLOCK *v46; // [rsp+C8h] [rbp+20h]

  v44 = a2;
  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  v46 = MiniportHandle;
  v7 = 1;
  EthDB = MiniportHandle->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      74,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v42);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, v5);
  v10 = IsValidMulticastFilter;
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_73:
      if ( (byte_14011D044 & 4) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          MiniportHandle->IfIndex,
          (unsigned int)&SetOpenEthMulticastListFailed,
          (_DWORD)MiniportHandle + 4008,
          (_DWORD)MiniportHandle + 4008,
          MiniportHandle->IfIndex,
          MiniportHandle->NetLuid.Value,
          v10,
          1,
          (char)a1);
      goto LABEL_40;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      75,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5);
  }
  else if ( a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    a1->OldNumAddresses = a1->NumAddresses;
    a1->NumAddresses = 0;
    InformationBuffer = (char *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
    v12 = v5->DATA.QUERY_INFORMATION.InformationBufferLength / 6;
    if ( v12 )
    {
      for ( i = 0; i < v12; ++i )
      {
        NumAddresses = a1->NumAddresses;
        v30 = 6 * i;
        for ( j = 0; ; ++j )
        {
          if ( j >= NumAddresses )
          {
            v32 = -1;
            goto LABEL_45;
          }
          v35 = &a1->MCastAddressBuf[j];
          v36 = *(_DWORD *)&v35->MCastAddress[2];
          if ( v36 > *(_DWORD *)&InformationBuffer[v30 + 2] )
          {
LABEL_56:
            v32 = 1;
            goto LABEL_45;
          }
          if ( v36 >= *(_DWORD *)&InformationBuffer[v30 + 2] )
          {
            v37 = *(_WORD *)v35->MCastAddress;
            if ( v37 > *(_WORD *)&InformationBuffer[v30] )
              goto LABEL_56;
            if ( v37 >= *(_WORD *)&InformationBuffer[v30] )
              break;
          }
        }
        v32 = 0;
LABEL_45:
        if ( v32 )
        {
          v33 = NumAddresses + 1;
          a1->NumAddresses = v33;
          if ( v32 > 0 )
            memmove(&a1->MCastAddressBuf[j + 1], &a1->MCastAddressBuf[j], 12LL * (v33 + ~j));
          v34 = j;
          memmove(a1->MCastAddressBuf[v34].MCastAddress, &InformationBuffer[6 * i], 6uLL);
          a1->MCastAddressBuf[v34].RefCount = 1;
        }
      }
      v10 = 0;
    }
    p_NoFTypeOpenList = EthDB;
    OpenList = EthDB->OpenList;
    memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    EthDB->NextOldNumAddresses = EthDB->NextNumAddresses;
    EthDB->NextNumAddresses = 0;
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_15;
LABEL_13:
      if ( p_NoFTypeOpenList == EthDB )
        break;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
        goto LABEL_28;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList )
        goto LABEL_31;
    }
    OpenList = EthDB->NoFTypeOpenList;
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
    if ( OpenList )
      goto LABEL_15;
LABEL_28:
    OpenList = EthDB->FTypeOpenList;
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
    if ( OpenList )
    {
LABEL_15:
      while ( !v10 )
      {
        for ( k = 0; ; ++k )
        {
          if ( k >= OpenList->NumAddresses )
          {
            v10 = IsValidMulticastFilter;
            goto LABEL_11;
          }
          NextNumAddresses = EthDB->NextNumAddresses;
          v17 = -1;
          v18 = 0;
          v19 = 0;
          if ( NextNumAddresses )
          {
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            MCastAddressBuf = OpenList->MCastAddressBuf;
            v22 = *(_DWORD *)&MCastAddressBuf[k].MCastAddress[2];
            v23 = &MCastAddressBuf[k];
            while ( 1 )
            {
              v9 = 3 * v18;
              if ( *(_DWORD *)&NextMCastAddressBuf[6 * v18 + 2] > v22 )
                break;
              if ( *(_DWORD *)&NextMCastAddressBuf[6 * v18 + 2] >= v22 )
              {
                v41 = *(_WORD *)&NextMCastAddressBuf[6 * v18];
                if ( v41 > *(_WORD *)v23->MCastAddress )
                  break;
                if ( v41 >= *(_WORD *)v23->MCastAddress )
                  goto LABEL_26;
              }
              v19 = ++v18;
              if ( v18 >= NextNumAddresses )
                goto LABEL_22;
            }
            v17 = 1;
          }
LABEL_22:
          v24 = NextNumAddresses + 1;
          EthDB->NextNumAddresses = v24;
          if ( v24 > EthDB->MaxMulticastAddresses )
            break;
          v25 = v18;
          if ( v17 > 0 )
            memmove(EthDB->NextMCastAddressBuf[v18 + 1], EthDB->NextMCastAddressBuf[v18], 6 * (v24 + ~v19));
          memmove(EthDB->NextMCastAddressBuf[v25], OpenList->MCastAddressBuf[k].MCastAddress, 6uLL);
LABEL_26:
          ;
        }
        v10 = -1073676279;
        IsValidMulticastFilter = -1073676279;
LABEL_11:
        OpenList = OpenList->FilterNextOpen;
        if ( !OpenList )
        {
          if ( v10 )
            break;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_31:
      v9 = EthDB->NextNumAddresses;
      if ( v9 == EthDB->NextOldNumAddresses )
      {
        v38 = 0;
        if ( v9 )
        {
          NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
          v40 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          while ( *(_DWORD *)&v40[6 * v38 + 2] == *(_DWORD *)&NextOldMCastAddressBuf[6 * v38 + 2]
               && *(_WORD *)&v40[6 * v38] == *(_WORD *)&NextOldMCastAddressBuf[6 * v38] )
          {
            ++v38;
            v26 = 0;
            if ( v38 >= v9 )
              goto LABEL_33;
          }
LABEL_34:
          LOBYTE(v5) = (_BYTE)v44;
          v7 = 0;
          *(_QWORD *)&v44->NdisReserved[80] = v44->DATA.QUERY_INFORMATION.InformationBuffer;
          *(_DWORD *)&v44->NdisReserved[88] = v44->DATA.QUERY_INFORMATION.InformationBufferLength;
          v44->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
          v44->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
          goto LABEL_36;
        }
      }
      v26 = -1;
LABEL_33:
      if ( v26 )
        goto LABEL_34;
      memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
      EthDB->NextOldNumAddresses = 0;
      v10 = 0;
    }
    LOBYTE(v5) = (_BYTE)v44;
    v7 = 1;
LABEL_36:
    v4 = a3;
    MiniportHandle = v46;
  }
  else
  {
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      76,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5,
      v10,
      v7);
  if ( v10 )
    goto LABEL_73;
LABEL_40:
  *v4 = v10;
  return v7;
}
