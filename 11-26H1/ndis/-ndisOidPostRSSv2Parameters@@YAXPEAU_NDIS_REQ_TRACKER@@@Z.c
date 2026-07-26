/*
 * XREFs of ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AF9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140090DD0 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400AFC14 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

void __fastcall ndisOidPostRSSv2Parameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  __int64 v5; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)v1,
      (char)v4,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
    if ( v4 )
      ndisPostSetOpenRSSv2Parameters(v4, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)v1,
      (char)v4,
      v5);
  }
}
