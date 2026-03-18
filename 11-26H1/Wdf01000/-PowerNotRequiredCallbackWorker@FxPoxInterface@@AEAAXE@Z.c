/*
 * XREFs of ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x140041080
 * Callers:
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x140040DDC (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x140041050 (-PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z.c)
 * Callees:
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1400419C8 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x140041A1C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallbackWorker(
        FxPoxInterface *this,
        unsigned __int8 InvokedFromPoxCallback)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DevicePowerRequiredLock.m_Lock);
  this->m_DevicePowerRequired = 0;
  KeReleaseSpinLock(&this->m_DevicePowerRequiredLock.m_Lock, v4);
  if ( InvokedFromPoxCallback )
    FxPoxInterface::DprProcessEventFromPoxCallback(this, DprEventPoxDoesNotRequirePower);
  else
    FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventPoxDoesNotRequirePower);
}
