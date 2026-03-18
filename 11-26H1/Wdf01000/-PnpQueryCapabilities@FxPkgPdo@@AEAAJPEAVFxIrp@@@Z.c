/*
 * XREFs of ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140007E78
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140007E60 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x140007FC8 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x140008098 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1400082C4 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

int __fastcall FxPkgPdo::PnpQueryCapabilities(FxPkgPdo *this, FxIrp *Irp)
{
  int StackCapabilities; // r8d
  _DEVICE_CAPABILITIES *Capabilities; // rsi
  unsigned __int8 HasEnoughRemainingThreadStack; // al
  FxDeviceBase *m_DeviceBase; // rcx
  _LIST_ENTRY *WorkItem; // rax
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-98h] BYREF
  _STACK_DEVICE_CAPABILITIES parentStackCapabilities; // [rsp+30h] [rbp-88h] BYREF

  memset(&parentStackCapabilities, 0, sizeof(parentStackCapabilities));
  StackCapabilities = -1073741823;
  Capabilities = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities;
  if ( Capabilities->Version != 1 || Capabilities->Size < 0x40u )
    return FxPkgPnp::CompletePnpRequest(this, Irp, StackCapabilities);
  HasEnoughRemainingThreadStack = Mx::MxHasEnoughRemainingThreadStack();
  m_DeviceBase = this->m_DeviceBase;
  if ( HasEnoughRemainingThreadStack )
  {
    parentDeviceObject.m_DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 144LL);
    StackCapabilities = GetStackCapabilities(this->m_Globals, &parentDeviceObject, 0LL, &parentStackCapabilities);
    if ( StackCapabilities >= 0 )
    {
      FxPkgPdo::HandleQueryCapabilities(this, Capabilities, &parentStackCapabilities.DeviceCaps);
      StackCapabilities = 0;
    }
    return FxPkgPnp::CompletePnpRequest(this, Irp, StackCapabilities);
  }
  WorkItem = (_LIST_ENTRY *)IoAllocateWorkItem(m_DeviceBase->m_DeviceObject.m_DeviceObject);
  if ( !WorkItem )
  {
    StackCapabilities = -1073741670;
    return FxPkgPnp::CompletePnpRequest(this, Irp, StackCapabilities);
  }
  Irp->m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = WorkItem;
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoQueueWorkItem((PIO_WORKITEM)WorkItem, FxPkgPdo::_QueryCapsWorkItem, DelayedWorkQueue, Irp->m_Irp);
  return 259;
}
