/*
 * XREFs of ?_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A36C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::_PnpSetLock(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 (__fastcall *m_Lock)(unsigned __int64, _IO_STACK_LOCATION *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v7; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  signed int v9; // r8d

  m_DeviceBase = This->m_DeviceBase;
  m_Lock = (__int64 (__fastcall *)(unsigned __int64, _IO_STACK_LOCATION *))This[1].m_SpinLock.m_Lock;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Lock )
  {
    v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v7 = 0LL;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    LOBYTE(CurrentStackLocation) = CurrentStackLocation->Parameters.SetLock.Lock;
    v9 = m_Lock(v7, CurrentStackLocation);
    if ( v9 >= 0 )
      Irp->m_Irp->IoStatus.Information = 0LL;
  }
  else
  {
    v9 = -1073741823;
  }
  return FxPkgPnp::CompletePnpRequest(This, Irp, v9);
}
