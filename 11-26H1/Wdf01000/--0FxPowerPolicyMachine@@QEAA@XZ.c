/*
 * XREFs of ??0FxPowerPolicyMachine@@QEAA@XZ @ 0x14001CE24
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x14001C850 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x14001CC70 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxPowerPolicyMachine::FxPowerPolicyMachine(FxPowerPolicyMachine *this, unsigned __int8 a2)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, a2);
  this->m_Owner = 0LL;
  *(_OWORD *)this->m_Queue = 0LL;
  *(_OWORD *)&this->m_Queue[4] = 0LL;
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = 1280;
  this->m_SingularEventsPresent = 0;
}
