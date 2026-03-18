/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1400586A8
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x140058690 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x140058B50 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock **p_m_CallbackLock; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall **p_m_EvtInterruptWorkItem)(WDFINTERRUPT__ *, void *); // rdi
  void (__fastcall *v5)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  FxDeviceBase *v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rbx
  void (__fastcall *v12)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  p_m_CallbackLock = &this->m_CallbackLock;
  m_CallbackLock = this->m_CallbackLock;
  p_m_EvtInterruptWorkItem = &this->m_EvtInterruptWorkItem;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v12 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(unk_1400C90A8 + 24LL);
    if ( v12 )
      v12(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v15 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = m_ObjectSize == 0;
    v16 = this->m_ObjectSize;
    if ( v9 )
      v15 = 0LL;
    v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    (*p_m_EvtInterruptWorkItem)((WDFINTERRUPT__ *)v17, (void *)v15);
    LOBYTE(v18) = irql;
    (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v18);
  }
  else
  {
    v5 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(unk_1400C90A8 + 24LL);
    if ( v5 )
      v5(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    v6 = this->m_DeviceBase;
    v7 = v6->m_ObjectSize;
    v8 = (unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = v7 == 0;
    v10 = this->m_ObjectSize;
    if ( v9 )
      v8 = 0LL;
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v10 )
      v11 = 0LL;
    (*p_m_EvtInterruptWorkItem)((WDFINTERRUPT__ *)v11, (void *)v8);
  }
}
