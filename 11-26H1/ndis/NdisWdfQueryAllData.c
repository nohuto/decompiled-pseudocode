/*
 * XREFs of NdisWdfQueryAllData @ 0x140096A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 */

__int64 __fastcall NdisWdfQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  return ndisWmiQueryAllData(a1, a2, a3, a4, a5, a6);
}
