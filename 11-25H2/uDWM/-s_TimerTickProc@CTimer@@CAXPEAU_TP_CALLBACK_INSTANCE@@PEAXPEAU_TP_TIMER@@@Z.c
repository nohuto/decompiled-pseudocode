/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18004FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18004FD80 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
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
      CMILRefCountBase::AddRef((CMILRefCountBase *)Context);
      CTimer::_OnTimerTick(v4);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
