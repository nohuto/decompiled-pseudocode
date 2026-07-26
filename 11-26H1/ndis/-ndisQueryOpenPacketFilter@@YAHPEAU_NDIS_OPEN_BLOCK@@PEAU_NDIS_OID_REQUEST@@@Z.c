/*
 * XREFs of ?ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0FAC
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140034F20 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  unsigned int PacketFilters; // esi
  _NDIS_MEDIUM MediaType; // eax
  int v8; // [rsp+38h] [rbp-20h]
  char v9[4]; // [rsp+38h] [rbp-20h]

  MiniportHandle = a1->MiniportHandle;
  PacketFilters = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x31u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2);
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    MediaType = MiniportHandle->MediaType;
    if ( MediaType == NdisMedium802_3 || MediaType == NdisMediumNative802_11 )
      PacketFilters = a1->PacketFilters;
    *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = PacketFilters;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v9 = 0;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x33u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)a2,
        *(_DWORD *)v9);
    }
    return 0LL;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = -1073676268;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x32u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)a2,
        v8);
    }
    return 3221291028LL;
  }
}
