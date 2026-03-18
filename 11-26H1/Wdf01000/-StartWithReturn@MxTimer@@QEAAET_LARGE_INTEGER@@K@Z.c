/*
 * XREFs of ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x140063A20
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x14006061C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x140063AC0 (-StartTimer@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall MxTimer::StartWithReturn(MxTimer *this, _LARGE_INTEGER DueTime, ULONG TolerableDelay)
{
  _EXT_SET_PARAMETERS_V0 parameters; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->m_Timer.m_IsExtTimer )
    return KeSetCoalescableTimer(
             &this->m_Timer.KernelTimer,
             DueTime,
             this->m_Timer.m_Period,
             TolerableDelay,
             &this->m_Timer.TimerDpc);
  *(_QWORD *)&parameters.Version = 0LL;
  if ( TolerableDelay == -1 )
    parameters.NoWakeTolerance = -1LL;
  else
    parameters.NoWakeTolerance = 10000LL * TolerableDelay;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
           this->m_Timer.m_KernelExTimer,
           (_LARGE_INTEGER)DueTime.QuadPart,
           10000LL * this->m_Timer.m_Period,
           &parameters);
}
