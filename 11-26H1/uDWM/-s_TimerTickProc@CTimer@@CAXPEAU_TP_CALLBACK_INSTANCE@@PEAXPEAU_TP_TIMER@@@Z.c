/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18006CA20 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 */

void __fastcall CTimer::s_TimerTickProc(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int64 *Context,
        PTP_TIMER Timer)
{
  CTimer *v4; // rcx

  if ( Context )
  {
    if ( Timer == (PTP_TIMER)_InterlockedCompareExchange64(Context + 7, (signed __int64)Timer, (signed __int64)Timer) )
    {
      CBaseObject::AddRef((CBaseObject *)Context);
      CTimer::_OnTimerTick(v4);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
