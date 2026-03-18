/*
 * XREFs of ?PnpQueryCapabilities@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400626A8
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140062690 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x140062750 (-HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x14006288C (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgFdo::PnpQueryCapabilities(FxPkgFdo *this, FxIrp *Irp)
{
  int v4; // ebp
  _IRP *m_Irp; // rbx

  FxPkgFdo::HandleQueryCapabilities(this, Irp);
  v4 = this->SendIrpSynchronously(this, Irp);
  if ( v4 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(this, Irp);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v4;
}
