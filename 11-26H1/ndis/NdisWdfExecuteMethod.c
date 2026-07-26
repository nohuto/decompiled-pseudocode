/*
 * XREFs of NdisWdfExecuteMethod @ 0x1400967B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140053270 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 */

__int64 __fastcall NdisWdfExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  return ndisWmiExecuteMethod(a1, a2, a3, a4, a5);
}
