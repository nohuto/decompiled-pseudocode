/*
 * XREFs of ndisEtwRundownFilterDrivers @ 0x140098DAC
 * Callers:
 *     ndisEtwWriteRundown @ 0x140099830 (ndisEtwWriteRundown.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x140054A80 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ndisEtwWriteFilterDriverRundown @ 0x140099078 (ndisEtwWriteFilterDriverRundown.c)
 */

void ndisEtwRundownFilterDrivers()
{
  KIRQL v0; // al
  _NDIS_FILTER_DRIVER_BLOCK *v1; // rbx
  KIRQL v2; // di
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
  v1 = ndisFilterDriverList;
  v2 = v0;
  while ( v1 )
  {
    v3 = 0;
    if ( ndisReferenceRefEx(&v1->Ref.SpinLock, 5u, (enum _NDIS_REFERENCE_STATUS *)&v3) )
    {
      KeReleaseSpinLock(&ndisFilterDriverListLock, v2);
      ndisEtwWriteFilterDriverRundown(v1);
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
      ndisDereferenceFilterDriver(v1, 1, 5u);
    }
    v1 = v1->NextFilterDriver;
  }
  KeReleaseSpinLock(&ndisFilterDriverListLock, v2);
}
