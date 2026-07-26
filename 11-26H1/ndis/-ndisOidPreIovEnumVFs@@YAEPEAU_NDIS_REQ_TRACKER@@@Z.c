/*
 * XREFs of ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1400DFE48 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned int Blink; // esi
  _BYTE *v2; // r14
  struct _NDIS_REQ_TRACKER *v3; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // r13
  char v5; // r12
  __int64 v6; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // xmm2_8
  struct _NDIS_MINIPORT_BLOCK *v8; // rdi
  struct _NDIS_OID_REQUEST *v9; // r8
  _DWORD *v10; // rcx
  int v11; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v13; // rdx
  _LIST_ENTRY *p_VFList; // r14
  _LIST_ENTRY *Flink; // rdx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rax
  KIRQL v20; // dl
  _DWORD *v21; // rax
  _LIST_ENTRY *v22; // r15
  unsigned int v23; // eax
  struct _NDIS_NIC_SWITCH_VF_INFO *v24; // rdi
  struct _NDIS_VF_BLOCK *v25; // rdx
  KIRQL v26; // dl
  __int64 v27; // rax
  unsigned int v28; // ecx
  char v30[8]; // [rsp+30h] [rbp-99h]
  _BYTE *v31; // [rsp+40h] [rbp-89h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v32; // [rsp+48h] [rbp-81h]
  __m128i v33; // [rsp+60h] [rbp-69h]
  __int128 v34; // [rsp+70h] [rbp-59h]
  __int128 v35; // [rsp+80h] [rbp-49h]
  char v36[128]; // [rsp+A0h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+138h] [rbp+6Fh] BYREF
  struct _NDIS_OID_REQUEST *v39; // [rsp+140h] [rbp+77h]
  unsigned int v40; // [rsp+148h] [rbp+7Fh]

  Blink = 0;
  v2 = 0LL;
  v39 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v31 = 0LL;
  v3 = a1;
  NewIrql = 0;
  SwitchBySwitchId = 0LL;
  v5 = 1;
  v6 = ndisCaptureIovOidContext((__int64)v36, a1);
  v33 = *(__m128i *)v6;
  v34 = *(_OWORD *)(v6 + 16);
  v35 = *(_OWORD *)(v6 + 32);
  v7 = (struct _NDIS_MINIPORT_BLOCK *)_mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0];
  v8 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x30u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v3,
      v7);
  v9 = v39;
  v39->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v10 = (_DWORD *)*((_QWORD *)v3 + 4);
  if ( v10[1] != 12 )
    goto LABEL_46;
  *((_DWORD *)v3 + 10) = 0;
  if ( v10[12] < 0x18u )
  {
    v11 = -1073676268;
LABEL_8:
    v10[17] = 24;
    *((_DWORD *)v3 + 10) = v11;
    *(_DWORD *)(*((_QWORD *)v3 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v3 + 4) + 64LL) = 0;
    goto LABEL_47;
  }
  if ( v10[13] < 0x18u )
  {
    v11 = -1073676266;
    goto LABEL_8;
  }
  if ( !v33.m128i_i8[0] )
  {
    v5 = 0;
    goto LABEL_47;
  }
  if ( *((_QWORD *)&v35 + 1) && *((_QWORD *)&v34 + 1) && (*(_BYTE *)(*((_QWORD *)&v35 + 1) + 8LL) & 3) == 3 )
  {
    v10[15] = 0;
    *(_DWORD *)(*((_QWORD *)v3 + 4) + 64LL) = 24;
    OidSourceHandle = ndisGetOidSourceHandle(v9);
    if ( OidSourceHandle )
    {
      if ( *OidSourceHandle == 18 )
        v2 = OidSourceHandle;
      v31 = v2;
    }
    if ( (*(_DWORD *)(v13 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v7, *(_DWORD *)(v13 + 8))) != 0LL )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
      if ( v2 )
      {
        p_VFList = (_LIST_ENTRY *)(v2 + 808);
        if ( SwitchBySwitchId )
        {
          Flink = p_VFList->Flink;
          while ( Flink != p_VFList )
          {
            v16 = Flink[3].Flink == SwitchBySwitchId;
            v17 = Blink + 1;
            Flink = Flink->Flink;
            if ( !v16 )
              v17 = Blink;
            Blink = v17;
          }
        }
        else
        {
          Blink = *((_DWORD *)v31 + 200);
        }
      }
      else
      {
        if ( SwitchBySwitchId )
          Blink = (unsigned int)SwitchBySwitchId[4].Blink;
        else
          Blink = v7->NumAllocatedVFs;
        p_VFList = &v7->VFList;
      }
      v18 = 1632 * Blink + 24;
      *(_DWORD *)(*((_QWORD *)v3 + 4) + 68LL) = v18;
      v19 = *((_QWORD *)v3 + 4);
      v40 = v18;
      if ( v18 <= *(_DWORD *)(v19 + 52) )
      {
        v21 = *(_DWORD **)(v19 + 40);
        *v21 = 1573248;
        v21[3] = 24;
        v21[4] = Blink;
        v21[5] = 1632;
        v22 = p_VFList->Flink;
        v32 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v21 + 6);
        v23 = 0;
        LODWORD(v39) = 0;
        if ( v22 != p_VFList )
        {
          v24 = v32;
          do
          {
            if ( v23 >= Blink )
              break;
            v25 = (struct _NDIS_VF_BLOCK *)&v22[-1];
            if ( !v31 )
              v25 = (struct _NDIS_VF_BLOCK *)v22;
            v22 = v22->Flink;
            if ( !SwitchBySwitchId || *((_LIST_ENTRY **)v25 + 8) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v24, v25);
              v24 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v24 + 1632);
              v23 = (_DWORD)v39 + 1;
              LODWORD(v39) = (_DWORD)v39 + 1;
            }
          }
          while ( v22 != p_VFList );
          v3 = a1;
          v8 = v7;
        }
        v26 = NewIrql;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(&v8->Lock, v26);
        v27 = *((_QWORD *)v3 + 4);
        v28 = v40;
        *((_DWORD *)v3 + 10) = 0;
        *(_DWORD *)(v27 + 60) = v28;
      }
      else
      {
        v20 = NewIrql;
        *((_DWORD *)v3 + 10) = -1073676266;
        v7->MiniportThread = 0LL;
        KeReleaseSpinLock(&v7->Lock, v20);
      }
    }
    else
    {
      *((_DWORD *)v3 + 10) = -1073741811;
    }
  }
  else
  {
LABEL_46:
    *((_DWORD *)v3 + 10) = -1073741637;
  }
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v30 = *((_DWORD *)v3 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x31u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v8,
      *(_QWORD *)v30);
  }
  return v5;
}
