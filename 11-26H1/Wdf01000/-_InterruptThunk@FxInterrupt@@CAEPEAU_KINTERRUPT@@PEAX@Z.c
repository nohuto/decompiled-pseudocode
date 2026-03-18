/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140053000
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x140053190 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1400532A0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x140053368 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  unsigned __int8 (__fastcall **p_m_EvtInterruptIsr)(WDFINTERRUPT__ *, unsigned int); // rdi
  void (__fastcall *v4)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  unsigned __int64 v5; // rcx
  void (__fastcall *v7)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // di
  void (__fastcall *v10)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+20h] [rbp-18h]

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    v10 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1400C90A8 + 16LL);
    if ( v10 )
    {
      v13 = 2;
      v10(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v13);
    }
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else if ( ServiceContext->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(ServiceContext);
    v7 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1400C90A8 + 16LL);
    if ( v7 )
    {
      v12 = 2;
      v7(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v12);
    }
    v8 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !ServiceContext->m_ObjectSize )
      v8 = 0LL;
    v9 = ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v8, ServiceContext->m_InterruptInfo.MessageNumber);
    FxInterrupt::ReleaseLock(ServiceContext);
    return v9;
  }
  else
  {
    p_m_EvtInterruptIsr = &ServiceContext->m_EvtInterruptIsr;
    v4 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1400C90A8 + 16LL);
    if ( v4 )
    {
      v11 = 2;
      v4(p_m_EvtInterruptIsr, 8LL, 2181038080LL, 3936LL, v11);
    }
    v5 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !ServiceContext->m_ObjectSize )
      v5 = 0LL;
    return (*p_m_EvtInterruptIsr)((WDFINTERRUPT__ *)v5, ServiceContext->m_InterruptInfo.MessageNumber);
  }
}
