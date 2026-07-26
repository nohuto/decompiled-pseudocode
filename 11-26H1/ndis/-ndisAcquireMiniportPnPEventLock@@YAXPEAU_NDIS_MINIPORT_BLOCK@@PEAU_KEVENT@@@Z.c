/*
 * XREFs of ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x14005D030
 * Callers:
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140157700 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401767B0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisAcquireMiniportPnPEventLock(struct _NDIS_MINIPORT_BLOCK *a1, struct _KEVENT *a2)
{
  KIRQL v4; // si
  unsigned int i; // ecx
  _KEVENT *PnPEventLockEvent; // rbp

  KeInitializeEvent(a2, NotificationEvent, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  for ( i = a1->SyncFlags; (i & 8) != 0; i = a1->SyncFlags )
  {
    PnPEventLockEvent = a1->PnPEventLockEvent;
    if ( !PnPEventLockEvent )
    {
      KeClearEvent(a2);
      a1->PnPEventLockEvent = a2;
      PnPEventLockEvent = a2;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    ndisWaitForKernelObject(PnPEventLockEvent);
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  a1->MiniportThread = 0LL;
  a1->SyncFlags = i | 8;
  KeReleaseSpinLock(&a1->Lock, v4);
}
