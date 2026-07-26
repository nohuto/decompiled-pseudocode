/*
 * XREFs of ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14000B530
 * Callers:
 *     ndisWMIDispatch @ 0x140017150 (ndisWMIDispatch.c)
 *     NdisWdfQuerySingleInstance @ 0x140070840 (NdisWdfQuerySingleInstance.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ndisQueryGuidDataSize @ 0x14000BD40 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x14000C100 (ndisQueryGuidData.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400782D0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r12
  _NDIS_GUID *pNdisGuidMap; // rbx
  wchar_t *v9; // rdx
  unsigned int *v10; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *p_TopHwTimestampCapabilities; // r13
  __int64 OffsetInstanceName; // rax
  int GuidData; // esi
  char v14; // r15
  int v15; // edx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *p_Guid; // rdi
  unsigned int i; // ecx
  bool v20; // zf
  KIRQL v21; // al
  _BYTE *v22; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v24; // bp
  __int64 v25; // r9
  unsigned __int8 j; // cl
  char v27; // al
  int v28; // ebx
  int v29; // edx
  ULONG v30; // ebp
  struct _NDIS_WMI_NDK_CAPABILITIES *v31; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v33; // rbx
  unsigned int v34; // edx
  int v35; // ecx
  struct _NDIS_MINIPORT_BLOCK *k; // rdi
  int v37; // eax
  struct _NDIS_MINIPORT_BLOCK *v38; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-50h] BYREF
  char v40; // [rsp+A0h] [rbp+8h]
  unsigned int v41; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v40 = (char)a1;
  v41 = 0;
  v6 = 0LL;
  v38 = 0LL;
  pNdisGuidMap = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      43,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v10 = a5;
  p_TopHwTimestampCapabilities = 0LL;
  *a5 = 0;
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
  {
LABEL_17:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v38, 0, MPREF_WMI_QUERYONE);
      v6 = v38;
    }
LABEL_20:
    p_Guid = &a3->WnodeHeader.Guid;
    if ( !pNdisGuidMap )
    {
      pNdisGuidMap = a1->pNdisGuidMap;
      if ( pNdisGuidMap )
      {
        for ( i = 0; i < a1->cNdisGuidMap; ++i )
        {
          if ( a3 == (struct tagWNODE_SINGLE_INSTANCE *)-24LL )
          {
            if ( (pNdisGuidMap->Flags & 2) == 0 )
              goto LABEL_26;
            v20 = pNdisGuidMap->Oid == 0;
          }
          else
          {
            v9 = (wchar_t *)(*(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1);
            if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
              v9 = (wchar_t *)(*(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4);
            v20 = v9 == 0LL;
          }
          if ( v20 )
            goto LABEL_29;
LABEL_26:
          ++pNdisGuidMap;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          45,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      v14 = v40;
      GuidData = -1073741811;
LABEL_32:
      if ( p_TopHwTimestampCapabilities )
        ndisDereferenceVcPtr(p_TopHwTimestampCapabilities);
      if ( v6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v9,
            20,
            25,
            (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
            (char)v6);
        }
        v21 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
        RefCountTracker = (ULONG_PTR)v6->RefCountTracker;
        v24 = v21;
        if ( RefCountTracker && RefCountTracker - 2 > 1 )
        {
          if ( RefCountTracker == 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
          if ( *(_BYTE *)(RefCountTracker + 2) <= 0x61u )
            ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x61uLL);
          if ( *(_BYTE *)(RefCountTracker + 1) )
          {
            if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
            {
              v33 = RefCountTracker + 6216;
              v34 = *(_DWORD *)(RefCountTracker + 6272);
              v35 = (unsigned __int16)v34 >> 1;
              if ( v34 >> 17 < 0x3FFE && v35 == (v34 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 6216));
                *(_DWORD *)(v33 + 56) &= 0x10001u;
              }
              else
              {
                if ( v35 == 0 && (v34 & 1) == 0 )
                  ndisReportRefcountImbalance((ULONG_PTR)v6->RefCountTracker, 0x61u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 6216), 0);
              }
            }
          }
          else
          {
            v25 = *(_QWORD *)(RefCountTracker + 8);
            if ( v25 )
            {
              for ( j = 0; j < *(_BYTE *)(RefCountTracker + 3); ++j )
              {
                v22 = (_BYTE *)(v25 + 2LL * j);
                if ( *v22 == 97 )
                {
                  v27 = v22[1];
                  if ( v27 )
                  {
                    v22[1] = v27 - 1;
                    goto LABEL_55;
                  }
                }
              }
            }
            if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 28), 1u) )
              ndisReportRefcountImbalance(RefCountTracker, 0x61u);
          }
        }
LABEL_55:
        v28 = v6->Ref.ReferenceCount - 1;
        v6->Ref.ReferenceCount = v28;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v22,
            20,
            14,
            (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
            (char)v6,
            v28);
        }
        KeReleaseSpinLock(&v6->Ref.SpinLock, v24);
        if ( !v28 )
        {
          RemoveReadyEvent = v6->RemoveReadyEvent;
          if ( RemoveReadyEvent )
            KeSetEvent(RemoveReadyEvent, 0, 0);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v29,
            20,
            26,
            (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
            (char)v6);
        }
      }
      goto LABEL_14;
    }
LABEL_29:
    GuidData = ndisQueryGuidDataSize(&v41, a1, pNdisGuidMap, p_TopHwTimestampCapabilities, &a3->WnodeHeader.Guid, v6);
    if ( GuidData >= 0 )
    {
      LODWORD(v9) = v41;
      v30 = v41 + a3->DataBlockOffset;
      if ( v30 < v41 )
      {
        GuidData = -1073741823;
      }
      else
      {
        if ( v42 >= v30 )
        {
          v31 = (struct _NDIS_WMI_NDK_CAPABILITIES *)((char *)a3 + a3->DataBlockOffset);
          a3->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
          a3->WnodeHeader.BufferSize = v30;
          a3->SizeDataBlock = (unsigned int)v9;
          v14 = v40;
          GuidData = ndisQueryGuidData(
                       v31,
                       (unsigned int)v9,
                       v40,
                       (__int64)p_TopHwTimestampCapabilities,
                       p_Guid,
                       (char)v6);
          if ( GuidData < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = 2;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v9,
                18,
                47,
                (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                v40);
            }
          }
          else
          {
            *v10 = v30;
            GuidData = 0;
          }
          goto LABEL_32;
        }
        if ( v42 >= 0x38 )
        {
          a3->WnodeHeader.Flags |= 0x20u;
          v37 = 56;
          a3->WnodeHeader.BufferSize = 56;
          GuidData = 0;
          a3->OffsetInstanceName = v30;
        }
        else
        {
          GuidData = -1073741789;
          v37 = 4;
        }
        *v10 = v37;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        18,
        46,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
      v14 = v40;
      goto LABEL_32;
    }
    v14 = v40;
    goto LABEL_32;
  }
  OffsetInstanceName = a3->OffsetInstanceName;
  v9 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  String2.Buffer = v9;
  String2.MaximumLength = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength < 0x30u || !v9 || v9[5] != 58 )
  {
    if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          12,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
LABEL_10:
      GuidData = -1073741162;
      goto LABEL_11;
    }
LABEL_19:
    if ( p_TopHwTimestampCapabilities )
      goto LABEL_20;
    goto LABEL_17;
  }
  for ( k = (struct _NDIS_MINIPORT_BLOCK *)a1->WmiEnabledVcs.Flink; ; k = *(struct _NDIS_MINIPORT_BLOCK **)&k->Header.Type )
  {
    if ( k == (struct _NDIS_MINIPORT_BLOCK *)&a1->WmiEnabledVcs )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v9,
          18,
          11,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1,
          (__int64)&String2);
      goto LABEL_10;
    }
    p_TopHwTimestampCapabilities = (struct _NDIS_CO_VC_PTR_BLOCK *)&k[-1].TopHwTimestampCapabilities;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)&k[-1].OpenFileHandles, &String2, 1u) )
      break;
  }
  if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&k[-1].TopHwTimestampCapabilities) )
  {
    v10 = a5;
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      18,
      10,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  GuidData = -1073741823;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      18,
      44,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  v14 = v40;
LABEL_14:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      18,
      48,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      v14,
      GuidData);
  }
  return (unsigned int)GuidData;
}
