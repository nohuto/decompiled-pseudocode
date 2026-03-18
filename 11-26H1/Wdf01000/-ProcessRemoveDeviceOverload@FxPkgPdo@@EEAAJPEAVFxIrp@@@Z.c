/*
 * XREFs of ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x14007E080
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003915C (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x140039960 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::ProcessRemoveDeviceOverload(FxPkgPdo *this, FxIrp *Irp)
{
  __int64 result; // rax

  if ( this->m_CanBeDeleted )
  {
    IoReleaseRemoveLockAndWaitEx(
      (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      Irp->m_Irp,
      0x20u);
    FxPkgPnp::CleanupStateMachines(this, 1u);
    FxPkgPnp::DeleteDevice(this);
    IofCompleteRequest(Irp->m_Irp, 0);
    result = 0LL;
    Irp->m_Irp = 0LL;
  }
  else
  {
    this->m_DeviceRemoveProcessed = 0LL;
    return FxPkgPnp::CompletePnpRequest(this, Irp, Irp->m_Irp->IoStatus.Status);
  }
  return result;
}
