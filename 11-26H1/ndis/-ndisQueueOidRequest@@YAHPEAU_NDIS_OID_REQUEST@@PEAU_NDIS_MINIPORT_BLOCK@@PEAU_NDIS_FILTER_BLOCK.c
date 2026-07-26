/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0
 * Callers:
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x14000DD20 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14000EF30 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFOidRequest @ 0x14000F320 (NdisFOidRequest.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1400C0AC0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016770 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140016830 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140029700 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140043D60 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400472F0 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_Dq @ 0x140047D80 (WPP_RECORDER_SF_Dq.c)
 *     ?ndisFDoOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004B710 (-ndisFDoOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008F860 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008FAC0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisQueueOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // r15
  struct _NDIS_FILTER_BLOCK *v7; // rsi
  NDIS_OID Oid; // ecx
  struct _NDIS_FILTER_BLOCK *NextRequestHandle; // rbx
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v12; // al
  _REFERENCE_EX *p_PnPRef; // rdi
  __int64 v14; // rdx
  KIRQL v15; // r12
  unsigned __int16 ReferenceCount; // cx
  KIRQL v17; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  NDIS_REFCOUNT_HANDLE__ *v19; // r14
  unsigned int v20; // edx
  bool v21; // zf
  ULONG_PTR v22; // r14
  unsigned int AnyActiveRefTag; // eax
  __int64 v24; // r10
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // cl
  _BYTE *v27; // rdx
  char v28; // al
  struct _NDIS_REFCOUNT_BLOCK *v29; // rax
  struct _NDIS_REFCOUNT_BLOCK *v30; // r14
  KSPIN_LOCK *p_SpinLock; // rdi
  __int64 v32; // rdx
  KIRQL v33; // r14
  unsigned __int16 v34; // ax
  NDIS_REFCOUNT_HANDLE__ *v35; // rcx
  KIRQL v36; // al
  NDIS_REFCOUNT_HANDLE__ *v37; // rcx
  __int64 v38; // rdx
  KIRQL v39; // bl
  KIRQL v40; // al
  UCHAR *NdisReserved; // rbx
  unsigned int v42; // edi
  _QWORD *p_Flink; // rax
  int v44; // eax
  char v45; // cl
  unsigned int v46; // eax
  struct _NDIS_FILTER_BLOCK **Blink; // rcx
  KIRQL v48; // al
  KIRQL v49; // bl
  unsigned int v50; // eax
  KIRQL v52; // [rsp+40h] [rbp-C0h]
  KIRQL v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v55[248]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a2;
  v7 = 0LL;
  memset(v55, 0, sizeof(v55));
  Oid = a1->DATA.QUERY_INFORMATION.Oid;
  v54 = 0;
  if ( Oid == 66055 )
  {
    if ( a2->MajorNdisVersion < 6u )
    {
      memset(&v55[112], 0, 136);
      memset(v55, 0, 104);
      *(_QWORD *)&v55[104] = &ndisIntReqNsi;
      *(_DWORD *)&v55[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v55[168]);
      *(_DWORD *)v55 = 15466902;
      *(_DWORD *)&v55[32] = 65799;
      *(_QWORD *)&v55[4] = 2LL;
      *(_QWORD *)&v55[40] = &v54;
      *(_DWORD *)&v55[48] = 4;
      ndisQuerySetMiniport(v5, 0LL, (struct _NDIS_OID_REQUEST *)v55, 0, 0LL);
      *(_QWORD *)&v55[104] = &ndisIntReqNsi;
      memset(&v55[112], 0, 136);
      memset(v55, 0, 104);
      *(_DWORD *)&v55[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v55[168]);
      *(_DWORD *)v55 = 15466902;
      *(_DWORD *)&v55[32] = 65812;
      *(_QWORD *)&v55[4] = 2LL;
      *(_QWORD *)&v55[40] = &v54;
      *(_DWORD *)&v55[48] = 4;
      ndisQuerySetMiniport(v5, 0LL, (struct _NDIS_OID_REQUEST *)v55, 0, 0LL);
    }
  }
  else if ( Oid == 65798 || Oid == 65799 || Oid == 65812 || (*(_DWORD *)&a1->NdisReserved[16] & 0x100000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        (int)a3,
        203,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        Oid,
        (char)a1);
    }
    NextRequestHandle = (struct _NDIS_FILTER_BLOCK *)v5;
    p_Lock = &v5->Lock;
    goto LABEL_59;
  }
  p_Lock = &v5->Lock;
  v12 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
  v5->MiniportThread = KeGetCurrentThread();
  v52 = v12;
  if ( a3 )
    NextRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextRequestHandle;
  else
    NextRequestHandle = (struct _NDIS_FILTER_BLOCK *)v5->Next.RequestHandle;
  if ( a4 )
  {
    p_PnPRef = &a4->PnPRef;
    v15 = KeAcquireSpinLockRaiseToDpc(&a4->PnPRef.SpinLock);
    if ( !a4->PnPRef.Closing )
    {
      ReferenceCount = a4->PnPRef.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
      }
      else
      {
        LOBYTE(v14) = 17;
        a4->PnPRef.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(a4->PnPRef.RefCountTracker, v14);
        KeReleaseSpinLock(&a4->PnPRef.SpinLock, v15);
        if ( a4->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
        {
          NextRequestHandle = a4;
        }
        else if ( a4->NextRequestHandle )
        {
          NextRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextRequestHandle;
        }
        v17 = KeAcquireSpinLockRaiseToDpc(&a4->PnPRef.SpinLock);
        RefCountTracker = a4->PnPRef.RefCountTracker;
        v15 = v17;
        if ( RefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)2 && RefCountTracker != (NDIS_REFCOUNT_HANDLE__ *)3 )
        {
          if ( (unsigned __int64)RefCountTracker < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)RefCountTracker, 0LL);
          if ( *((_BYTE *)RefCountTracker + 2) <= 0x11u )
            ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, 0x11uLL);
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
            {
              v19 = RefCountTracker + 274;
              v20 = *((_DWORD *)RefCountTracker + 288);
              if ( v20 >> 17 < 0x3FFE && (unsigned __int16)v20 >> 1 == (v20 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 274));
                *((_DWORD *)v19 + 14) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v20 >> 1) && (v20 & 1) == 0 )
                  ndisReportRefcountImbalance((ULONG_PTR)p_PnPRef->RefCountTracker, 0x11u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 274), 0);
              }
            }
          }
          else
          {
            v24 = *((_QWORD *)RefCountTracker + 1);
            if ( v24 && (v25 = *((_BYTE *)RefCountTracker + 3), v26 = 0, v25) )
            {
              while ( 1 )
              {
                v27 = (_BYTE *)(v24 + 2LL * v26);
                if ( *v27 == 17 )
                {
                  v28 = v27[1];
                  if ( v28 )
                    break;
                }
                if ( ++v26 >= v25 )
                  goto LABEL_43;
              }
              v27[1] = v28 - 1;
            }
            else
            {
LABEL_43:
              if ( !_bittestandreset((signed __int32 *)RefCountTracker + 4, 0x11u) )
                ndisReportRefcountImbalance((ULONG_PTR)RefCountTracker, 0x11u);
            }
          }
        }
        v21 = p_PnPRef->ReferenceCount-- == 1;
        if ( v21 && !p_PnPRef->ZeroBased )
        {
          v22 = (ULONG_PTR)p_PnPRef->RefCountTracker;
          if ( v22 )
          {
            AnyActiveRefTag = ndisGetAnyActiveRefTag(p_PnPRef->RefCountTracker);
            if ( AnyActiveRefTag != -2 )
              ndisBugCheckEx(0x1EuLL, 4uLL, v22, AnyActiveRefTag);
            v29 = ndisRefCountBlockFromRefCountHandle(v22);
            v30 = v29;
            if ( v29 )
            {
              ndisFreeRefCountAuxiliaryMemory(v29);
              ExFreePoolWithTag(v30, 0);
            }
          }
          p_PnPRef->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
      }
    }
    KeReleaseSpinLock(&p_PnPRef->SpinLock, v15);
    p_Lock = &v5->Lock;
  }
  if ( NextRequestHandle->Header.Type != 5 )
    goto LABEL_58;
  while ( 1 )
  {
    p_SpinLock = &NextRequestHandle->PnPRef.SpinLock;
    v7 = NextRequestHandle;
    v33 = KeAcquireSpinLockRaiseToDpc(&NextRequestHandle->PnPRef.SpinLock);
    if ( !NextRequestHandle->PnPRef.Closing )
      break;
LABEL_55:
    KeReleaseSpinLock(p_SpinLock, v33);
    NextRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextRequestHandle->NextRequestHandle;
    v7 = 0LL;
    if ( NextRequestHandle->Header.Type != 5 )
      goto LABEL_58;
  }
  v34 = NextRequestHandle->PnPRef.ReferenceCount;
  if ( v34 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_55;
  }
  v35 = NextRequestHandle->PnPRef.RefCountTracker;
  LOBYTE(v32) = 15;
  NextRequestHandle->PnPRef.ReferenceCount = v34 + 1;
  NdisReferenceWithTag(v35, v32);
  KeReleaseSpinLock(p_SpinLock, v33);
