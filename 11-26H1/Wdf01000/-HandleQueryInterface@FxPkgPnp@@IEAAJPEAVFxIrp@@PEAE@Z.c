/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140041338
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003F320 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140040440 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140064A50 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x14007DBD0 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x14007EEF0 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x140083BB8 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x140084578 (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _QWORD *QuadPart; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxCompanionTarget *v11; // rcx
  int Status; // edi
  _FX_DRIVER_GLOBALS *Next; // rdx
  _SINGLE_LIST_ENTRY *i; // r15
  _SINGLE_LIST_ENTRY *v15; // rbp
  char v16; // r15
  __int64 v17; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 m_ObjectSize; // r8
  int v20; // ebx
  unsigned __int64 v21; // rcx
  int v22; // eax
  void (__fastcall *v23)(_QWORD, __int64, __int64); // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v26; // eax
  _IO_STACK_LOCATION *v27; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v7 = 0LL;
  QuadPart = 0LL;
  SecurityContext = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) == 16 )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
LABEL_4:
    Status = Irp->m_Irp->IoStatus.Status;
    FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, v10, 0LL);
    for ( i = this->m_QueryInterfaceHead.Next; ; i = i->Next )
    {
      if ( !i )
        goto LABEL_9;
      v15 = i - 5;
      if ( FxIsEqualGuid(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType,
             (const _GUID *)&i[-5]) )
      {
        break;
      }
    }
    Next = (_FX_DRIVER_GLOBALS *)v15[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Next )
    {
      if ( LOWORD(Next->Linkage.Flink) > CurrentStackLocation->Parameters.QueryInterface.Size
        || WORD1(Next->Linkage.Flink) > CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        Status = -1073741306;
LABEL_9:
        v16 = 0;
        v15 = 0LL;
        goto LABEL_10;
      }
      if ( !LOBYTE(v15[6].Next) )
        memmove(QuadPart, Next, LOWORD(Next->Linkage.Flink));
    }
    v7 = v15[4].Next;
    Status = 0;
    v16 = BYTE1(v15[6].Next);
LABEL_10:
    FxWaitLockInternal::ReleaseLock(&this->m_QueryInterfaceLock, Next);
    if ( Status < 0 )
    {
      if ( !v15 )
        return Status;
      goto LABEL_21;
    }
    if ( !v15 )
      return Status;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( v7 )
    {
      v21 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !(_WORD)m_ObjectSize )
        v21 = 0LL;
      v22 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
              v21,
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId,
              QuadPart,
              Parameters);
      Status = v22;
      v20 = v22;
      if ( v22 < 0 && v22 != -1073741637 )
        goto LABEL_21;
    }
    else
    {
      v20 = 0;
      Status = 0;
    }
    if ( v16 )
    {
      v26 = PnpPassThroughQI(this->m_Device, Irp);
    }
    else
    {
      v23 = (void (__fastcall *)(_QWORD, __int64, __int64))QuadPart[2];
      if ( v23 )
        v23(QuadPart[1], v17, m_ObjectSize);
      if ( FxDevice::IsPdo(this->m_Device) )
        goto LABEL_21;
      Irp->m_Irp->IoStatus.Status = v20;
      v27 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v27[-1].MajorFunction = *(_OWORD *)&v27->MajorFunction;
      *(_OWORD *)&v27[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v27->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v27[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v27->Parameters.SetQuota + 6);
      v27[-1].FileObject = v27->FileObject;
      v27[-1].Control = 0;
      v26 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
    Status = v26;
LABEL_21:
    *CompleteRequest = 1;
    return Status;
  }
  if ( RtlCompareMemory(SecurityContext, &GUID_SECURE_DRIVER_INTERFACE, 0x10uLL) != 16 || !this->m_CompanionTarget )
    goto LABEL_4;
  return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v11, Irp, CompleteRequest);
}
