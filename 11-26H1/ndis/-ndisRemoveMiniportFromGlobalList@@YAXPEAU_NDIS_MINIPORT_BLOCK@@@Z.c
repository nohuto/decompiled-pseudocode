/*
 * XREFs of ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140070980
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x140095180 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141944 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisRemoveMiniportFromGlobalList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // r8
  struct _NDIS_MINIPORT_BLOCK **i; // r9
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  for ( i = &ndisMiniportList; ; i = &v4->NextGlobalMiniport )
  {
    v4 = *i;
    if ( !*i )
      break;
    if ( v4 == a1 )
    {
      *i = a1->NextGlobalMiniport;
      break;
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
}
