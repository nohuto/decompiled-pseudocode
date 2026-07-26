/*
 * XREFs of ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140075850
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140022630 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1400758E0 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 */

__int64 __fastcall ndisQueryMiniportEthMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UINT InformationBufferLength; // r8d
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  v6 = 0;
  v7 = 0;
  EthQueryGlobalFilterAddresses(
    &v6,
    a1->EthDB,
    InformationBufferLength,
    &v7,
    (unsigned __int8 (*)[6])a2->DATA.QUERY_INFORMATION.InformationBuffer);
  result = (unsigned int)v6;
  if ( v6 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 6 * a1->EthDB->MiniportNumAddresses;
    return 3221291028LL;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = 6 * v7;
  }
  return result;
}
