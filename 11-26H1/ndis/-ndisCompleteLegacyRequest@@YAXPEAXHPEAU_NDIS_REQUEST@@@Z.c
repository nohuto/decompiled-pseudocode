/*
 * XREFs of ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14006BD10
 * Callers:
 *     NdisMQueryInformationComplete @ 0x14006BC50 (NdisMQueryInformationComplete.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E7E0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetInformationComplete @ 0x1400C4490 (NdisMSetInformationComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 */

void __fastcall ndisCompleteLegacyRequest(struct _NDIS_MINIPORT_BLOCK *a1, int a2, struct _NDIS_REQUEST *a3)
{
  KIRQL v6; // al
  _NDIS_REQUEST *PendingRequest; // rbx
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  int v9; // edx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  struct _NDIS_OID_REQUEST *v11; // r9
  char v12[8]; // [rsp+38h] [rbp-40h]

  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a3 )
  {
    PendingOidRequest = *(_NDIS_OID_REQUEST **)&a3->MacReserved[8];
    PendingRequest = a3;
  }
  else
  {
    PendingRequest = a1->PendingRequest;
    PendingOidRequest = a1->PendingOidRequest;
    a1->PendingRequest = 0LL;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)PendingOidRequest,
      (char)PendingRequest,
      a2);
  if ( PendingRequest )
  {
    RequestType = PendingRequest->RequestType;
    if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) <= 1 )
    {
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    ExFreePoolWithTag(PendingRequest, 0);
    v11 = PendingOidRequest;
    if ( !a3 )
      v11 = 0LL;
    ndisMOidRequestCompleteInternal(a1, PendingOidRequest, a2, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = a2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x25u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)PendingOidRequest,
        *(_QWORD *)v12);
    }
  }
}
