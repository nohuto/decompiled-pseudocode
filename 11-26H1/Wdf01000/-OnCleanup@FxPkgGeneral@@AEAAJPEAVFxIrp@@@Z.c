/*
 * XREFs of ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14004A0A0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x140048A00 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x14004A538 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall FxPkgGeneral::OnCleanup(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _FILE_OBJECT *_a1; // rsi
  FxDeviceBase *m_DeviceBase; // rbp
  int Next; // r12d
  int v9; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  char m_ObjectFlags; // al
  FxDeviceBase_vtbl *FsContext; // r14
  unsigned __int8 v13; // r8
  KIRQL v14; // r15
  FxDeviceBase *v15; // rcx
  FxDeviceBase_vtbl *v16; // rdx
  FxDeviceBase_vtbl *v17; // rax
  NTSTATUS v18; // esi
  _LIST_ENTRY *i; // rax
  unsigned __int64 v20; // r15
  _LIST_ENTRY *j; // r14
  _FILE_OBJECT *FileObject; // rdx
  _IRP *v23; // rcx
  NTSTATUS result; // eax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v26; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v28; // rcx
  void (__fastcall *_a2)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  unsigned int v30; // edx
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+88h] [rbp+10h]
  unsigned __int64 v33; // [rsp+90h] [rbp+18h]

  m_Irp = FxIrp->m_Irp;
  v33 = 0LL;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  _a1 = CurrentStackLocation->FileObject;
  if ( _a1 && (_a1->Flags & 0x100) != 0 )
  {
    v18 = 0;
    goto $Passthru_0;
  }
  m_DeviceBase = this->m_DeviceBase;
  Next = (int)m_DeviceBase[1].m_DisposeSingleEntry.Next;
  v9 = Next & 0x7FFFFFFF;
  m_Globals = m_DeviceBase->m_Globals;
  globals = m_Globals;
  if ( (Next & 0x7FFFFFFF) == 1 )
    goto LABEL_28;
  if ( _a1 )
  {
    if ( v9 == 2 )
    {
      FsContext = (FxDeviceBase_vtbl *)_a1->FsContext;
      goto LABEL_17;
    }
    if ( v9 == 3 )
    {
      FsContext = (FxDeviceBase_vtbl *)_a1->FsContext2;
      goto LABEL_17;
    }
  }
  else if ( !BYTE4(m_DeviceBase[1].m_Globals) || v9 != 4 )
  {
    if ( Next >= 0 )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      v18 = -1073741823;
LABEL_19:
      for ( i = this->m_FileObjectInfoHeadList.Blink; i != &this->m_FileObjectInfoHeadList; i = i->Blink )
      {
        if ( !LODWORD(i[9].Flink) && i[2].Blink )
        {
          i = i->Blink;
          break;
        }
      }
      v20 = v33;
      goto LABEL_22;
    }
LABEL_28:
    v18 = 0;
    goto LABEL_19;
  }
  m_ObjectFlags = m_DeviceBase->m_ObjectFlags;
  FsContext = 0LL;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, (unsigned __int8)CurrentStackLocation);
    v14 = PreviousIrql;
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v15 = m_DeviceBase + 2;
  v16 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v17 = v16;
  if ( _a1 )
  {
    while ( v17 != (FxDeviceBase_vtbl *)v15 )
    {
      if ( (_FILE_OBJECT *)v17[-1].SetDeviceTelemetryInfoFlags == _a1 )
        goto LABEL_13;
      v17 = (FxDeviceBase_vtbl *)v17->SelfDestruct;
    }
    goto LABEL_50;
  }
LABEL_13:
  FsContext = v17 - 1;
  if ( v17 == (FxDeviceBase_vtbl *)144 )
  {
LABEL_50:
    if ( BYTE4(m_DeviceBase[1].m_Globals)
      && m_DeviceBase->m_DeviceObject.m_DeviceObject->DeviceType == 27
      && v16 != (FxDeviceBase_vtbl *)v15 )
    {
      FsContext = v16 - 1;
      if ( v16 == (FxDeviceBase_vtbl *)144 )
        _a2 = 0LL;
      else
        _a2 = FsContext->SetDeviceTelemetryInfoFlags;
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, _a1, _a2);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
  }
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v28 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v28, v14, v13);
  }
  else
  {
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v14);
  }
  m_Globals = globals;
LABEL_17:
  if ( FsContext )
    goto LABEL_18;
  if ( Next < 0 )
    goto LABEL_28;
  WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, _a1);
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v30, 9u) )
  {
    FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    goto LABEL_28;
  }
LABEL_18:
  v18 = 0;
  if ( !FsContext )
    goto LABEL_19;
  if ( WORD1(FsContext->~FxObject) )
    v20 = (unsigned __int64)FsContext ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v20 = 0LL;
  i = (_LIST_ENTRY *)FsContext->GetDefaultIoTarget;
  if ( !i )
    i = &this->m_FileObjectInfoHeadList;
LABEL_22:
  for ( j = i->Flink; j != &this->m_FileObjectInfoHeadList; j = j->Flink )
  {
    if ( j[3].Blink )
    {
      Flink = j[3].Flink;
      PreviousIrql = 0;
      if ( Flink )
        ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &PreviousIrql);
      ((void (__fastcall *)(unsigned __int64))j[3].Blink)(v20);
      v26 = j[3].Flink;
      if ( v26 )
        ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v26->Flink[1].Blink)(v26, PreviousIrql);
    }
  }
  FileObject = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( FileObject )
    FxPkgIo::FlushAllQueuesByFileObject((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, FileObject);
$Passthru_0:
  v23 = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++v23->CurrentLocation;
    ++v23->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v23->IoStatus.Status = v18;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    result = v18;
    FxIrp->m_Irp = 0LL;
  }
  return result;
}
