/*
 * XREFs of ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14005FD48
 * Callers:
 *     ?_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14005FD30 (-_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006001C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryDeviceRelations(FxPkgPdo *this, FxIrp *Irp)
{
  unsigned int Status; // ebx
  unsigned int Length; // ecx
  unsigned __int64 Pool2; // r14
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  __int64 v9; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  Status = Irp->m_Irp->IoStatus.Status;
  Length = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 1 || Length == 3 )
    {
      v9 = 168LL;
      if ( Length != 3 )
        v9 = 1840LL;
      Status = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, *(FxRelatedDeviceList **)((char *)&this->__vftable + v9));
      if ( Status == -1073741637 )
        Status = Irp->m_Irp->IoStatus.Status;
    }
    else if ( Length == 4 )
    {
      Pool2 = ExAllocatePool2(256LL, 16LL, this->m_Globals->Tag);
      if ( Pool2 )
      {
        m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
        ObfReferenceObject(m_DeviceObject);
        *(_QWORD *)(Pool2 + 8) = m_DeviceObject;
        Status = 0;
        *(_DWORD *)Pool2 = 1;
        Irp->m_Irp->IoStatus.Information = Pool2;
      }
      else
      {
        Status = -1073741670;
        Irp->m_Irp->IoStatus.Information = 0LL;
        m_DeviceBase = this->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxPkgPdo_cpp_Traceguids, _a1, -1073741670);
      }
    }
  }
  else
  {
    Status = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, Status);
}
