/*
 * XREFs of ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14001D000 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009734C (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1400974A0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D1780 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1400D22B8 (ndisNsiEnumerateAllIfRcvAddressesInOneInterface.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D23D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D26C0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x140152A60 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIfQueryObject @ 0x140152DB0 (ndisIfQueryObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1401544F0 (ndisNsiGetInterfaceRosInformation.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisIfReferenceMiniport(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v5; // si

  Miniport = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( a1->MiniportAvailable )
  {
    Miniport = a1->Miniport;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->MpRefCountTracker, a2);
    ++a1->MiniportLinkReference;
  }
  KeReleaseSpinLock(&SpinLock, v5);
  return Miniport;
}
