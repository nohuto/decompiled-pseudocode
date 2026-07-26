/*
 * XREFs of NdisFOidRequestComplete @ 0x1400439C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x140050990 (WPP_RECORDER_SF_qDqqd.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rbx
  UCHAR *NdisReserved; // rbp
  PNDIS_OID_REQUEST v6; // rdi
  KSPIN_LOCK *v8; // r15
  KSPIN_LOCK v9; // rsi
  KSPIN_LOCK *v10; // rbp
  KIRQL v11; // al
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // rbp
  int v14; // edx
  int v15; // r8d
  KIRQL v16; // al
  KIRQL v17; // bl
  int Context; // [rsp+20h] [rbp-58h]

  v3 = *((_QWORD *)NdisFilterHandle + 23);
  NdisReserved = OidRequest->NdisReserved;
  v6 = OidRequest;
  if ( v3 != -1 )
  {
    if ( KeCancelTimer((PKTIMER)(v3 + 64)) )
    {
      KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
      *(_DWORD *)(v3 + 160) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v3 + 160), 0);
    }
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    v8 = 0LL;
    v9 = *(_QWORD *)&v6->NdisReserved[24];
    v10 = (KSPIN_LOCK *)NdisFilterHandle;
    if ( *(_BYTE *)NdisFilterHandle != 5 )
    {
      v8 = (KSPIN_LOCK *)NdisFilterHandle;
      v10 = 0LL;
    }
    if ( !v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          16,
          (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x14u,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)NdisFilterHandle,
            (char)v6,
            Status);
      }
      return;
    }
    *(_QWORD *)&v6->NdisReserved[24] = 0LL;
    if ( v6->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v9 + 60) = v6->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 64) = v6->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v9 + 68) = v6->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 56) = v6->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v10 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v10 + 18);
        v12 = v10 + 18;
        v10[22] = v9;
        v10[19] = 0LL;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v8 + 12);
        v12 = v8 + 12;
        v8[276] = v9;
        v8[65] = 0LL;
      }
      KeReleaseSpinLock(v12, v11);
    }
    v13 = *(_QWORD *)&v6->NdisReserved[24];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0xDu,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
        (char)v6);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = v6->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *(_DWORD *)&v6->NdisReserved[80];
    }
    ExFreePoolWithTag(v6, 0);
    NdisReserved = (UCHAR *)(v9 + 72);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        v15,
        21,
        Context,
        (char)NdisFilterHandle,
        *(_DWORD *)(v9 + 32),
        (char)v6,
        v9,
        Status);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x16u,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)NdisFilterHandle,
      v6->DATA.QUERY_INFORMATION.Oid,
      (char)v6,
      Status);
  }
  *((_DWORD *)NdisReserved + 2) = Status;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
         NdisFilterHandle,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v17 = v16;
    *((_BYTE *)NdisFilterHandle + 233) = 1;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v17);
  }
}
