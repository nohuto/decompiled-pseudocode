/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140049910
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x140048A00 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x14004AAC0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // rsi
  unsigned __int64 v4; // r13
  _FILE_OBJECT *FileObject; // rbx
  FxDeviceBase *m_DeviceBase; // rsi
  int Next; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v11; // eax
  char m_ObjectFlags; // al
  unsigned __int64 FsContext; // r15
  KIRQL v14; // bp
  unsigned __int8 v15; // r8
  FxDeviceBase *v16; // rcx
  FxDeviceBase_vtbl *v17; // rdx
  FxDeviceBase_vtbl *v18; // rax
  unsigned int v19; // ebp
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rax
  _LIST_ENTRY *i; // rbx
  _IRP *v22; // rax
  FxDeviceBase *v23; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *v25; // r12
  int v26; // eax
  _FILE_OBJECT *_a1; // r15
  int FileObjectFromWdm; // eax
  FxFileObject *FsContext2; // rsi
  char v30; // al
  KIRQL v31; // r8
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *Blink; // rcx
  char v34; // bl
  FxDeviceBase *v35; // rax
  _IRP *v36; // rax
  char v37; // r15
  NTSTATUS v39; // eax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v41; // rcx
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v45; // rcx
  const void *_a2; // rax
  unsigned int v47; // edx
  _FX_DRIVER_GLOBALS *v48; // rbx
  unsigned int v49; // edx
  FxVerifierDownlevelOption v50; // r9d
  _FX_DRIVER_GLOBALS *v51; // rcx
  FxDeviceBase *v52; // rcx
  _IRP *Tag; // [rsp+40h] [rbp-48h]
  char v54; // [rsp+98h] [rbp+10h]
  FxFileObject *ppFxFileObject; // [rsp+A0h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+A8h] [rbp+20h]

  m_Irp = FxIrp->m_Irp;
  v4 = 0LL;
  v54 = 0;
  Tag = FxIrp->m_Irp;
  FileObject = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject || (FileObject->Flags & 0x100) == 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    Next = (int)m_DeviceBase[1].m_DisposeSingleEntry.Next;
    m_Globals = m_DeviceBase->m_Globals;
    v11 = Next & 0x7FFFFFFF;
    globals = m_Globals;
    if ( (Next & 0x7FFFFFFF) == 1 )
      goto LABEL_23;
    if ( FileObject )
    {
      if ( v11 == 2 )
      {
        FsContext = (unsigned __int64)FileObject->FsContext;
        goto LABEL_17;
      }
      if ( v11 == 3 )
      {
        FsContext = (unsigned __int64)FileObject->FsContext2;
        goto LABEL_17;
      }
    }
    else if ( !BYTE4(m_DeviceBase[1].m_Globals) || v11 != 4 )
    {
      if ( Next >= 0 )
      {
        WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
        FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
        v19 = -1073741823;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    m_ObjectFlags = m_DeviceBase->m_ObjectFlags;
    FsContext = 0LL;
    LOBYTE(ppFxFileObject) = 0;
    if ( m_ObjectFlags < 0
      && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, (unsigned __int8 *)&ppFxFileObject, a3);
      v14 = (unsigned __int8)ppFxFileObject;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
    }
    v16 = m_DeviceBase + 2;
    v17 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
    v18 = v17;
    if ( FileObject )
    {
      while ( v18 != (FxDeviceBase_vtbl *)v16 )
      {
        if ( (_FILE_OBJECT *)v18[-1].SetDeviceTelemetryInfoFlags == FileObject )
          goto LABEL_13;
        v18 = (FxDeviceBase_vtbl *)v18->SelfDestruct;
      }
    }
    else
    {
LABEL_13:
      FsContext = (unsigned __int64)&v18[-1];
      if ( v18 != (FxDeviceBase_vtbl *)144 )
      {
LABEL_14:
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
          && (v45 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
        {
          FxVerifierLock::Unlock(v45, v14, v15);
        }
        else
        {
          KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v14);
        }
        m_Globals = globals;
LABEL_17:
        if ( FsContext )
          goto LABEL_18;
        if ( Next >= 0 )
        {
          WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, FileObject);
          WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
          if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v47, 9u) )
          {
LABEL_18:
            v19 = 0;
            if ( FsContext )
            {
              if ( *(_WORD *)(FsContext + 10) )
                v4 = FsContext ^ 0xFFFFFFFFFFFFFFF8uLL;
              p_m_FileObjectInfoHeadList = *(_LIST_ENTRY **)(FsContext + 136);
              if ( !p_m_FileObjectInfoHeadList )
                p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
              goto LABEL_26;
            }
LABEL_24:
            for ( p_m_FileObjectInfoHeadList = this->m_FileObjectInfoHeadList.Blink;
                  p_m_FileObjectInfoHeadList != &this->m_FileObjectInfoHeadList;
                  p_m_FileObjectInfoHeadList = p_m_FileObjectInfoHeadList->Blink )
            {
              if ( !LODWORD(p_m_FileObjectInfoHeadList[9].Flink) && p_m_FileObjectInfoHeadList[2].Blink )
              {
                p_m_FileObjectInfoHeadList = p_m_FileObjectInfoHeadList->Blink;
                break;
              }
            }
LABEL_26:
            for ( i = p_m_FileObjectInfoHeadList->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
            {
              if ( i[4].Blink )
              {
                Flink = i[4].Flink;
                LOBYTE(ppFxFileObject) = 0;
                if ( Flink )
                  ((void (__fastcall *)(_LIST_ENTRY *, FxFileObject **))Flink->Flink[1].Flink)(Flink, &ppFxFileObject);
                ((void (__fastcall *)(unsigned __int64))i[4].Blink)(v4);
                v41 = i[4].Flink;
                if ( v41 )
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v41->Flink[1].Blink)(
                    v41,
                    (unsigned __int8)ppFxFileObject);
              }
            }
            v22 = FxIrp->m_Irp;
            v23 = this->m_DeviceBase;
            ppFxFileObject = 0LL;
            CurrentStackLocation = v22->Tail.Overlay.CurrentStackLocation;
            v25 = v23->m_Globals;
            v26 = (__int64)v23[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
            _a1 = CurrentStackLocation->FileObject;
            if ( v26 == 1 )
              goto LABEL_40;
            if ( _a1 )
            {
              if ( v26 == 2 )
              {
                FsContext2 = (FxFileObject *)_a1->FsContext;
                _a1->FsContext = 0LL;
                goto LABEL_55;
              }
              if ( v26 == 3 )
              {
                FsContext2 = (FxFileObject *)_a1->FsContext2;
                _a1->FsContext2 = 0LL;
                goto LABEL_55;
              }
            }
            else if ( v26 != 4 )
            {
              if ( v25->FxVerboseOn )
                WPP_IFR_SF_(v25, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
              FxVerifierDbgBreakPoint(v23->m_Globals);
              goto LABEL_40;
            }
            FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                                  (FxDevice *)v23,
                                  WdfFileObjectWdfCannotUseFsContexts,
                                  CurrentStackLocation->FileObject,
                                  &ppFxFileObject);
            FsContext2 = ppFxFileObject;
            if ( FileObjectFromWdm >= 0 && ppFxFileObject )
              goto LABEL_33;
            WPP_IFR_SF_q(v25, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
            WPP_IFR_SF_(v25, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
            FxVerifierDbgBreakPoint(v23->m_Globals);
LABEL_55:
            if ( !FsContext2 )
            {
LABEL_40:
              m_Irp = Tag;
              v34 = 0;
              goto $Passthru;
            }
LABEL_33:
            v30 = v23->m_ObjectFlags;
            LOBYTE(ppFxFileObject) = 0;
            if ( v30 < 0 && (v42 = (FxVerifierLock *)v23[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
            {
              FxVerifierLock::Lock(v42, (unsigned __int8 *)&ppFxFileObject, a3);
              v31 = (unsigned __int8)ppFxFileObject;
            }
            else
            {
              v31 = KeAcquireSpinLockRaiseToDpc(&v23->m_NPLock.m_Lock);
            }
            v32 = FsContext2->m_Link.Flink;
            if ( v32->Blink != &FsContext2->m_Link
              || (Blink = FsContext2->m_Link.Blink, Blink->Flink != &FsContext2->m_Link) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v32;
            v32->Blink = Blink;
            if ( SLOBYTE(v23->m_ObjectFlags) < 0
              && (v43 = (FxVerifierLock *)v23[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
            {
              FxVerifierLock::Unlock(v43, v31, v31);
            }
            else
            {
              KeReleaseSpinLock(&v23->m_NPLock.m_Lock, v31);
            }
            FsContext2->DeleteObject(FsContext2);
            goto LABEL_40;
          }
          FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
        }
LABEL_23:
        v19 = 0;
        goto LABEL_24;
      }
    }
    if ( BYTE4(m_DeviceBase[1].m_Globals)
      && m_DeviceBase->m_DeviceObject.m_DeviceObject->DeviceType == 27
      && v17 != (FxDeviceBase_vtbl *)v16 )
    {
      FsContext = (unsigned __int64)&v17[-1];
      if ( v17 == (FxDeviceBase_vtbl *)144 )
        _a2 = 0LL;
      else
        _a2 = *(const void **)(FsContext + 128);
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, FileObject, _a2);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
    goto LABEL_14;
  }
  v34 = 1;
  v19 = 0;
  v54 = 1;
$Passthru:
  v35 = this->m_DeviceBase;
  if ( BYTE1(v35[1].m_ChildEntry.Blink) )
  {
    v36 = FxIrp->m_Irp;
    ++v36->CurrentLocation;
    ++v36->Tail.Overlay.CurrentStackLocation;
    v19 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
    v37 = 0;
  }
  else
  {
    v37 = 0;
    if ( *(_QWORD *)&v35[3].m_SpinLock.m_DbgFlagIsInitialized
      && ((__int64)v35->m_DeviceObject.m_DeviceObject[1].CurrentIrp & 1) == 0 )
    {
      v39 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v35->m_DeviceObject.m_DeviceObject[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( v39 < 0 )
      {
        v48 = this->m_Globals;
        WPP_IFR_SF_qd(v48, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, v39);
        if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(v48, v49, 9u, v50) )
          FxVerifierDbgBreakPoint(v51);
        v34 = v54;
      }
      else
      {
        v37 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v19;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v34 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v52 = this->m_DeviceBase;
    if ( BYTE5(v52[1].m_Globals) )
      FxObject::DeleteObject(v52);
  }
  if ( v37 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v19;
}
