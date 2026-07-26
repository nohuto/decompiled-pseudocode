/*
 * XREFs of NdisCoOidRequest @ 0x14008ACE0
 * Callers:
 *     NdisCoRequest @ 0x1400D7740 (NdisCoRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     NdisMCoOidRequestComplete @ 0x140041B80 (NdisMCoOidRequestComplete.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ndisCoOidRequestToRequest @ 0x1400798A0 (ndisCoOidRequestToRequest.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v9; // rsi
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST); // rbp
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rbx
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  char v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  bool v18; // zf
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r13
  KIRQL v23; // cl
  int v24; // edx
  KIRQL v25; // bl
  KIRQL v26; // dl
  __int64 v27; // rbp
  __int64 v28; // rax
  struct _GUID *v29; // [rsp+20h] [rbp-68h]
  char v30[8]; // [rsp+30h] [rbp-58h]
  __int64 (__fastcall *v31)(__int64, __int64, __int64, __int64); // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h]

  v9 = OidRequest;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      (char)NdisAfHandle,
      OidRequest);
  *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
  if ( v9->Header.Type != 0x96 || v9->Header.Size < 0xECu )
  {
    v10 = -1073741823;
    goto LABEL_29;
  }
  if ( !v9->Header.Revision )
  {
    v10 = -1071448020;
    goto LABEL_29;
  }
  if ( !NdisAfHandle )
  {
    v22 = *((_QWORD *)NdisBindingHandle + 2);
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 96));
    *(_QWORD *)(v22 + 520) = KeGetCurrentThread();
    v24 = *((_DWORD *)NdisBindingHandle + 56);
    LOBYTE(OidRequest) = v23;
    if ( (v24 & 0x8000) != 0 )
    {
      v10 = -1073676286;
    }
    else
    {
      if ( (*(_DWORD *)(v22 + 120) & 0x300000) == 0 )
      {
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 75);
        NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)NdisBindingHandle + 74), 6u);
        ++*((_DWORD *)NdisBindingHandle + 57);
        KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 75, v25);
        v26 = (unsigned __int8)OidRequest;
        v27 = 0LL;
        *(_QWORD *)(v22 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 96), v26);
        *(_DWORD *)&v9->NdisReserved[16] |= 0x20u;
        *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
        *(_QWORD *)&v9->NdisReserved[56] = 0LL;
        if ( NdisVcHandle )
        {
          if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
            v28 = *((_QWORD *)NdisVcHandle + 3);
          else
            v28 = *((_QWORD *)NdisVcHandle + 18);
          *(_QWORD *)&v9->NdisReserved[56] = v28;
        }
        if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
        {
          if ( v9->RequestType != NdisRequestSetInformation )
            LODWORD(v27) = -1073741823;
          v10 = v27;
        }
        else
        {
          if ( NdisVcHandle )
            v27 = *((_QWORD *)NdisVcHandle + 25);
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v22 + 3760) + 552LL))(
                  *(_QWORD *)(v22 + 2232),
                  v27,
                  v9);
        }
        if ( v10 != 259 )
        {
          NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, v9, v10);
          v10 = 259;
        }
        goto LABEL_29;
      }
      v10 = -1073676275;
    }
    *(_QWORD *)(v22 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 96), v23);
    goto LABEL_29;
  }
  v11 = 0LL;
  v12 = 0LL;
  v31 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v14 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((int *)NdisAfHandle + 2) < 0 )
  {
    KeReleaseSpinLock(v14, v13);
    v10 = -1073741823;
    goto LABEL_29;
  }
  ++*((_DWORD *)NdisAfHandle + 3);
  KeReleaseSpinLock(v14, v13);
  *(_DWORD *)&v9->NdisReserved[16] |= 8u;
  OidRequest = 0LL;
  KeInitializeEvent((PRKEVENT)&v9->NdisReserved[40], NotificationEvent, 0);
  if ( *((NDIS_HANDLE *)NdisAfHandle + 46) == NdisBindingHandle )
  {
    if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
    {
      v15 = 1;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*((_QWORD *)NdisAfHandle + 3) + 120LL);
      v31 = v12;
    }
    else
    {
      v15 = 0;
      v11 = *(__int64 (__fastcall **)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)NdisAfHandle
                                                                                               + 4)
                                                                                             + 120LL);
    }
    v16 = *((_QWORD *)NdisAfHandle + 47);
    v32 = *((_QWORD *)NdisAfHandle + 6);
    *(_QWORD *)&v9->NdisReserved[64] = v16;
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
      OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisVcHandle + 18);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
      v17 = *((_QWORD *)NdisPartyHandle + 1);
      goto LABEL_25;
    }
  }
  else
  {
    if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    {
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)NdisAfHandle + 10);
      v15 = 1;
      v31 = v12;
    }
    else
    {
      v11 = (__int64 (__fastcall *)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST))*((_QWORD *)NdisAfHandle + 29);
      v15 = 0;
    }
    v32 = *((_QWORD *)NdisAfHandle + 47);
    *(_QWORD *)&v9->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
      OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisVcHandle + 3);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
      v17 = *((_QWORD *)NdisPartyHandle + 2);
      goto LABEL_25;
    }
  }
  v17 = 0LL;
LABEL_25:
  if ( v15 )
    v18 = v12 == 0LL;
  else
    v18 = v11 == 0LL;
  if ( v18 )
  {
    v10 = -1073741637;
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v12,
      v9);
  if ( v15 )
    v20 = ndisCoOidRequestToRequest(&v31, v32, (__int64)OidRequest, v17, (__int64)v9);
  else
    v20 = v11(v32, OidRequest, v17, v9);
  v10 = v20;
  if ( v20 != 259 )
  {
    v21 = *(_QWORD *)&v9->NdisReserved[32];
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, unsigned int))(v21 + 1160))(
        *(_QWORD *)&v9->NdisReserved[64],
        *(_QWORD *)&v9->NdisReserved[56],
        *(_QWORD *)&v9->NdisReserved[40],
        v9,
        v10);
    }
    else
    {
      if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
      {
        v29 = *(struct _GUID **)&v9->NdisReserved[24];
        *(_DWORD *)&v29[3].Data4[4] = v9->DATA.QUERY_INFORMATION.BytesWritten;
        v29[4].Data1 = v9->DATA.QUERY_INFORMATION.BytesNeeded;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct _GUID *))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
          v10,
          *(_QWORD *)&v9->NdisReserved[64],
          *(_QWORD *)&v9->NdisReserved[56],
          *(_QWORD *)&v9->NdisReserved[40],
          v29);
        ExFreePoolWithTag(v9, 0);
        ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
        v10 = 259;
        goto LABEL_29;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, unsigned int))(*((_QWORD *)NdisAfHandle + 4)
                                                                                      + 128LL))(
        *(_QWORD *)&v9->NdisReserved[64],
        *(_QWORD *)&v9->NdisReserved[56],
        *(_QWORD *)&v9->NdisReserved[40],
        v9,
        v10);
    }
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
    v10 = 259;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v30 = v10;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v9,
      *(_QWORD *)v30);
  }
  return v10;
}