LABEL_58:
  v5->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v52);
LABEL_59:
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(v5, (unsigned __int8)a2, a1);
  if ( KeGetCurrentIrql() || !PsIsSystemThread(KeGetCurrentThread()) )
  {
    v42 = ndisQueueRequestWorkItem((struct _NDIS_MINIPORT_BLOCK *)NextRequestHandle, a1, NextRequestHandle->Header.Type);
    goto LABEL_97;
  }
  if ( v7 )
  {
    v36 = KeAcquireSpinLockRaiseToDpc(&v7->PnPRef.SpinLock);
    v37 = v7->PnPRef.RefCountTracker;
    LOBYTE(v38) = 13;
    ++v7->PnPRef.ReferenceCount;
    v39 = v36;
    NdisReferenceWithTag(v37, v38);
    KeReleaseSpinLock(&v7->PnPRef.SpinLock, v39);
    v40 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v5->MiniportThread = KeGetCurrentThread();
    v53 = v40;
    KeAcquireSpinLockAtDpcLevel(&v7->Lock);
    NdisReserved = a1->NdisReserved;
    v7->LockThread = KeGetCurrentThread();
    *(_QWORD *)a1->NdisReserved = 0LL;
    v42 = -1073741823;
    *(_QWORD *)&a1->NdisReserved[8] = 0LL;
    if ( (v7->Miniport->PnPFlags & 0x100) != 0 )
      goto LABEL_88;
    p_Flink = &v7->OidRequestList.Flink->Flink;
    if ( p_Flink != (_QWORD *)&v7->OidRequestList )
    {
      while ( p_Flink != (_QWORD *)NdisReserved )
      {
        p_Flink = (_QWORD *)*p_Flink;
        if ( p_Flink == (_QWORD *)&v7->OidRequestList )
          goto LABEL_68;
      }
LABEL_88:
      v7->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v7->Lock);
      v5->MiniportThread = 0LL;
      KeReleaseSpinLock(&v5->Lock, v53);
      if ( !v42 )
      {
        ndisFDoOidRequest(v7);
        v42 = 259;
      }
      ndisDereferenceRef(&v7->PnPRef.SpinLock, 0xDu);
LABEL_97:
      if ( v42 != 259 && v7 )
        ndisDereferenceRef(&v7->PnPRef.SpinLock, 0xFu);
      return v42;
    }
