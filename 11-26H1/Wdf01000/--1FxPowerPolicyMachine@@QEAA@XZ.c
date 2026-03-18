/*
 * XREFs of ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14003BA50
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003AF3C (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14003BAA0 (--1FxThreadedEventQueue@@QEAA@XZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14003BF28 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyMachine::~FxPowerPolicyMachine(FxPowerPolicyMachine *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdi

  m_Owner = this->m_Owner;
  if ( m_Owner )
  {
    FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(this->m_Owner);
    FxStump::operator delete(m_Owner);
    this->m_Owner = 0LL;
  }
  FxThreadedEventQueue::~FxThreadedEventQueue((FxWorkItemEventQueue *)this);
}
