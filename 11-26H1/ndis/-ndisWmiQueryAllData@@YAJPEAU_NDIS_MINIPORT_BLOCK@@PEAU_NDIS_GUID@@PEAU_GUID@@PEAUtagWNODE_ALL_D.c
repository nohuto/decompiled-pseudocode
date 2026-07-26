/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210
 * Callers:
 *     ndisWMIDispatch @ 0x140017150 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x140096A60 (NdisWdfQueryAllData.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ndisQueryGuidDataSize @ 0x14000BD40 (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x14000C100 (ndisQueryGuidData.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400782D0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  _NDIS_GUID *pNdisGuidMap; // rdi
  int GuidDataSize; // ebp
  GUID *p_Guid; // rdx
  unsigned int i; // ecx
  bool v14; // zf
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v16; // ecx
  ULONG v17; // eax
  __int64 v18; // r13
  unsigned __int16 *v19; // rsi
  unsigned int v20; // edx
  unsigned int v21; // edx
  int v22; // r12d
  ULONG v23; // r12d
  struct _NDIS_GUID *v24; // r9
  ULONG v25; // edi
  ULONG v26; // r13d
  int v27; // r9d
  ULONG v28; // ecx
  ULONG v29; // eax
  struct _NDIS_MINIPORT_BLOCK *Flink; // rsi
  struct _NDIS_CO_VC_PTR_BLOCK *p_TopHwTimestampCapabilities; // rdi
  unsigned int v33; // ebp
  unsigned int v34; // eax
  struct _NDIS_MINIPORT_BLOCK *v35; // rcx
  ULONG v36; // r13d
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned int v39; // eax
  ULONG v40; // ecx
  LARGE_INTEGER v41; // rax
  char v42[8]; // [rsp+30h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+30h] [rbp-78h]
  char v44; // [rsp+40h] [rbp-68h]
  unsigned int v45; // [rsp+44h] [rbp-64h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v47; // [rsp+50h] [rbp-58h]
  struct _NDIS_MINIPORT_BLOCK *v48; // [rsp+58h] [rbp-50h] BYREF
  int v49; // [rsp+60h] [rbp-48h]
  unsigned int v50; // [rsp+64h] [rbp-44h]
  _DWORD *v51; // [rsp+68h] [rbp-40h]
  __int64 v52; // [rsp+70h] [rbp-38h]

  v45 = 0;
  v7 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  pNdisGuidMap = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      34,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a6 = 0;
  if ( a5 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *a6 = 4;
    goto LABEL_54;
  }
  if ( pNdisGuidMap )
  {
LABEL_18:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v48, 0, MPREF_WMI_QUERYALL);
      v7 = v48;
      v47 = v48;
    }
    if ( (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_NDK_STATE.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4)
      && (*(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1
       || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4)
      && (a1->Flags & 0x20000) != 0 )
    {
      v16 = a1->VcCount + 1;
      a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
      v44 = 0;
      v49 = v16;
      v17 = 8 * v16 + 72;
      a4->OffsetInstanceNameOffsets = v17;
      v51 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v17);
      v18 = (v17 + 4 * v16 + 7) & 0xFFFFFFF8;
      v19 = (unsigned __int16 *)((char *)a4 + v18);
      v48 = (struct _NDIS_MINIPORT_BLOCK *)((char *)a4 + v18);
      GuidDataSize = ndisQueryGuidDataSize((int *)&v45, a1, pNdisGuidMap, 0LL, a3, v7);
      if ( GuidDataSize < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_52;
        v27 = 40;
        goto LABEL_80;
      }
      v21 = a5;
      v22 = a1->pAdapterInstanceName->Length + 9;
      v46 = (v45 + 7) & 0xFFFFFFF8;
      v23 = v18 + v46 + (v22 & 0xFFFFFFF8);
      if ( a5 >= v23 )
      {
        *v51 = v18;
        *v19 = a1->pAdapterInstanceName->Length;
        memmove(v19 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
        v24 = pNdisGuidMap;
        v25 = v45;
        v26 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v18;
        GuidDataSize = ndisQueryGuidData(
                         (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v26),
                         v45,
                         (__int64)a1,
                         v24,
                         0LL,
                         a3,
                         v47);
        if ( GuidDataSize < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_52;
          v27 = 39;
          goto LABEL_80;
        }
        v21 = a5;
        a4->FixedInstanceSize = v26;
        LODWORD(v18) = v46 + v26;
        a4[1].WnodeHeader.BufferSize = v25;
        v48 = (struct _NDIS_MINIPORT_BLOCK *)((char *)a4 + (unsigned int)v18);
      }
      v28 = v49;
      v29 = 1;
      v46 = 1;
      if ( v49 == 1 )
      {
        if ( v21 < v23 )
        {
          a4->WnodeHeader.Flags |= 0x20u;
          a4->DataBlockOffset = v23;
          v23 = 56;
          a4->WnodeHeader.BufferSize = 56;
        }
        else
        {
          a4->WnodeHeader.BufferSize = v23;
          a4->InstanceCount = 1;
        }
        GuidDataSize = 0;
        *a6 = v23;
      }
      else
      {
        Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->WmiEnabledVcs.Flink;
        if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->WmiEnabledVcs )
        {
          a4->InstanceCount = 1;
          a4->WnodeHeader.BufferSize = v23;
          GuidDataSize = 0;
          *a6 = v23;
        }
        else
        {
          while ( v29 < v28 )
          {
            p_TopHwTimestampCapabilities = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].TopHwTimestampCapabilities;
            if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].TopHwTimestampCapabilities) )
            {
              if ( p_TopHwTimestampCapabilities->VcInstanceName.Buffer )
              {
                GuidDataSize = ndisQueryGuidDataSize(
                                 (int *)&v45,
                                 a1,
                                 0LL,
                                 (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].TopHwTimestampCapabilities,
                                 a3,
                                 v47);
                if ( GuidDataSize >= 0 )
                {
                  v33 = v45;
                  v34 = ((v45 + 7) & 0xFFFFFFF8)
                      + ((p_TopHwTimestampCapabilities->VcInstanceName.Length + 9) & 0xFFFFFFF8);
                  v50 = (v45 + 7) & 0xFFFFFFF8;
                  v23 += v34;
                  if ( a5 >= v23 )
                  {
                    v52 = v46;
                    v51[v46] = v18;
                    v35 = v48;
                    *(_WORD *)&v48->Header.Type = p_TopHwTimestampCapabilities->VcInstanceName.Length;
                    memmove(
                      &v35->Header.Size,
                      p_TopHwTimestampCapabilities->VcInstanceName.Buffer,
                      p_TopHwTimestampCapabilities->VcInstanceName.Length);
                    v36 = ((p_TopHwTimestampCapabilities->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v18;
                    GuidDataSize = ndisQueryGuidData(
                                     (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)((char *)a4 + v36),
                                     v33,
                                     (__int64)a1,
                                     0LL,
                                     (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].TopHwTimestampCapabilities,
                                     a3,
                                     v47);
                    if ( GuidDataSize < 0 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          0x12u,
                          0x29u,
                          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                          (char)a1,
                          p_TopHwTimestampCapabilities);
                      ndisDereferenceVcPtr(p_TopHwTimestampCapabilities);
                      v29 = v46;
                      break;
                    }
                    v37 = v52;
                    *(&a4[1].WnodeHeader.BufferSize + 2 * v52) = v45;
                    *(&a4->FixedInstanceSize + 2 * v37) = v36;
                    LODWORD(v18) = v50 + v36;
                    ++v46;
                    v48 = (struct _NDIS_MINIPORT_BLOCK *)((char *)a4 + (unsigned int)v18);
                  }
                  else
                  {
                    a4->WnodeHeader.Flags |= 0x20u;
                    GuidDataSize = 0;
                    a4->WnodeHeader.BufferSize = 56;
                    a4->DataBlockOffset = v23;
                    v44 = 1;
                    *a6 = 56;
                  }
                }
              }
              ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-1].TopHwTimestampCapabilities);
            }
            Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
            v29 = v46;
            if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->WmiEnabledVcs )
              break;
            v28 = v49;
          }
          if ( !v44 )
          {
            a4->InstanceCount = v29;
            GuidDataSize = 0;
            a4->WnodeHeader.BufferSize = v23;
            *a6 = v23;
          }
        }
      }
      goto LABEL_52;
    }
    GuidDataSize = ndisQueryGuidDataSize((int *)&v45, a1, pNdisGuidMap, 0LL, a3, v7);
    if ( GuidDataSize < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v27 = 36;
      goto LABEL_80;
    }
    v20 = v45;
    v38 = (v45 + 3) & 0xFFFFFFFC;
    v39 = a1->pAdapterInstanceName->Length + 2;
    v40 = v39 + v38 + 76;
    if ( v40 < 0x48 || v40 < (unsigned int)v38 || v40 < v39 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 37;
        goto LABEL_80;
      }
    }
    else
    {
      if ( a5 < v40 )
      {
        a4->WnodeHeader.Flags |= 0x20u;
        a4->WnodeHeader.BufferSize = 56;
        GuidDataSize = 0;
        a4->DataBlockOffset = v40;
        *a6 = 56;
        goto LABEL_52;
      }
      v41.QuadPart = MEMORY[0xFFFFF78000000014];
      a4->WnodeHeader.Flags |= 0x10u;
      a4->WnodeHeader.TimeStamp = v41;
      a4->OffsetInstanceNameOffsets = v38 + 72;
      v43 = v47;
      a4->WnodeHeader.BufferSize = v40;
      a4->InstanceCount = 1;
      a4->DataBlockOffset = 72;
      a4->FixedInstanceSize = v20;
      GuidDataSize = ndisQueryGuidData(
                       (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                       v20,
                       (__int64)a1,
                       pNdisGuidMap,
                       0LL,
                       a3,
                       v43);
      if ( GuidDataSize >= 0 )
      {
        *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v38 + 76;
        *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v38) = a1->pAdapterInstanceName->Length;
        memmove(
          (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v38 + 2,
          a1->pAdapterInstanceName->Buffer,
          a1->pAdapterInstanceName->Length);
        GuidDataSize = 0;
        *a6 = a4->WnodeHeader.BufferSize;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 38;
LABEL_80:
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          18,
          v27,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
    }
LABEL_52:
    if ( v47 )
      ndisDereferenceMiniport(v47, 0x60u);
    goto LABEL_54;
  }
  pNdisGuidMap = a1->pNdisGuidMap;
  p_Guid = &a4->WnodeHeader.Guid;
  if ( pNdisGuidMap )
  {
    for ( i = 0; i < a1->cNdisGuidMap; ++pNdisGuidMap )
    {
      if ( a4 == (struct tagWNODE_ALL_DATA *)-24LL )
      {
        if ( (pNdisGuidMap->Flags & 2) != 0 )
        {
          v14 = pNdisGuidMap->Oid == 0;
LABEL_13:
          if ( v14 )
            goto LABEL_18;
        }
      }
      else if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
      {
        v14 = *(_QWORD *)pNdisGuidMap->Guid.Data4 == *(_QWORD *)a4->WnodeHeader.Guid.Data4;
        goto LABEL_13;
      }
      ++i;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_Guid) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_Guid,
      18,
      35,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  GuidDataSize = -1073741811;
LABEL_54:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v42 = GuidDataSize;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Au,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      *(_QWORD *)v42);
  }
  return (unsigned int)GuidDataSize;
}
