/*
 * XREFs of ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140157700
 * Callers:
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401578D0 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x140157EB0 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x14005D030 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005D8C0 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140176A70 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBindingUnlocked(struct _NDIS_OPEN_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _KEVENT v5; // [rsp+20h] [rbp-28h] BYREF

  memset(&v5, 0, sizeof(v5));
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  ndisAcquireMiniportPnPEventLock(a1->MiniportHandle, &v5);
  LODWORD(a2) = ndisPnPNotifyBinding(a1, a2);
  ndisReleaseMiniportPnPEventLock(a1->MiniportHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return (unsigned int)a2;
}
