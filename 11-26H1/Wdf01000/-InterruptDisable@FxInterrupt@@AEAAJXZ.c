/*
 * XREFs of ?InterruptDisable@FxInterrupt@@AEAAJXZ @ 0x140067A2C
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067454 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxInterrupt::InterruptDisable(FxInterrupt *this)
{
  __int64 result; // rax
  FxInterruptEnableParameters params; // [rsp+20h] [rbp-18h] BYREF

  result = 0LL;
  params.Interrupt = this;
  *(_QWORD *)&params.ReturnVal = 0LL;
  if ( this->m_EvtInterruptDisable )
  {
    KeSynchronizeExecution(this->m_Interrupt, FxInterrupt::_InterruptDisableThunk, &params);
    return (unsigned int)params.ReturnVal;
  }
  return result;
}
