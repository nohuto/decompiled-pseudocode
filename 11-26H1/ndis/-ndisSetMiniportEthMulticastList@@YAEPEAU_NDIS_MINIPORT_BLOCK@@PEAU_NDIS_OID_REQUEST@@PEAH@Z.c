/*
 * XREFs of ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140021E00
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140022630 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BDFF0 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140021FB0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisSetMiniportEthMulticastList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _X_FILTER *EthDB; // rbp
  unsigned __int8 v7; // di
  int v8; // edx
  int IsValidMulticastFilter; // ebx
  unsigned int MiniportNumAddresses; // eax
  unsigned __int8 *MiniportOldMCastAddressBuf; // rcx

  EthDB = a1->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2);
  v7 = 1;
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1, 0LL, a2);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x4Eu,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        a2);
  }
  else if ( EthDB->MaxMulticastAddresses )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x4Fu,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        a2);
    MiniportNumAddresses = EthDB->MiniportNumAddresses;
    MiniportOldMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportOldMCastAddressBuf;
    EthDB->MiniportOldNumAddresses = MiniportNumAddresses;
    memmove(MiniportOldMCastAddressBuf, EthDB->MiniportMCastAddressBuf, 6 * MiniportNumAddresses);
    IsValidMulticastFilter = 0;
    v7 = 0;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  *a3 = IsValidMulticastFilter;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      80,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v7);
  }
  return v7;
}
