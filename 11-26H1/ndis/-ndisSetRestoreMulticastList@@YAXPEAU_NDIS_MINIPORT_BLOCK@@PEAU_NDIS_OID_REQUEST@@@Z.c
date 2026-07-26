/*
 * XREFs of ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C2328
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140022630 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisSetRestoreMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _X_FILTER *EthDB; // rbx
  char v4; // r13
  _X_FILTER *v5; // rbp
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  _NDIS_OPEN_BLOCK **p_FTypeOpenList; // rcx
  _NDIS_OPEN_BLOCK **p_NoFTypeOpenList; // rax
  __int64 i; // r15
  unsigned int NextNumAddresses; // r9d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r10d
  unsigned __int8 *NextMCastAddressBuf; // rsi
  unsigned int v15; // r11d
  unsigned __int16 v16; // ax
  __int64 v17; // rsi
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // [rsp+70h] [rbp+8h]

  EthDB = a1->EthDB;
  v4 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x51u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2);
  v5 = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  p_FTypeOpenList = &EthDB->FTypeOpenList;
  EthDB->NextOldNumAddresses = EthDB->NextNumAddresses;
  p_NoFTypeOpenList = &EthDB->NoFTypeOpenList;
  EthDB->NextNumAddresses = 0;
  do
  {
    if ( !OpenList )
      goto LABEL_22;
    while ( 1 )
    {
      do
      {
        for ( i = 0LL; (unsigned int)i < OpenList->NumAddresses; i = (unsigned int)(i + 1) )
        {
          NextNumAddresses = EthDB->NextNumAddresses;
          v11 = -1;
          v12 = 0LL;
          v13 = 0;
          if ( NextNumAddresses )
          {
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v11 = -1;
            MCastAddressBuf = OpenList->MCastAddressBuf;
            v15 = *(_DWORD *)&MCastAddressBuf[i].MCastAddress[2];
            while ( *(_DWORD *)&NextMCastAddressBuf[6 * v12 + 2] <= v15 )
            {
              if ( *(_DWORD *)&NextMCastAddressBuf[6 * v12 + 2] >= v15 )
              {
                v16 = *(_WORD *)&NextMCastAddressBuf[6 * v12];
                if ( v16 > *(_WORD *)MCastAddressBuf[i].MCastAddress )
                  break;
                if ( v16 >= *(_WORD *)MCastAddressBuf[i].MCastAddress )
                  goto LABEL_19;
              }
              v12 = (unsigned int)(v12 + 1);
              v13 = v12;
              if ( (unsigned int)v12 >= NextNumAddresses )
                goto LABEL_15;
            }
            v11 = 1;
          }
LABEL_15:
          EthDB->NextNumAddresses = NextNumAddresses + 1;
          if ( NextNumAddresses + 1 > EthDB->MaxMulticastAddresses )
            break;
          v17 = (unsigned int)v12;
          if ( v11 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v12 + 1)],
              EthDB->NextMCastAddressBuf[v12],
              6 * (NextNumAddresses + 1 + ~v13));
          memmove(EthDB->NextMCastAddressBuf[v17], &OpenList->MCastAddressBuf->MCastAddress[8 * i + 4 * i], 6uLL);
LABEL_19:
          ;
        }
        OpenList = OpenList->FilterNextOpen;
      }
      while ( OpenList );
      p_NoFTypeOpenList = &EthDB->NoFTypeOpenList;
      p_FTypeOpenList = &EthDB->FTypeOpenList;
LABEL_22:
      if ( v5 == EthDB )
      {
        OpenList = EthDB->NoFTypeOpenList;
        v5 = (_X_FILTER *)&EthDB->NoFTypeOpenList;
        if ( OpenList )
          continue;
      }
      if ( v5 != (_X_FILTER *)p_NoFTypeOpenList )
        break;
      OpenList = EthDB->FTypeOpenList;
      v5 = (_X_FILTER *)&EthDB->FTypeOpenList;
      if ( !OpenList )
        break;
    }
  }
  while ( v5 != (_X_FILTER *)p_FTypeOpenList );
  a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v4,
      a2);
}
