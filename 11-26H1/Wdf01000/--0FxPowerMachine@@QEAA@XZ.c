/*
 * XREFs of ??0FxPowerMachine@@QEAA@XZ @ 0x14001CD48
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x14001C850 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x14001CC70 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxPowerMachine::FxPowerMachine(FxPowerMachine *this, unsigned __int8 a2)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, a2);
  this->m_WaitWakeLock.m_DbgFlagIsInitialized = 1;
  this->m_WaitWakeLock.m_Lock = 0LL;
  this->m_WaitWakeIrpToBeProcessedList.Blink = &this->m_WaitWakeIrpToBeProcessedList;
  this->m_WaitWakeIrpToBeProcessedList.Flink = &this->m_WaitWakeIrpToBeProcessedList;
  this->m_Queue.E = 0LL;
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = 768;
  *(_DWORD *)&this->m_SingularEventsPresent = 0;
}
