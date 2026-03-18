/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140026E7C
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x14005F530 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x14002EF24 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  bool v3; // zf
  ULONG Tag; // r8d
  void *v5; // rax
  FX_POOL **v6; // rax
  FxRequestTimer *v7; // rbx
  unsigned int v8; // edx
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  v3 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v10.m128i_i64[0] = 0LL;
  v10.m128i_i64[1] = 64LL;
  if ( v3 )
    v5 = 0LL;
  else
    v5 = retaddr;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x98uLL, Tag, v5);
  v7 = (FxRequestTimer *)v6;
  if ( v6 )
  {
    memset(v6, 0, 0x98uLL);
    v7->Timer.m_Timer.m_TimerContext = this;
    v7->Timer.m_Timer.m_TimerCallback = FxRequestBase::_TimerDPC;
    v7->Timer.m_Timer.m_Period = 0;
    KeInitializeTimerEx(&v7->Timer.m_Timer.KernelTimer, NotificationTimer);
    KeInitializeDpc(&v7->Timer.m_Timer.TimerDpc, v7->Timer.m_Timer.m_TimerCallback, v7->Timer.m_Timer.m_TimerContext);
    v7->Timer.m_Timer.m_IsExtTimer = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v7, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v7, v8);
    return 0LL;
  }
  return 3221225626LL;
}
