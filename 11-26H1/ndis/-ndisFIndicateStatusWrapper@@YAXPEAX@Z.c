/*
 * XREFs of ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x14004D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __fastcall ndisFIndicateStatusWrapper(PVOID Parameter)
{
  ndisFIndicateStatusInternal(
    *((struct _NDIS_FILTER_BLOCK **)Parameter + 1),
    *((struct _NDIS_STATUS_INDICATION **)Parameter + 3));
}
