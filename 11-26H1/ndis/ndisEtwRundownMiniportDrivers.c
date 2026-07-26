/*
 * XREFs of ndisEtwRundownMiniportDrivers @ 0x140098E64
 * Callers:
 *     ndisEtwWriteRundown @ 0x140099830 (ndisEtwWriteRundown.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ndisEtwWriteMiniportDriverRundown @ 0x1400991A0 (ndisEtwWriteMiniportDriverRundown.c)
 */

void ndisEtwRundownMiniportDrivers()
{
  KIRQL v0; // al
  struct _NDIS_M_DRIVER_BLOCK *v1; // rbx
  KIRQL v2; // di
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v1 = ndisMiniDriverList;
  v2 = v0;
  while ( v1 )
  {
    v3 = 0;
    if ( ndisReferenceRefEx(&v1->Ref.SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)&v3) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
      ndisEtwWriteMiniportDriverRundown(v1);
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      ndisDereferenceDriver(v1, 1, 0xCu);
    }
    v1 = v1->NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
}
