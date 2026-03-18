/*
 * XREFs of ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14003BF28
 * Callers:
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14003BA50 (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 * Callees:
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14003C450 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x14003C48C (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ??1IdleTimeoutManagement@@QEAA@XZ @ 0x140083D44 (--1IdleTimeoutManagement@@QEAA@XZ.c)
 *     ??1FxPoxInterface@@QEAA@XZ @ 0x140084528 (--1FxPoxInterface@@QEAA@XZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A857C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(FxPowerPolicyOwnerSettings *this)
{
  unsigned int v2; // edx
  FxUsbIdleInfo *m_UsbIdle; // rcx

  FxPowerPolicyOwnerSettings::CleanupPowerCallback(this);
  m_UsbIdle = this->m_UsbIdle;
  if ( m_UsbIdle )
  {
    FxUsbIdleInfo::`scalar deleting destructor'(m_UsbIdle, v2);
    this->m_UsbIdle = 0LL;
  }
  IdleTimeoutManagement::~IdleTimeoutManagement(&this->m_IdleSettings.m_TimeoutMgmt);
  FxPoxInterface::~FxPoxInterface(&this->m_PoxInterface);
  FxPowerIdleMachine::~FxPowerIdleMachine(&this->m_PowerIdleMachine);
}
