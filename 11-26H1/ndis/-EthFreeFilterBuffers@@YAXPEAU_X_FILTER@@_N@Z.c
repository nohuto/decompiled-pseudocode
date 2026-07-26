/*
 * XREFs of ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x140097B74
 * Callers:
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068900 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x14008DD50 (-EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisFreeRWLock @ 0x140054D90 (NdisFreeRWLock.c)
 */

void __fastcall EthFreeFilterBuffers(_DWORD *P, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _NDIS_RW_LOCK_EX *v8; // rcx

  if ( P[86] )
  {
    P[86] = 0;
    v4 = (void *)*((_QWORD *)P + 47);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 47) = 0LL;
    }
    v5 = (void *)*((_QWORD *)P + 44);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)P + 44) = 0LL;
    }
    v6 = (void *)*((_QWORD *)P + 49);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *((_QWORD *)P + 49) = 0LL;
    }
    v7 = (void *)*((_QWORD *)P + 45);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)P + 45) = 0LL;
    }
  }
  if ( a2 )
  {
    v8 = (struct _NDIS_RW_LOCK_EX *)*((_QWORD *)P + 36);
    if ( v8 )
      NdisFreeRWLock(v8);
    ExFreePoolWithTag(P, 0);
  }
}
