/*
 * XREFs of ?HandlersSwappedEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSwapFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400A1BD4 (-ndisMSwapFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::EntryFuncs::HandlersSwappedEntry(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  __int64 v3; // rcx
  KIRQL v4; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 136);
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  ndisMSwapOpenHandlers(*(struct _NDIS_MINIPORT_BLOCK **)(a1 + 136), 8u);
  ndisMSwapFilterHandlers(*(struct _NDIS_MINIPORT_BLOCK **)(a1 + 136));
  v3 = *(_QWORD *)(a1 + 136);
  v4 = NewIrql;
  *(_QWORD *)(v3 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v4);
  return 0LL;
}
