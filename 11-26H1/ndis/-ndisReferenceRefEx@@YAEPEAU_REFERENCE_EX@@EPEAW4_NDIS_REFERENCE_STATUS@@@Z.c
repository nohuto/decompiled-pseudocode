/*
 * XREFs of ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x140050310 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x14005CBA0 (NdisAllocateIoWorkItem.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1400619B0 (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1400648D0 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140071190 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400713F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisEtwRundownFilterDrivers @ 0x140098DAC (ndisEtwRundownFilterDrivers.c)
 *     ndisEtwRundownMiniportDrivers @ 0x140098E64 (ndisEtwRundownMiniportDrivers.c)
 *     NdisFRestartFilter @ 0x14009E2B0 (NdisFRestartFilter.c)
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B5114 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BB184 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400C1280 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1400C15C4 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CCA6C (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1400CCC10 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisCancelDirectOidRequest @ 0x1400CCEF0 (NdisCancelDirectOidRequest.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceRefEx(PKSPIN_LOCK SpinLock, unsigned __int8 a2, enum _NDIS_REFERENCE_STATUS *a3)
{
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // si
  unsigned __int16 v9; // cx

  v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v7 = *((_BYTE *)SpinLock + 10) == 0;
  v8 = v6;
  *(_DWORD *)a3 = 1;
  if ( v7 )
  {
    v9 = *((_WORD *)SpinLock + 4);
    if ( v9 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      *(_DWORD *)a3 = 2;
    }
    else
    {
      *((_WORD *)SpinLock + 4) = v9 + 1;
      NdisReferenceWithTag(SpinLock[2], a2);
      *(_DWORD *)a3 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v8);
  return *(_DWORD *)a3 == 0;
}
