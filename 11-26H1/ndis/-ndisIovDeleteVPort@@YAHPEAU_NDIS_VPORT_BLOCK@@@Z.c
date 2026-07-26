/*
 * XREFs of ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0798
 * Callers:
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E011C (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1AA0 (-ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisIovDeleteVPort(_QWORD *P)
{
  __int64 v1; // r14
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  _QWORD **v8; // rdx
  PVOID *v9; // rcx
  _QWORD **v10; // rdx
  PVOID *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  KIRQL v15; // dl
  void *v16; // rcx
  _QWORD **v18; // r8
  PVOID *v19; // rdx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v1) = 0;
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Au,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      0,
      0LL);
  v3 = (struct _NDIS_MINIPORT_BLOCK *)P[9];
  v4 = P[10];
  v5 = P[11];
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  if ( v3 )
  {
    v6 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P )
      goto LABEL_29;
    v7 = (PVOID *)P[1];
    if ( *v7 != P )
      goto LABEL_29;
    *v7 = v6;
    v6[1] = v7;
    --v3->NumActiveVPorts;
  }
  if ( v4 )
  {
    v8 = (_QWORD **)P[2];
    if ( v8[1] != P + 2 )
      goto LABEL_29;
    v9 = (PVOID *)P[3];
    if ( *v9 != P + 2 )
      goto LABEL_29;
    *v9 = v8;
    v8[1] = v9;
    --*(_DWORD *)(v4 + 824);
  }
  if ( v5 )
  {
    v10 = (_QWORD **)P[4];
    if ( v10[1] != P + 4 )
      goto LABEL_29;
    v11 = (PVOID *)P[5];
    if ( *v11 != P + 4 )
      goto LABEL_29;
    *v11 = v10;
    v10[1] = v11;
    --*(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 96) -= *((_DWORD *)P + 162);
  }
  v12 = P[12];
  if ( (P[8] & 2) != 0 )
  {
    v1 = P[12];
    if ( !v12 )
      goto LABEL_20;
    v13 = P[6];
    if ( *(_QWORD **)(v13 + 8) == P + 6 )
    {
      v14 = (_QWORD *)P[7];
      if ( (_QWORD *)*v14 == P + 6 )
      {
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*(_DWORD *)(v1 + 76);
        goto LABEL_20;
      }
    }
LABEL_29:
    __fastfail(3u);
  }
  if ( v12 )
  {
    v18 = (_QWORD **)P[6];
    if ( v18[1] != P + 6 )
      goto LABEL_29;
    v19 = (PVOID *)P[7];
    if ( *v19 != P + 6 )
      goto LABEL_29;
    *v19 = v18;
    v18[1] = v19;
    --*(_DWORD *)(v12 + 28);
  }
LABEL_20:
  v15 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v15);
  v3->AllocatedVPortIndices[(unsigned __int64)*((unsigned int *)P + 31) >> 3] &= ~(1 << (*((_DWORD *)P + 31) & 7));
  v16 = (void *)P[111];
  P[112] = 0LL;
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    P[111] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Bu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v3,
      v1,
      0);
  return 0LL;
}
