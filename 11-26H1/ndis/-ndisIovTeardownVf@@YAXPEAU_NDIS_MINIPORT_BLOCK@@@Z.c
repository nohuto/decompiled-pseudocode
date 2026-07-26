/*
 * XREFs of ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E125C
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisIovTeardownVf(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _IRP *InvalidateBlockIoctlVf; // rcx

  InvalidateBlockIoctlVf = a1->InvalidateBlockIoctlVf;
  if ( InvalidateBlockIoctlVf )
  {
    a1->InvalidateBlockCancelling = 1;
    IoCancelIrp(InvalidateBlockIoctlVf);
    ndisWaitForKernelObject(&a1->InvalidateBlockEvent);
    IoFreeIrp(a1->InvalidateBlockIoctlVf);
    a1->InvalidateBlockIoctlVf = 0LL;
  }
}
