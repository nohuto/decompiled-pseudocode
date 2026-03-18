/*
 * XREFs of ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x140082934
 * Callers:
 *     ?Dispose@FxInterrupt@@UEAAEXZ @ 0x14007F020 (-Dispose@FxInterrupt@@UEAAEXZ.c)
 * Callees:
 *     ?FlushAndRundownInternal@FxInterrupt@@AEAAXXZ @ 0x1400829B0 (-FlushAndRundownInternal@FxInterrupt@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::FlushAndRundown(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  KeFlushQueuedDpcs();
  FxInterrupt::FlushAndRundownInternal(this);
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
  {
    this->m_DeviceBase = 0LL;
    m_DeviceBase->Release(
      m_DeviceBase,
      this,
      1578,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  }
  this->Release(
    this,
    FxInterrupt::_InterruptThunk,
    1584,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
}
