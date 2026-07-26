/*
 * XREFs of ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0010 (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E0B7C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rdi
  _NDIS_OPEN_BLOCK *v2; // r13
  struct _NDIS_PF_BLOCK *PFBlock; // r12
  struct _NDIS_REQ_TRACKER *v4; // rbx
  unsigned int NumActiveVPorts; // r15d
  char v6; // si
  __int64 v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // xmm2_8
  struct _NDIS_MINIPORT_BLOCK *v9; // r14
  _DWORD *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r10d
  PVOID InformationBuffer; // rdi
  struct _NDIS_OID_REQUEST *v17; // rcx
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  unsigned __int16 v19; // dx
  _LIST_ENTRY *v20; // rdi
  struct _NDIS_VPORT_BLOCK *p_VPortList; // rdi
  _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  KIRQL v26; // dl
  struct _NDIS_VPORT_BLOCK *Flink; // rax
  _LIST_ENTRY *p_SwitchLink; // rcx
  _DWORD *v29; // rax
  struct _NDIS_VPORT_BLOCK *v30; // rsi
  unsigned int v31; // eax
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v32; // r14
  struct _NDIS_VPORT_BLOCK *v33; // rdx
  KIRQL v34; // dl
  __int64 v35; // rax
  unsigned int v36; // ecx
  char v37[8]; // [rsp+30h] [rbp-99h]
  _LIST_ENTRY *VFByVFId; // [rsp+40h] [rbp-89h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+48h] [rbp-81h]
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v40; // [rsp+50h] [rbp-79h]
  __m128i v41; // [rsp+60h] [rbp-69h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v42[2]; // [rsp+70h] [rbp-59h]
  __int128 v43; // [rsp+80h] [rbp-49h]
  char v44[128]; // [rsp+A0h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+138h] [rbp+6Fh] BYREF
  struct _NDIS_OID_REQUEST *v47; // [rsp+140h] [rbp+77h]
  unsigned int v48; // [rsp+148h] [rbp+7Fh]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = 0LL;
  PFBlock = 0LL;
  v47 = v1;
  SwitchBySwitchId = 0LL;
  v4 = a1;
  VFByVFId = 0LL;
  NewIrql = 0;
  NumActiveVPorts = 0;
  v6 = 1;
  v7 = ndisCaptureIovOidContext((__int64)v44, a1);
  v41 = *(__m128i *)v7;
  *(_OWORD *)v42 = *(_OWORD *)(v7 + 16);
  v43 = *(_OWORD *)(v7 + 32);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v7, 8).m128i_u64[0];
  v9 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Eu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v8);
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v10 = (_DWORD *)*((_QWORD *)v4 + 4);
  if ( v10[1] != 12 )
    goto LABEL_17;
  *((_DWORD *)v4 + 10) = 0;
  if ( v10[12] < 0x1Cu )
  {
    v11 = -1073676268;
LABEL_8:
    v10[17] = 28;
    *((_DWORD *)v4 + 10) = v11;
    *(_DWORD *)(*((_QWORD *)v4 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v4 + 4) + 64LL) = 0;
    goto LABEL_9;
  }
  if ( v10[13] < 0x1Cu )
  {
    v11 = -1073676266;
    goto LABEL_8;
  }
  if ( !v41.m128i_i8[0] )
  {
    v6 = 0;
    goto LABEL_18;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v42[1])
    && (!*((_QWORD *)&v43 + 1) || !v13 || (*(_BYTE *)(*((_QWORD *)&v43 + 1) + 8LL) & 3) != 3) )
  {
    v6 = 1;
LABEL_17:
    *((_DWORD *)v4 + 10) = -1073741637;
    goto LABEL_18;
  }
  InformationBuffer = v1->DATA.QUERY_INFORMATION.InformationBuffer;
  v17 = v47;
  *(_DWORD *)(v12 + 60) = v14;
  *(_DWORD *)(*((_QWORD *)v4 + 4) + 64LL) = 28;
  OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v17);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
    v2 = OidSourceHandle;
  if ( (*((_DWORD *)InformationBuffer + 1) & 2) != 0 )
  {
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v8, *((_DWORD *)InformationBuffer + 2));
    if ( !SwitchBySwitchId )
    {
LABEL_26:
      *((_DWORD *)v4 + 10) = -1073741811;
      goto LABEL_9;
    }
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 1) != 0 )
  {
    v19 = *((_WORD *)InformationBuffer + 6);
    if ( v19 == 0xFFFF )
    {
      PFBlock = v8->PFBlock;
      if ( !PFBlock )
        goto LABEL_26;
      v20 = 0LL;
    }
    else
    {
      VFByVFId = ndisIovFindVFByVFId(v8, v19);
      v20 = VFByVFId;
      if ( !VFByVFId )
        goto LABEL_26;
    }
  }
  else
  {
    v20 = 0LL;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
  if ( v2 )
  {
    if ( PFBlock )
    {
      p_VPortList = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
    }
    else if ( v20 )
    {
      p_VPortList = (struct _NDIS_VPORT_BLOCK *)&v20[5];
    }
    else
    {
      if ( !SwitchBySwitchId )
      {
        NumActiveVPorts = v2->NumActiveVPorts;
        p_VPortList = (struct _NDIS_VPORT_BLOCK *)&v2->VPortList;
        goto LABEL_37;
      }
      p_VPortList = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
    }
    Flink = (struct _NDIS_VPORT_BLOCK *)p_VPortList->AdapterLink.Flink;
    if ( (struct _NDIS_VPORT_BLOCK *)p_VPortList->AdapterLink.Flink != p_VPortList )
    {
      v22 = VFByVFId;
      do
      {
        if ( VFByVFId || (p_SwitchLink = &Flink->FunctionLink, PFBlock) )
          p_SwitchLink = &Flink->SwitchLink;
        if ( (_NDIS_OPEN_BLOCK *)p_SwitchLink->Flink == v2 )
          ++NumActiveVPorts;
        Flink = (struct _NDIS_VPORT_BLOCK *)Flink->AdapterLink.Flink;
      }
      while ( Flink != p_VPortList );
      v4 = a1;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  if ( PFBlock )
  {
    NumActiveVPorts = *((_DWORD *)PFBlock + 7);
    p_VPortList = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
  }
  else
  {
    if ( !v20 )
    {
      v22 = VFByVFId;
      if ( SwitchBySwitchId )
      {
        NumActiveVPorts = (unsigned int)SwitchBySwitchId[3].Flink;
        p_VPortList = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
      }
      else
      {
        NumActiveVPorts = v8->NumActiveVPorts;
        p_VPortList = (struct _NDIS_VPORT_BLOCK *)&v8->VPortList;
      }
      goto LABEL_38;
    }
    NumActiveVPorts = HIDWORD(v20[4].Blink);
    p_VPortList = (struct _NDIS_VPORT_BLOCK *)&v20[5];
  }
LABEL_37:
  v22 = VFByVFId;
LABEL_38:
  v23 = *((_QWORD *)v4 + 4);
  v24 = 576 * NumActiveVPorts + 28;
  v48 = v24;
  *(_DWORD *)(v23 + 68) = v24;
  v25 = *((_QWORD *)v4 + 4);
  if ( v24 > *(_DWORD *)(v25 + 52) )
  {
    v26 = NewIrql;
    *((_DWORD *)v4 + 10) = -1073676266;
    v8->MiniportThread = 0LL;
    KeReleaseSpinLock(&v8->Lock, v26);
    goto LABEL_9;
  }
  v29 = *(_DWORD **)(v25 + 40);
  *v29 = 1835392;
  v29[4] = 28;
  v29[5] = NumActiveVPorts;
  v29[6] = 576;
  v30 = (struct _NDIS_VPORT_BLOCK *)p_VPortList->AdapterLink.Flink;
  v40 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v29 + 7);
  v31 = 0;
  LODWORD(v47) = 0;
  if ( v30 == p_VPortList )
    goto LABEL_77;
  v32 = v40;
  while ( v31 < NumActiveVPorts )
  {
    if ( v22 || PFBlock )
    {
      v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 48);
LABEL_72:
      v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
      if ( !v2 )
        goto LABEL_74;
      goto LABEL_73;
    }
    if ( SwitchBySwitchId )
    {
      v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 32);
      goto LABEL_72;
    }
    if ( !v2 )
    {
      v33 = v30;
      v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
LABEL_74:
      ndisIovCopyVPortInfo(v32, v33);
      v32 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v32 + 576);
      v31 = (_DWORD)v47 + 1;
      LODWORD(v47) = (_DWORD)v47 + 1;
      goto LABEL_75;
    }
    v33 = (struct _NDIS_VPORT_BLOCK *)((char *)v30 - 16);
    v30 = (struct _NDIS_VPORT_BLOCK *)v30->AdapterLink.Flink;
LABEL_73:
    if ( v2 == v33->Open )
      goto LABEL_74;
LABEL_75:
    v22 = VFByVFId;
    if ( v30 == p_VPortList )
      break;
  }
  v4 = a1;
  v9 = v8;
LABEL_77:
  v34 = NewIrql;
  v9->MiniportThread = 0LL;
  KeReleaseSpinLock(&v9->Lock, v34);
  v35 = *((_QWORD *)v4 + 4);
  v36 = v48;
  *((_DWORD *)v4 + 10) = 0;
  *(_DWORD *)(v35 + 60) = v36;
LABEL_9:
  v6 = 1;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v37 = *((_DWORD *)v4 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v9,
      *(_QWORD *)v37);
  }
  return v6;
}
