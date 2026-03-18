/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1400587F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     FX_TRACK_DRIVER @ 0x140058B50 (FX_TRACK_DRIVER.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x140058B80 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x140058BF8 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x14005B670 (WPP_IFR_SF_qqcq.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v5; // r8
  const void *v6; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  FxWmiProvider *ProviderLocked; // r14
  FxWmiInstance *InstanceReferencedLocked; // r13
  char v10; // r12
  unsigned __int64 _a3; // rbp
  _FX_DRIVER_GLOBALS *v12; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS Status; // ebx
  FxTagTracker *v16; // rcx
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  char v18; // r15
  _LIST_ENTRY *v19; // rcx
  signed __int32 RefCount; // r8d
  KIRQL v21; // r12
  _LIST_ENTRY *Flink; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v25; // r8
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  char v27; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  irql = 0;
  FX_TRACK_DRIVER(m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = (FxWmiProvider *)(unsigned int)v6;
  InstanceReferencedLocked = (FxWmiInstance *)(unsigned int)v6;
  v27 = (char)v6;
  v10 = (char)v6;
  _a3 = CurrentStackLocation->MinorFunction;
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn != (_BYTE)v6 )
  {
    m_DeviceBase = this->m_DeviceBase;
    v25 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_DeviceBase->m_ObjectSize == (_WORD)v6 )
      v25 = v6;
    WPP_IFR_SF_qqcq(
      v12,
      5u,
      0xDu,
      0xEu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      v25,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      Irp);
    LODWORD(v6) = 0;
  }
  if ( (unsigned __int8)_a3 > 9u && (_BYTE)_a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != this->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_4:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_6;
    }
LABEL_23:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_6;
  }
  if ( (_BYTE)_a3 == 8 || (_BYTE)_a3 == 11 )
  {
    Status = (int)v6;
    goto LABEL_15;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v5);
    v21 = irql;
  }
  else
  {
    v21 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    LOBYTE(RefCount) = _a3;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[_a3].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)_a3)) != 0LL )
    {
      RefCount = _InterlockedIncrement(&ProviderLocked->m_Refcnt);
      if ( SLOBYTE(ProviderLocked->m_ObjectFlags) < 0 )
      {
        v16 = *(FxTagTracker **)&ProviderLocked[-1].m_Guid.Data1;
        if ( v16 )
          FxTagTracker::UpdateTagHistory(
            v16,
            (void *)_a3,
            735,
            "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp",
            TagAddRef,
            RefCount);
      }
      goto LABEL_11;
    }
    Status = -1073741162;
  }
  else
  {
    Status = -1073741163;
  }
  ProviderLocked = 0LL;
LABEL_11:
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v19 = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)v19, v21, RefCount);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v21);
  }
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v10 = 1;
    v18 = 0;
    goto $Done_26;
  }
  v10 = 0;
LABEL_15:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[_a3].Handler;
  if ( Handler )
  {
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v18 = 1;
  }
  else
  {
    v18 = v27;
  }
$Done_26:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)_a3,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)_a3,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v18 )
  {
    if ( v10 )
      goto LABEL_23;
    goto LABEL_4;
  }
LABEL_6:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
