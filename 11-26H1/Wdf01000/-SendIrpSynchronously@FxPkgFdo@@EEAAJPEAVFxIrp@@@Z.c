/*
 * XREFs of ?SendIrpSynchronously@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x140007B80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

NTSTATUS __fastcall FxPkgFdo::SendIrpSynchronously(FxPkgFdo *this, FxIrp *Irp)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IRP *v6; // rax
  _IO_STACK_LOCATION *v7; // rdx
  NTSTATUS result; // eax
  FxCREvent Event; // [rsp+20h] [rbp-28h] BYREF

  m_Irp = Irp->m_Irp;
  Event.m_Event.m_DbgFlagIsInitialized = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
  KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
  v6 = Irp->m_Irp;
  Event.m_Event.m_DbgFlagIsInitialized = 1;
  v7 = v6->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
  v7[-1].Context = &Event;
  v7[-1].Control = -32;
  result = IofCallDriver(m_DeviceObject, Irp->m_Irp);
  if ( result == 259 )
  {
    FxCREvent::EnterCRAndWaitAndLeave(&Event);
    return Irp->m_Irp->IoStatus.Status;
  }
  return result;
}
