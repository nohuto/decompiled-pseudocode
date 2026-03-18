/*
 * XREFs of ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071964
 * Callers:
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x140071940 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x140053190 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1400532A0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxInterrupt::InterruptEnableInvokeCallback(FxInterrupt *this)
{
  WDFINTERRUPT__ *v1; // rdi
  FxDeviceBase *v3; // rdx
  unsigned __int16 v4; // ax
  WDFDEVICE__ *v5; // rdx
  unsigned int v6; // edi
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v10; // rdx

  v1 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( this->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(this);
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v10 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v10 = 0LL;
    if ( !this->m_ObjectSize )
      v1 = 0LL;
    v6 = this->m_EvtInterruptEnable(v1, v10);
    FxInterrupt::ReleaseLock(this);
  }
  else
  {
    v3 = this->m_DeviceBase;
    v4 = v3->m_ObjectSize;
    v5 = (WDFDEVICE__ *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4 )
      v5 = 0LL;
    if ( !this->m_ObjectSize )
      v1 = 0LL;
    return (unsigned int)this->m_EvtInterruptEnable(v1, v5);
  }
  return v6;
}
