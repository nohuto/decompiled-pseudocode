/*
 * XREFs of ?ndisOidPreHDSplitCurrentConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

unsigned __int8 __fastcall ndisOidPreHDSplitCurrentConfig(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbp
  int v4; // eax
  _DWORD *v5; // rdi
  unsigned __int8 v6; // bl
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  __int64 v8; // rcx
  KIRQL v9; // dl
  char v11[4]; // [rsp+38h] [rbp-20h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA6u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      v3);
  v4 = *(_DWORD *)(v3 + 4);
  if ( v4 && v4 != 2 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    v6 = 1;
    *v5 = -1073741637;
    goto LABEL_17;
  }
  if ( !*(_QWORD *)a1 )
  {
    v6 = 0;
    v5 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_17;
  }
  v6 = 1;
  if ( v1->MajorNdisVersion <= 6u && (v1->MajorNdisVersion != 6 || !v1->MinorNdisVersion) )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
LABEL_12:
    *v5 = -1073741637;
    goto LABEL_17;
  }
  v5 = (_DWORD *)((char *)a1 + 40);
  if ( !v1->HDSplitCurrentConfig )
    goto LABEL_12;
  *v5 = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x1Cu )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
    HDSplitCurrentConfig = v1->HDSplitCurrentConfig;
    v8 = *(_QWORD *)(v3 + 40);
    v9 = NewIrql;
    *(_OWORD *)v8 = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
    *(_DWORD *)(v8 + 24) = HDSplitCurrentConfig->MaxHeaderSize;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v9);
    *(_DWORD *)(v3 + 56) = 28;
    *(_DWORD *)(v3 + 52) = 28;
    *v5 = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 28;
    *v5 = -1073676268;
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA7u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      *v5,
      *(_DWORD *)v11);
  }
  return v6;
}
