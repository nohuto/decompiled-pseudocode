/*
 * XREFs of ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x140043D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140045168 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Suspending(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v6; // r8
  int v7; // eax
  unsigned int v8; // ecx

  m_DeviceBase = This->m_PkgPnp->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  This->m_DeviceSelfManagedIoSuspend.m_Device = v6;
  v7 = FxPrePostCallback::InvokeStateless(&This->m_DeviceSelfManagedIoSuspend);
  *Status = v7;
  v8 = 10;
  if ( v7 >= 0 )
    return 7;
  return v8;
}
