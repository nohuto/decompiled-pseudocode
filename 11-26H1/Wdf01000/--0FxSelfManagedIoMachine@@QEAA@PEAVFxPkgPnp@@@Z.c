/*
 * XREFs of ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x14001C578
 * Callers:
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x14001C46C (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x14001CD08 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

void __fastcall FxSelfManagedIoMachine::FxSelfManagedIoMachine(FxSelfManagedIoMachine *this, FxPkgPnp *PkgPnp)
{
  this->m_DeviceSelfManagedIoCleanup.m_Method = 0LL;
  this->m_DeviceSelfManagedIoCleanup.__vftable = (FxPnpDeviceSelfManagedIoCleanup_vtbl *)FxPnpDeviceSelfManagedIoCleanup::`vftable';
  this->m_DeviceSelfManagedIoFlush.m_Method = 0LL;
  this->m_DeviceSelfManagedIoFlush.__vftable = (FxPnpDeviceSelfManagedIoFlush_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceSelfManagedIoInit.m_Method = 0LL;
  this->m_DeviceSelfManagedIoInit.__vftable = (FxPnpDeviceSelfManagedIoInit_vtbl *)FxPnpDeviceSelfManagedIoInit::`vftable';
  this->m_DeviceSelfManagedIoSuspend.__vftable = (FxPnpDeviceSelfManagedIoSuspend_vtbl *)FxPnpDeviceSelfManagedIoSuspend::`vftable';
  this->m_DeviceSelfManagedIoSuspend.m_Method = 0LL;
  this->m_DeviceSelfManagedIoRestart.__vftable = (FxPnpDeviceSelfManagedIoRestart_vtbl *)FxPnpDeviceSelfManagedIoRestart::`vftable';
  this->m_DeviceSelfManagedIoRestart.m_Method = 0LL;
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  this->m_PkgPnp = PkgPnp;
  *(_WORD *)&this->m_EventHistoryIndex = 0;
  this->m_CurrentState = 1;
  this->m_Events.E = 0LL;
  this->m_States.S = 0LL;
}