LABEL_68:
    if ( (unsigned int)dword_14011C6C0 > 4
      && (qword_14011C6D0 & 0x400) != 0
      && (qword_14011C6D8 & 0x400) == qword_14011C6D8 )
    {
      v44 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
      if ( v44 != 0x10000000 )
      {
        if ( v44 )
        {
          if ( v44 != 0x20000000 )
            goto LABEL_85;
        }
        else
        {
          if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress
            || (ndisAzOidTelemetryFilter & 2) != 0 && (unsigned __int8)IsOidInFilterList(a1->DATA.QUERY_INFORMATION.Oid) )
          {
            v45 = 1;
            v46 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
          }
          else
          {
            v45 = 0;
            v46 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
          }
          *(_DWORD *)&a1->NdisReserved[16] = v46;
          if ( !v45 )
            goto LABEL_85;
        }
        if ( *(_QWORD *)&a1->NdisReserved[24] )
          TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(v7, a1);
        else
          TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(v7, a1);
      }
    }
LABEL_85:
    v42 = 0;
    Blink = (struct _NDIS_FILTER_BLOCK **)v7->OidRequestList.Blink;
    if ( *Blink != (struct _NDIS_FILTER_BLOCK *)&v7->OidRequestList )
      __fastfail(3u);
    *(_QWORD *)NdisReserved = &v7->OidRequestList;
    *(_QWORD *)&a1->NdisReserved[8] = Blink;
    *Blink = (struct _NDIS_FILTER_BLOCK *)NdisReserved;
    v7->OidRequestList.Blink = (_LIST_ENTRY *)NdisReserved;
    goto LABEL_88;
  }
  if ( ndisReferenceMiniport(v5, MPREF_OID_QUEUEING) )
  {
    v48 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v5->MiniportThread = KeGetCurrentThread();
    v49 = v48;
    v50 = ndisMQueueOidRequest(v5, a1);
    v5->MiniportThread = 0LL;
    v42 = v50;
    KeReleaseSpinLock(p_Lock, v49);
    if ( !v42 )
    {
      ndisMDoOidRequest(v5);
      v42 = 259;
    }
    ndisDereferenceMiniport(v5, MPREF_OID_QUEUEING);
    goto LABEL_97;
  }
  return (unsigned int)-1073741823;
}
