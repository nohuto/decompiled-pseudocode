/*
 * XREFs of ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400409C8
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400456D0 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140040C1C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x140043CD0 (-SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

int __fastcall FxPkgPdo::DispatchSystemSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxIrp *v6; // rdx
  unsigned __int8 v8; // r8
  KIRQL v9; // bl
  unsigned __int8 v10; // r8

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v6 = Irp;
  if ( !m_Owner )
    return FxPkgPnp::CompletePowerRequest(this, v6, 0);
  FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(&m_Owner->m_DevicePowerIrpTracker, Irp);
  if ( this->m_SystemPowerState == 1 )
  {
    v9 = KfRaiseIrql(2u);
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0, v10);
    KeLowerIrql(v9);
    v6 = Irp;
    return FxPkgPnp::CompletePowerRequest(this, v6, 0);
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingSystemPowerIrp = Irp->m_Irp;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolSx, v8);
  return 259;
}
