/*
 * XREFs of ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AFAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AFDA0 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AFE5C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B096C (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B0D9C (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

char __fastcall ndisOidPreRSSv2Parameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  char v4; // si
  struct _NDIS_OPEN_BLOCK *v5; // r14
  int *v6; // rbx

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)v1,
      (char)v5,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
    {
      v6 = (int *)((char *)a1 + 40);
      goto LABEL_18;
    }
    v6 = (int *)((char *)a1 + 40);
    *v6 = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
  }
  else
  {
    v6 = (int *)((char *)a1 + 40);
  }
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( v5 )
    {
      *v6 = ndisQueryOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
      goto LABEL_18;
    }
    if ( v1 )
    {
      *v6 = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3, v6), v4 != 1) )
    {
      if ( v1 )
        v4 = ndisSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, v6);
    }
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)v1,
      (char)v5,
      v4,
      *v6);
  return v4;
}
