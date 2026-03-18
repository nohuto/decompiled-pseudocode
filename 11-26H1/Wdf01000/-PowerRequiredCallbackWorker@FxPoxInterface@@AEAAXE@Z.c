/*
 * XREFs of ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x140041638
 * Callers:
 *     ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x140041620 (-PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x140071CD4 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x1400416B4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1400419C8 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x140041A1C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  FxPkgPnp::SaveRequestD0IrpReasonHint(this->m_PkgPnp, RequestD0ForPowerReqCb);
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 1;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxRequiresPower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxRequiresPower);
}
