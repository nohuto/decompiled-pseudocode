/*
 * XREFs of ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B096C
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AFAA0 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400AEB60 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B0B8C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  char v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // r15d
  int CombinedRSSParameters; // eax
  KIRQL v11; // dl
  __int64 v13; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h] BYREF

  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  v7 = ndisSetMiniportRSSv2ParametersHelper(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x21u,
        (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
        (char)a1,
        (char)a2,
        v7);
    v9 = v8;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    CombinedRSSParameters = ndisAllocateCombinedRSSParameters(a1, a2, 0LL, 0LL, 0LL, 0LL);
    v11 = NewIrql;
    v8 = CombinedRSSParameters;
    a1->MiniportThread = 0LL;
    v9 = CombinedRSSParameters;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( !v9 )
    {
      v6 = 0;
      *a3 = v8;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x22u,
        (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
        (char)a1,
        (char)a2,
        v9);
  }
  *a3 = v9;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v6;
  LODWORD(v13) = v8;
  WPP_RECORDER_SF_qqL(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0xBu,
    0x23u,
    (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
    (char)a1,
    (char)a2,
    v13);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      *a3);
  return v6;
}
