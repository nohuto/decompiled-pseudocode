/*
 * XREFs of ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C0010
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140035780 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1400C0118 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 */

void __fastcall ndisPostSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  UINT v7; // ecx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS **p_InformationBuffer; // r8

  MiniportHandle = a1->MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Bu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = *(_DWORD *)&a2->NdisReserved[88];
  p_InformationBuffer = (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&a2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( v7 )
  {
    *p_InformationBuffer = *(struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&a2->NdisReserved[80];
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v7;
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
  if ( !a3 )
    ndisPostSetOpenRSSParametersHelper(MiniportHandle, a1, *p_InformationBuffer);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x8Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
