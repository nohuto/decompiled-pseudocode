/*
 * XREFs of ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0
 * Callers:
 *     NdisMDirectOidRequestComplete @ 0x14000DCA0 (NdisMDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x14000E0E0 (ndisFInvokeDirectOidRequest.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14005C360 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E7E0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMOidRequestComplete @ 0x140089150 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1400CD200 (NdisFDirectOidRequestComplete.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(
        struct _NDIS_OBJECT_HEADER *a1,
        struct _NDIS_OID_REQUEST *a2,
        char a3,
        struct _NDIS_OID_REQUEST **a4)
{
  KSPIN_LOCK v4; // rsi
  struct _NDIS_OID_REQUEST *v6; // rbx
  KSPIN_LOCK *v7; // rbp
  KSPIN_LOCK *p_Type; // r14
  KIRQL v9; // al
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rdi

  v4 = *(_QWORD *)&a2->NdisReserved[24];
  v6 = a2;
  v7 = 0LL;
  p_Type = (KSPIN_LOCK *)&a1->Type;
  if ( a1->Type != 5 )
  {
    v7 = (KSPIN_LOCK *)&a1->Type;
    p_Type = 0LL;
  }
  if ( v4 )
  {
    *(_QWORD *)&a2->NdisReserved[24] = 0LL;
    if ( a2->RequestType == NdisRequestMethod )
    {
      *(_QWORD *)(v4 + 60) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v4 + 68) = a2->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_OWORD *)(v4 + 40) = *(_OWORD *)&a2->DATA.METHOD_INFORMATION.InformationBuffer;
    }
    else
    {
      *(_QWORD *)(v4 + 52) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength;
      *(_QWORD *)(v4 + 40) = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v4 + 48) = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( a3 && (*(_DWORD *)(v4 + 88) & 0x400) == 0 )
    {
      if ( p_Type )
      {
        v9 = KeAcquireSpinLockRaiseToDpc(p_Type + 18);
        v10 = p_Type + 18;
        p_Type[22] = v4;
        p_Type[19] = 0LL;
      }
      else
      {
        v9 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
        v10 = v7 + 12;
        v7[276] = v4;
        v7[65] = 0LL;
      }
      KeReleaseSpinLock(v10, v9);
    }
    v11 = *(_QWORD *)&v6->NdisReserved[24];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        13,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
        (char)v6,
        (char)v6->RequestHandle);
    }
    if ( v11 )
    {
      *(_BYTE *)(v11 + 232) = v6->SupportedRevision;
      *(_DWORD *)(v11 + 152) = *(_DWORD *)&v6->NdisReserved[80];
    }
    ExFreePoolWithTag(v6, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      16,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
  }
  if ( a4 )
    *a4 = (struct _NDIS_OID_REQUEST *)v4;
}
