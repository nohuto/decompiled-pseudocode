/*
 * XREFs of NdisCoRequest @ 0x1400D7740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140065BF0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequest @ 0x14008ACE0 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1400D7B00 (NdisCoRequestComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisCoRequest(
        NDIS_HANDLE NdisBindingHandle,
        struct _NDIS_CO_AF_BLOCK *P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        char *a5)
{
  KIRQL v10; // al
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v12; // dl
  unsigned int v13; // ebp
  void *v14; // r14
  void *v15; // r15
  int (__fastcall *ClRequestHandler)(void *, void *, void *, _NDIS_REQUEST *); // rbp
  KIRQL v17; // al
  NDIS_STATUS v18; // eax
  __int64 OidRequest; // rax
  _QWORD *v20; // rsi
  int v21; // ecx
  _DWORD *v22; // r14
  _DWORD *v23; // r15
  _DWORD *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r11
  char v30; // [rsp+70h] [rbp+8h]
  PVOID ClientContext; // [rsp+90h] [rbp+28h]

  v30 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      (char)P,
      a5);
  if ( *((_DWORD *)a5 + 10) != -33554422 || *((_DWORD *)a5 + 8) != 1 || !P || !(unsigned __int8)ndisReferenceAf(P) )
  {
    OidRequest = ExAllocatePool2(64LL, 248LL, 1701987406LL);
    v20 = (_QWORD *)OidRequest;
    if ( !OidRequest )
    {
      v13 = -1073741670;
      goto LABEL_31;
    }
    v21 = *((_DWORD *)a5 + 8);
    *(_DWORD *)OidRequest = 16253334;
    *(_DWORD *)(OidRequest + 4) = v21;
    v22 = (_DWORD *)(OidRequest + 52);
    if ( v21 == 12 )
    {
      v23 = (_DWORD *)(OidRequest + 56);
    }
    else
    {
      *(_DWORD *)(OidRequest + 32) = *((_DWORD *)a5 + 10);
      v23 = (_DWORD *)(OidRequest + 56);
      *(_QWORD *)(OidRequest + 40) = *((_QWORD *)a5 + 6);
      *(_DWORD *)(OidRequest + 48) = *((_DWORD *)a5 + 14);
      *(_DWORD *)(OidRequest + 52) = *((_DWORD *)a5 + 15);
      *(_DWORD *)(OidRequest + 56) = *((_DWORD *)a5 + 16);
    }
    *(_QWORD *)(OidRequest + 104) = NdisBindingHandle;
    *(_QWORD *)(OidRequest + 96) = a5;
    v13 = NdisCoOidRequest(NdisBindingHandle, P, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
    if ( v13 == 259 )
      goto LABEL_31;
    v24 = (_DWORD *)v20[12];
    v25 = v20[14];
    v26 = v20[16];
    v27 = v20[17];
    v28 = v20[13];
    if ( v24[8] != 12 )
    {
      v24[15] = *v22;
      v24[16] = *v23;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v28 + 1088))(v13, v27, v26, v25, v24);
    ExFreePoolWithTag(v20, 0);
    goto LABEL_30;
  }
  if ( P->ClMajorNdisVersion < 6 )
  {
    v14 = 0LL;
    *(_OWORD *)(a5 + 72) = 0LL;
    v15 = 0LL;
    *(_OWORD *)(a5 + 88) = 0LL;
    ClRequestHandler = P->ClientEntries.ClRequestHandler;
    ClientContext = P->ClientContext;
    *((_QWORD *)a5 + 11) = P->CallMgrContext;
    *((_QWORD *)a5 + 9) = P->CallMgrEntries->CmRequestCompleteHandler;
    if ( NdisVcHandle )
    {
      *((_QWORD *)a5 + 10) = *((_QWORD *)NdisVcHandle + 18);
      v14 = (void *)*((_QWORD *)NdisVcHandle + 3);
    }
    if ( NdisPartyHandle )
    {
      *((_QWORD *)a5 + 12) = *((_QWORD *)NdisPartyHandle + 18);
      v15 = (void *)*((_QWORD *)NdisPartyHandle + 2);
    }
    if ( !ClRequestHandler )
    {
      v13 = -1073741637;
      ndisDereferenceAf((KSPIN_LOCK *)P);
      goto LABEL_31;
    }
    v17 = KeAcquireSpinLockRaiseToDpc(&P->Lock);
    p_Lock = &P->Lock;
    v12 = v17;
    if ( (P->Flags & 0x40000000) == 0 )
    {
      KeReleaseSpinLock(p_Lock, v17);
      v18 = ClRequestHandler(ClientContext, v14, v15, (_NDIS_REQUEST *)a5);
      v13 = v18;
      if ( v18 == 259 )
        goto LABEL_31;
      NdisCoRequestComplete(v18, P, NdisVcHandle, NdisPartyHandle, a5);
      goto LABEL_30;
    }
LABEL_9:
    P->CloseAfRequested = 1;
    P->CloseAfNdisRequest = (_NDIS_REQUEST *)a5;
    KeReleaseSpinLock(p_Lock, v12);
LABEL_30:
    v13 = 259;
    goto LABEL_31;
  }
  P->Ndis5CmRequest = (_NDIS_REQUEST *)a5;
  v10 = KeAcquireSpinLockRaiseToDpc(&P->Lock);
  p_Lock = &P->Lock;
  v12 = v10;
  if ( (P->Flags & 0x40000000) != 0 )
    goto LABEL_9;
  KeReleaseSpinLock(p_Lock, v10);
  v13 = P->ClientChars.ClNotifyCloseAfHandler(P->ClientContext);
  if ( v13 != 259 )
  {
    P->Ndis5CmRequest = 0LL;
    ndisDereferenceAf((KSPIN_LOCK *)P);
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      v30,
      (char)P,
      a5);
  return v13;
}
