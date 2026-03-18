/*
 * XREFs of ?DisconnectInternal@FxInterrupt@@QEAAXXZ @ 0x1400679E0
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067454 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::DisconnectInternal(FxInterrupt *this)
{
  __int64 v1; // rdx
  struct _KINTERRUPT *m_Interrupt; // rax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS params; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  m_Interrupt = this->m_Interrupt;
  this->m_Interrupt = 0LL;
  *(_QWORD *)&params.Version = 4LL;
  params.ConnectionContext.Generic = m_Interrupt;
  (*(void (__fastcall **)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))(v1 + 1160))(&params);
}
