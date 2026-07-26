/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1400CD200
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x140050920 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  PNDIS_OID_REQUEST v5; // rbx
  KIRQL v7; // dl
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  PNDIS_OID_REQUEST v9; // [rsp+50h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+60h] [rbp+18h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v5 = OidRequest;
  v8[0] = 0LL;
  v8[2] = 0LL;
  v9 = OidRequest;
  if ( !v3 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_OBJECT_HEADER *)NdisFilterHandle, OidRequest, 0, &v9);
    v5 = v9;
  }
  *(_DWORD *)&v5->NdisReserved[8] = Status;
  v8[1] = NdisFilterHandle;
  v8[3] = v5;
  if ( ndisExpandStack((void (*)(void *))ndisFDirectOidRequestCompleteInternal, v8) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    *(_QWORD *)v5->NdisReserved = *((_QWORD *)NdisFilterHandle + 30);
    *((_QWORD *)NdisFilterHandle + 30) = v5;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v7 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
