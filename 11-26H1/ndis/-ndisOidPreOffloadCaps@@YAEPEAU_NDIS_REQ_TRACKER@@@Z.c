/*
 * XREFs of ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BE820
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0BC8 (-ndisQueryFilterOffloadCaps@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C0C74 (-ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreOffloadCaps(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r15
  struct _NDIS_FILTER_BLOCK *v5; // r14
  int FilterOffloadCaps; // eax
  char v7; // bl
  int v8; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned int StackFlags; // ebx
  KIRQL v11; // dl
  char v13[4]; // [rsp+40h] [rbp-38h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  v5 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 2);
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBCu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      v4,
      v3);
  FilterOffloadCaps = -1073741637;
  v7 = 1;
  *((_DWORD *)a1 + 10) = -1073741637;
  v8 = *(_DWORD *)(v3 + 4);
  if ( v8 == 2 || !v8 )
  {
    if ( *((_QWORD *)a1 + 2) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5->Miniport, &NewIrql);
      Miniport = v5->Miniport;
      StackFlags = v5->StackFlags;
      v11 = NewIrql;
      Miniport->MiniportThread = 0LL;
      KeReleaseSpinLock(&Miniport->Lock, v11);
      if ( (StackFlags & 1) != 0 )
      {
        FilterOffloadCaps = ndisQueryFilterOffloadCaps(v5, (struct _NDIS_OID_REQUEST *)v3);
        *((_DWORD *)a1 + 10) = FilterOffloadCaps;
        v7 = 1;
      }
      else
      {
        v7 = 0;
        *((_DWORD *)a1 + 10) = 0;
        FilterOffloadCaps = 0;
      }
    }
    if ( *(_QWORD *)a1 )
    {
      FilterOffloadCaps = ndisQueryMiniportOffloadCaps(v1, (struct _NDIS_OID_REQUEST *)v3);
      *((_DWORD *)a1 + 10) = FilterOffloadCaps;
      v7 = 1;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = FilterOffloadCaps;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBDu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      v4,
      v7,
      *(_DWORD *)v13);
  }
  return v7;
}
