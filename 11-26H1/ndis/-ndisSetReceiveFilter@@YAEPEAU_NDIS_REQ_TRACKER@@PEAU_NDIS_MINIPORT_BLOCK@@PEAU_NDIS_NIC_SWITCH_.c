/*
 * XREFs of ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AE400
 * Callers:
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AE0F0 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14000F160 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400AC5F8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400AC73C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0BAC (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisSetReceiveFilter(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a3,
        struct _NDIS_SRIOV_CAPABILITIES *a4)
{
  struct _NDIS_OID_REQUEST *v4; // rbp
  unsigned int *InformationBuffer; // rdx
  char v9; // si
  char *v10; // r15
  char *ReceiveQueueByQueueId; // r13
  struct _NDIS_VPORT_BLOCK *v12; // r12
  struct _NDIS_OID_REQUEST *v13; // rcx
  bool v14; // cf
  int v15; // edx
  char v16; // bp
  char v17; // al
  char v18; // r14
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  unsigned int *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ebp
  unsigned __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 Pool2; // rax
  _DWORD *v27; // rbp
  size_t v28; // r8
  void *v29; // rdx
  size_t v30; // r8
  char *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // r9
  unsigned int v34; // edx
  KIRQL v35; // dl
  unsigned __int64 *p_Lock; // r14
  unsigned int v37; // eax
  unsigned __int64 *v38; // rcx
  KIRQL v39; // dl
  unsigned __int8 *AllocatedReceiveFilterIndices; // rbp
  unsigned int AllocatedReceiveFilterIndicesLength; // r9d
  __int64 v42; // rcx
  int v43; // r10d
  unsigned __int8 v44; // al
  __int64 v45; // r8
  char v46; // dl
  unsigned int i; // ecx
  unsigned int v48; // r10d
  __int64 v49; // rax
  _BYTE *v50; // r14
  __int64 v51; // r12
  unsigned int v52; // eax
  _DWORD *v53; // rbp
  struct _NDIS_MINIPORT_BLOCK *j; // rax
  KIRQL v55; // dl
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *Flink; // rcx
  bool v63; // zf
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rax
  KIRQL v65; // dl
  char v67; // [rsp+40h] [rbp-68h]
  KIRQL NewIrql[2]; // [rsp+42h] [rbp-66h] BYREF
  char v69[4]; // [rsp+44h] [rbp-64h]
  unsigned int v70; // [rsp+48h] [rbp-60h]
  unsigned int Size; // [rsp+4Ch] [rbp-5Ch]
  unsigned int Size_4; // [rsp+50h] [rbp-58h]
  void *Src; // [rsp+58h] [rbp-50h]
  _NDIS_OPEN_BLOCK *v74; // [rsp+60h] [rbp-48h]
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // [rsp+68h] [rbp-40h]
  char v76; // [rsp+B0h] [rbp+8h]

  v4 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v74 = 0LL;
  *(_DWORD *)v69 = 0;
  NewIrql[0] = 0;
  InformationBuffer = (unsigned int *)v4->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = 1;
  Src = InformationBuffer;
  v10 = 0LL;
  ReceiveQueueByQueueId = 0LL;
  v76 = 0;
  v67 = 0;
  v12 = 0LL;
  VPortByVPortId = 0LL;
  v70 = 0;
  v13 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InformationBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      25,
      20,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a2);
    v13 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
    InformationBuffer = (unsigned int *)Src;
  }
  v14 = *((_BYTE *)InformationBuffer + 1) < 2u;
  if ( *((_BYTE *)InformationBuffer + 1) >= 2u )
    v70 = InformationBuffer[10];
  *((_DWORD *)a1 + 10) = -1073741637;
  v13->DATA.METHOD_INFORMATION.BytesRead = v14 ? 36 : 44;
  Size_4 = v14 ? 36 : 44;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  if ( !(unsigned __int8)ndisReferenceMiniport(a2, 0x46u) )
  {
    *((_DWORD *)a1 + 10) = -1073676286;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    goto LABEL_23;
  }
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v4);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v74 = OidSourceHandle;
    if ( !(unsigned __int8)ndisReferenceOpenByHandle(OidSourceHandle, 0xBu) )
    {
      *((_DWORD *)a1 + 10) = -1073676286;
      v16 = 0;
      v17 = 0;
      goto LABEL_22;
    }
    v76 = 1;
  }
  if ( a2->PFBlock && (ndisIovNicSwitchWithoutIovSupported(a3) || a4 && (a4->SriovCapabilities & 3) == 3) )
  {
    v20 = (unsigned int *)Src;
    if ( *((_DWORD *)Src + 3) )
    {
LABEL_17:
      *((_DWORD *)a1 + 10) = -1073741811;
      v17 = 0;
      goto LABEL_21;
    }
    VPortByVPortId = ndisIovFindVPortByVPortId(a2, v70);
    v12 = VPortByVPortId;
    if ( !VPortByVPortId || v70 && VPortByVPortId->Open != v74 )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
LABEL_20:
      v17 = 0;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v70 )
      goto LABEL_17;
    v20 = (unsigned int *)Src;
  }
  v21 = v20[6];
  v22 = v20[7];
  v23 = -1;
  v24 = v21 * v22;
  v25 = -1;
  if ( v24 <= 0xFFFFFFFF )
    v25 = v24;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v24 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_20;
  if ( v25 + 184 >= 0xB8 )
    v23 = v25 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v25 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_20;
  Pool2 = ExAllocatePool2(64LL, v23, 1718764622LL);
  v10 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_20;
  v27 = Src;
  v28 = Size_4;
  v29 = Src;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_QWORD *)(Pool2 + 56) = a2;
  *(_QWORD *)(Pool2 + 64) = v74;
  memmove((void *)(Pool2 + 132), v29, v28);
  v30 = (unsigned int)(v27[6] * v27[7]);
  v31 = (char *)v27 + (unsigned int)v27[5];
  *((_DWORD *)v10 + 38) = 184;
  memmove(v10 + 184, v31, v30);
  *((_QWORD *)v10 + 22) = v12;
  *((_QWORD *)v10 + 5) = v10 + 32;
  *((_QWORD *)v10 + 4) = v10 + 32;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v34 = v27[3];
  if ( v34 )
    ReceiveQueueByQueueId = (char *)ndisFindReceiveQueueByQueueId(a2, v34, v32, v33);
  else
    ReceiveQueueByQueueId = (char *)a2->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v67 = 1;
  }
  v35 = NewIrql[0];
  p_Lock = &a2->Lock;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v35);
  if ( !ReceiveQueueByQueueId )
  {
LABEL_50:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_51;
  }
  if ( v27[3] )
  {
    if ( v74 )
    {
      if ( v74 != *((_NDIS_OPEN_BLOCK **)ReceiveQueueByQueueId + 9) )
        goto LABEL_50;
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_51;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v37 = a2->NumReceiveFilters + 1;
  *((_QWORD *)v10 + 9) = ReceiveQueueByQueueId;
  if ( v37 > 0x5555555 )
  {
    v38 = &a2->Lock;
LABEL_57:
    v39 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(v38, v39);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_51;
  }
  AllocatedReceiveFilterIndices = a2->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = a2->AllocatedReceiveFilterIndicesLength;
  Size = AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices )
  {
    v42 = 0LL;
    v43 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v42 >= AllocatedReceiveFilterIndicesLength )
        goto LABEL_70;
      v44 = AllocatedReceiveFilterIndices[v42];
      v45 = (unsigned int)v42;
      if ( v44 != 0xFF )
        break;
      v43 += 8;
      *(_DWORD *)v69 = v43;
      v42 = (unsigned int)(v42 + 1);
    }
    v46 = 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
        goto LABEL_70;
      if ( (v44 & (unsigned __int8)v46) == 0 )
        break;
      v46 *= 2;
    }
    v48 = i + v43;
    AllocatedReceiveFilterIndices[v45] = v46 | v44;
    *(_DWORD *)v69 = v48;
  }
  else
  {
LABEL_70:
    v49 = ExAllocatePool2(66LL, AllocatedReceiveFilterIndicesLength + 64, 1970357326LL);
    v50 = (_BYTE *)v49;
    if ( !v49 )
    {
      v38 = &a2->Lock;
      goto LABEL_57;
    }
    v51 = Size;
    memset((void *)(Size + v49), 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v50, AllocatedReceiveFilterIndices, (unsigned int)v51);
      v50[v51] = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v48 = *(_DWORD *)v69;
    }
    else
    {
      *v50 = 3;
      v48 = 1;
      *(_DWORD *)v69 = 1;
    }
    v12 = VPortByVPortId;
    v52 = Size + 64;
    a2->AllocatedReceiveFilterIndices = v50;
    p_Lock = &a2->Lock;
    a2->AllocatedReceiveFilterIndicesLength = v52;
  }
  v53 = Src;
  *((_DWORD *)v10 + 37) = v48;
  *((_DWORD *)v10 + 12) = v48;
  v53[4] = v48;
  for ( j = (struct _NDIS_MINIPORT_BLOCK *)a2->ReceiveFilterList.Flink;
        ;
        j = *(struct _NDIS_MINIPORT_BLOCK **)&j->Header.Type )
  {
    if ( j == (struct _NDIS_MINIPORT_BLOCK *)&a2->ReceiveFilterList )
    {
LABEL_82:
      NextMiniport = j->NextMiniport;
      v57 = *(_QWORD *)&NextMiniport->Header.Type;
      if ( *(_NDIS_MINIPORT_BLOCK **)(*(_QWORD *)&NextMiniport->Header.Type + 8LL) == NextMiniport )
      {
        *(_QWORD *)v10 = v57;
        *((_QWORD *)v10 + 1) = NextMiniport;
        *(_QWORD *)(v57 + 8) = v10;
        v58 = v10 + 16;
        *(_QWORD *)&NextMiniport->Header.Type = v10;
        v59 = ReceiveQueueByQueueId + 32;
        ++a2->NumReceiveFilters;
        *((_DWORD *)a1 + 10) = 0;
        ++*((_DWORD *)ReceiveQueueByQueueId + 21);
        v60 = *((_QWORD *)ReceiveQueueByQueueId + 4);
        if ( *(char **)(v60 + 8) == ReceiveQueueByQueueId + 32 )
        {
          *v58 = v60;
          *((_QWORD *)v10 + 3) = v59;
          *(_QWORD *)(v60 + 8) = v58;
          *v59 = v58;
          if ( !v12 )
          {
LABEL_89:
            v65 = NewIrql[0];
            a2->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v65);
            v17 = 0;
            v18 = 0;
            v16 = 0;
            v9 = 0;
            goto LABEL_23;
          }
          ++v12->NumFilters;
          p_FilterList = &v12->FilterList;
          Flink = v12->FilterList.Flink;
          if ( Flink->Blink == &v12->FilterList )
          {
            v63 = v70 == 0;
            *((_QWORD *)v10 + 5) = p_FilterList;
            *((_QWORD *)v10 + 4) = Flink;
            Flink->Blink = (_LIST_ENTRY *)(v10 + 32);
            p_FilterList->Flink = (_LIST_ENTRY *)(v10 + 32);
            NicSwitch = v12->NicSwitch;
            if ( v63 )
              ++*((_DWORD *)NicSwitch + 163);
            else
              ++*((_DWORD *)NicSwitch + 164);
            goto LABEL_89;
          }
        }
      }
      __fastfail(3u);
    }
    if ( j->PcwDatapathEventMask == v48 )
      break;
    if ( j->PcwDatapathEventMask > v48 )
      goto LABEL_82;
  }
  v55 = NewIrql[0];
  *((_DWORD *)a1 + 10) = -1073741270;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v55);
LABEL_51:
  v17 = v67;
LABEL_21:
  v16 = v76;
LABEL_22:
  v18 = 1;
LABEL_23:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v17 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v16 )
      ndisMDereferenceOpenUnlocked((__int64)v74, 0xBu);
    if ( v18 )
      ndisDereferenceMiniport(a2, 0x46u);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = Size_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a2,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v69);
  return v9;
}
