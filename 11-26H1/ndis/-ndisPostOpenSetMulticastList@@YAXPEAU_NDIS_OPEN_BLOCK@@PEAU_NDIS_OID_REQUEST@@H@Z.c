/*
 * XREFs of ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14001E1C0
 * Callers:
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14001DEF0 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD630 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x1400233E0 (WPP_RECORDER_SF_qqqd.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisPostOpenSetMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r14
  _X_FILTER *EthDB; // r15
  UINT v8; // ecx
  UINT v9; // edi
  ULONG *p_InformationBufferLength; // rax
  __int64 OldNumAddresses; // rax

  MiniportHandle = a1->MiniportHandle;
  EthDB = MiniportHandle->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      85,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
  v8 = *(_DWORD *)&a2->NdisReserved[88];
  v9 = 0;
  if ( v8 )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
    p_InformationBufferLength = &a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v8;
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
  else
  {
    p_InformationBufferLength = &a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  if ( a3 )
  {
    OldNumAddresses = a1->OldNumAddresses;
    if ( (_DWORD)OldNumAddresses )
    {
      memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12 * OldNumAddresses);
      a1->NumAddresses = a1->OldNumAddresses;
    }
    a1->OldNumAddresses = 0;
    if ( EthDB->NextOldNumAddresses )
    {
      memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
      EthDB->NextNumAddresses = EthDB->NextOldNumAddresses;
    }
    EthDB->NextOldNumAddresses = 0;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  }
  else
  {
    a1->OldNumAddresses = 0;
    EthDB->NextOldNumAddresses = 0;
    v9 = *p_InformationBufferLength;
  }
  a2->DATA.QUERY_INFORMATION.BytesWritten = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      86,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
