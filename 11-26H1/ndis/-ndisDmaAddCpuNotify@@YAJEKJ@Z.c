/*
 * XREFs of ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1400C99C8
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1400A56B0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisDmaAddCpuNotify(KIRQL a1)
{
  KIRQL v1; // al
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  KIRQL v3; // di
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // eax
  KIRQL v5; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v2 = ndisMiniportList;
  v3 = v1;
  NewIrql = v1;
  while ( v2 )
  {
    PnPDeviceState = v2->PnPDeviceState;
    if ( PnPDeviceState && ((PnPDeviceState - 3) & 0xFFFFFFFD) != 0 && (unsigned __int8)ndisReferenceMiniport(v2, 0x43u) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v3);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
      v5 = NewIrql;
      v2->MiniportThread = 0LL;
      KeReleaseSpinLock(&v2->Lock, v5);
      v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      NewIrql = v3;
      ndisDereferenceMiniport(v2, 0x43u);
    }
    v2 = v2->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v3);
  return 0LL;
}
