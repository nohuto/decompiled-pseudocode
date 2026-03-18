/*
 * XREFs of ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1400AA0C4
 * Callers:
 *     imp_WdfInterruptDisable @ 0x1400A2D50 (imp_WdfInterruptDisable.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067454 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxInterrupt::ForceDisconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int Flags; // edi
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // r8
  const void *v6; // r10
  bool v7; // zf
  struct _KINTERRUPT *m_Interrupt; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  Flags = m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  v6 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = m_ObjectSize == 0;
  m_Interrupt = this->m_Interrupt;
  m_Globals = this->m_Globals;
  if ( v7 )
    v6 = 0LL;
  WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x1Au, WPP_InterruptObject_cpp_Traceguids, v6, v5, m_Interrupt);
  this->m_ForceDisconnected = 1;
  return FxInterrupt::Disconnect(this, (Flags & 0x2000) == 0);
}
