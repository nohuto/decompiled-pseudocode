/*
 * XREFs of ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x140077950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  struct _NDIS_FILTER_BLOCK *v2; // rbp
  __int64 v3; // rdi
  int v5; // ebp
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  char v9[4]; // [rsp+38h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v2 = (struct _NDIS_FILTER_BLOCK *)P[5];
  v3 = P[6];
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1,
      v3);
  v14 = ndisOidPMAddRemove(v1, v2, (struct _NDIS_OID_REQUEST *)v3);
  v5 = v14;
  v13 = v3;
  *(_DWORD *)(v3 + 88) = *(_DWORD *)(v3 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v10, v6, v7, v8);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xEu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v5;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x45u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1,
      v3,
      *(_DWORD *)v9,
      v10,
      v11,
      v12);
  }
}
