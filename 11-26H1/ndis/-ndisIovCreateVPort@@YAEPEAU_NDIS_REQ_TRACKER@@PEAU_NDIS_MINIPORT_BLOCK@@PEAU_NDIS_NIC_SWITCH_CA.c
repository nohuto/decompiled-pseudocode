/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E011C
 * Callers:
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2760 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0798 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E0B7C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     WPP_RECORDER_SF_qDc @ 0x1400E5F14 (WPP_RECORDER_SF_qDc.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisIovCreateVPort(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a3)
{
  struct _NDIS_OID_REQUEST *v3; // rdi
  __int64 v4; // rsi
  size_t v5; // r14
  int v6; // r13d
  struct _NDIS_MINIPORT_BLOCK *v7; // rbp
  char v9; // r12
  _BYTE *OidSourceHandle; // rax
  char *InformationBuffer; // rdi
  _LIST_ENTRY *SwitchBySwitchId; // r15
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v13; // r10
  unsigned __int16 v14; // dx
  bool v15; // zf
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __int64 Pool2; // rax
  __int64 v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  unsigned __int8 *AllocatedVPortIndices; // r14
  unsigned int AllocatedVPortIndicesLength; // r9d
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  unsigned __int8 v39; // al
  __int64 v40; // r8
  char v41; // dl
  unsigned int i; // ecx
  unsigned int v43; // r15d
  _BYTE *v44; // rdi
  int v46; // [rsp+20h] [rbp-68h]
  char v47[8]; // [rsp+28h] [rbp-60h]
  char v48; // [rsp+28h] [rbp-60h]
  __int64 v49; // [rsp+30h] [rbp-58h]
  int *v50; // [rsp+40h] [rbp-48h]
  struct _NDIS_OID_REQUEST *v51; // [rsp+48h] [rbp-40h]
  size_t Size; // [rsp+90h] [rbp+8h]
  unsigned int Sizea; // [rsp+90h] [rbp+8h]
  _BYTE *v55; // [rsp+A8h] [rbp+20h]

  v3 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v4 = 0LL;
  v5 = 0LL;
  v51 = v3;
  Size = 0LL;
  v6 = 0;
  v7 = a2;
  v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v48 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      52,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v48);
  }
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle(v3);
  v55 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_50;
  }
  InformationBuffer = (char *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
  v50 = (int *)(InformationBuffer + 12);
  if ( *((_DWORD *)InformationBuffer + 3) )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_50;
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *((_DWORD *)InformationBuffer + 2));
  if ( !SwitchBySwitchId )
    goto LABEL_8;
  v13 = a3;
  if ( LODWORD(SwitchBySwitchId[3].Flink) == a3->MaxNumVPorts || *((_WORD *)InformationBuffer + 8) > 0x200u )
    goto LABEL_8;
  v14 = *((_WORD *)InformationBuffer + 266);
  if ( v14 == 0xFFFF )
  {
    Size = (size_t)v7->PFBlock;
    if ( !Size )
      goto LABEL_8;
    v15 = *((_DWORD *)InformationBuffer + 136) == 2;
  }
  else
  {
    VFByVFId = ndisIovFindVFByVFId(v7, v14);
    v5 = (size_t)VFByVFId;
    if ( !VFByVFId )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v47 = *((unsigned __int16 *)InformationBuffer + 266);
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Au,
          0x35u,
          (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
          *(_QWORD *)v47);
      }
      goto LABEL_50;
    }
    if ( !v7->AllowMultipleVPortsPerVF && *((_DWORD *)VFByVFId + 19) )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDc(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          v18,
          v19,
          v46,
          (char)v7,
          *((_WORD *)InformationBuffer + 266),
          ndisAllowMultipleVPortsPerVF);
      goto LABEL_50;
    }
    v15 = *((_DWORD *)InformationBuffer + 136) == 1;
  }
  if ( !v15 )
    goto LABEL_8;
  if ( (v13->NicSwitchCapabilities & 4) == 0 )
  {
    if ( *((_DWORD *)InformationBuffer + 134) != v13->MaxNumQueuePairsPerNonDefaultVPort )
      goto LABEL_8;
    goto LABEL_27;
  }
  if ( *((_DWORD *)InformationBuffer + 134) > v13->MaxNumQueuePairs
                                            - LODWORD(SwitchBySwitchId[40].Blink)
                                            - LODWORD(SwitchBySwitchId[6].Flink) )
  {
LABEL_8:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_50;
  }
