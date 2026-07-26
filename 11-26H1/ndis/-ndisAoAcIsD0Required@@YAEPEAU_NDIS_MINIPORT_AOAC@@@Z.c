/*
 * XREFs of ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14004A090
 * Callers:
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x140049F30 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14004A060 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisAoAcIsD0Required(struct _NDIS_MINIPORT_AOAC *a1)
{
  return *((_DWORD *)a1 + 13) || *((_DWORD *)a1 + 95);
}