LABEL_27:
  Pool2 = ExAllocatePool2(64LL, 904LL, 1869169742LL);
  v4 = Pool2;
  if ( !Pool2 )
    goto LABEL_28;
  *(_DWORD *)(Pool2 + 104) = 1;
  *(_QWORD *)(Pool2 + 72) = v7;
  *(_QWORD *)(Pool2 + 80) = v55;
  *(_QWORD *)(Pool2 + 88) = SwitchBySwitchId;
  if ( v5 )
    *(_DWORD *)(Pool2 + 64) |= 2u;
  else
    v5 = Size;
  v21 = 5LL;
  *(_QWORD *)(Pool2 + 96) = v5;
  v22 = (_OWORD *)(Pool2 + 112);
  do
  {
    v23 = *((_OWORD *)InformationBuffer + 1);
    *v22 = *(_OWORD *)InformationBuffer;
    v24 = *((_OWORD *)InformationBuffer + 2);
    v22[1] = v23;
    v25 = *((_OWORD *)InformationBuffer + 3);
    v22[2] = v24;
    v26 = *((_OWORD *)InformationBuffer + 4);
    v22[3] = v25;
    v27 = *((_OWORD *)InformationBuffer + 5);
    v22[4] = v26;
    v28 = *((_OWORD *)InformationBuffer + 6);
    v22[5] = v27;
    v29 = *((_OWORD *)InformationBuffer + 7);
    InformationBuffer += 128;
    v22[6] = v28;
    v22 += 8;
    *(v22 - 1) = v29;
    --v21;
  }
  while ( v21 );
  v30 = *(_OWORD *)InformationBuffer;
  AllocatedVPortIndices = v7->AllocatedVPortIndices;
  AllocatedVPortIndicesLength = v7->AllocatedVPortIndicesLength;
  *(_QWORD *)(v4 + 896) = 0LL;
  *(_QWORD *)(v4 + 888) = 0LL;
  Sizea = AllocatedVPortIndicesLength;
  v33 = *((_OWORD *)InformationBuffer + 1);
  *v22 = v30;
  v34 = *((_OWORD *)InformationBuffer + 2);
  v22[1] = v33;
  v35 = *((_OWORD *)InformationBuffer + 3);
  v22[2] = v34;
  v36 = *((_OWORD *)InformationBuffer + 4);
  v22[3] = v35;
  v37 = *((_OWORD *)InformationBuffer + 5);
  v22[4] = v36;
  v38 = *((_OWORD *)InformationBuffer + 6);
  v22[5] = v37;
  v22[6] = v38;
  *(_QWORD *)(v4 + 880) = v4 + 872;
  *(_QWORD *)(v4 + 872) = v4 + 872;
  if ( AllocatedVPortIndices )
  {
    while ( (unsigned int)v21 < AllocatedVPortIndicesLength )
    {
      v39 = AllocatedVPortIndices[v21];
      v40 = (unsigned int)v21;
      if ( v39 != 0xFF )
      {
        v41 = 1;
        for ( i = 0; i < 8; ++i )
        {
          if ( (v39 & (unsigned __int8)v41) == 0 )
          {
            AllocatedVPortIndices[v40] = v41 | v39;
            v6 += i;
            goto LABEL_48;
          }
          v41 *= 2;
        }
        break;
      }
      v6 += 8;
      v21 = (unsigned int)(v21 + 1);
    }
  }
  v43 = AllocatedVPortIndicesLength + 64;
  v44 = (_BYTE *)ExAllocatePool2(66LL, AllocatedVPortIndicesLength + 64, 1869169742LL);
  if ( v44 )
  {
    memset(&v44[Sizea], 0, 0x40uLL);
    if ( AllocatedVPortIndices )
    {
      memmove(v44, AllocatedVPortIndices, Sizea);
      v44[Sizea] = 1;
      ExFreePoolWithTag(AllocatedVPortIndices, 0);
    }
    else
    {
      *v44 = 3;
      v6 = 1;
    }
    v7->AllocatedVPortIndices = v44;
    v7->AllocatedVPortIndicesLength = v43;
LABEL_48:
    v9 = 0;
    *(_DWORD *)(v4 + 124) = v6;
    *v50 = v6;
    *(_QWORD *)&v51->NdisReserved[80] = v4;
    *((_DWORD *)a1 + 10) = 0;
  }
  else
  {
LABEL_28:
    *((_DWORD *)a1 + 10) = -1073741670;
  }
LABEL_50:
  if ( *((_DWORD *)a1 + 10) && v4 )
    ndisIovDeleteVPort((PVOID)v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v49) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x37u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v7,
      v49);
  }
  return v9;
}
