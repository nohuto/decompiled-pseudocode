/*
 * XREFs of imp_WdfRequestGetFileObject @ 0x14004B5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rax
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _FX_DRIVER_GLOBALS *v8; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  _FILE_OBJECT *FileObject; // rsi
  int Next; // ecx
  _FX_DRIVER_GLOBALS *v12; // r13
  int v13; // eax
  char m_ObjectFlags; // al
  unsigned __int64 FsContext; // rbx
  KIRQL v16; // r13
  FxDeviceBase_vtbl *v17; // rdx
  FxDeviceBase_vtbl *v18; // r8
  FxDeviceBase_vtbl *v19; // rcx
  signed int _a1; // esi
  FxRequest_vtbl *v23; // rax
  int v24; // eax
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v26; // rcx
  int IsDriverOwned; // ebx
  unsigned __int8 v28; // r8
  const void *v29; // rax
  unsigned int v30; // edx
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  unsigned __int8 v32; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-10h] BYREF
  __int16 v35; // [rsp+58h] [rbp-8h]
  __int16 v36; // [rsp+5Ah] [rbp-6h]
  int v37; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 irql; // [rsp+A8h] [rbp+48h] BYREF
  int v39; // [rsp+B0h] [rbp+50h]
  FxRequest *pRequest; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v5) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v36 = v5;
    pRequest = 0LL;
    v37 = 0;
    v23 = flags->__vftable;
    globals = (_FX_DRIVER_GLOBALS *)&pRequest;
    v35 = 4104;
    v24 = v23->QueryInterface(flags, (FxQueryInterfaceParams *)&globals);
    v3 = 0LL;
    if ( v24 < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, Request, a3, 0, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(flags->m_Globals, Request, 9u)
     || m_Globals->FxVerifyDownlevel != (_BYTE)v3) )
  {
    irql = (unsigned __int8)v3;
    FxNonPagedObject::Lock(flags, &irql, a3);
    IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, m_Globals);
    FxNonPagedObject::Unlock(pRequest, irql, v28);
    v3 = 0LL;
    if ( IsDriverOwned < 0 )
      return 0LL;
    flags = pRequest;
  }
  v8 = flags->m_Globals;
  m_DeviceBase = flags->m_DeviceBase;
  if ( v8->FxVerifierIO != (_BYTE)v3 )
  {
    irql = (unsigned __int8)v3;
    FxNonPagedObject::Lock(flags, &irql, a3);
    _a1 = FxRequest::VerifyRequestIsNotCompleted(flags, v8);
    FxNonPagedObject::Unlock(flags, irql, v32);
    v3 = 0LL;
    if ( _a1 < 0 )
    {
LABEL_32:
      WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x3Fu, WPP_FxRequestApi_cpp_Traceguids, _a1);
      return 0LL;
    }
  }
  FileObject = flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject && flags->m_IrpAllocation == 2 )
    return 0LL;
  Next = (int)m_DeviceBase[1].m_DisposeSingleEntry.Next;
  v12 = m_DeviceBase->m_Globals;
  v13 = Next & 0x7FFFFFFF;
  v39 = Next;
  globals = v12;
  if ( (Next & 0x7FFFFFFF) == 1 )
    goto LABEL_35;
  if ( FileObject )
  {
    if ( v13 == 2 )
    {
      FsContext = (unsigned __int64)FileObject->FsContext;
      goto LABEL_23;
    }
    if ( v13 == 3 )
    {
      FsContext = (unsigned __int64)FileObject->FsContext2;
      goto LABEL_23;
    }
  }
  else if ( BYTE4(m_DeviceBase[1].m_Globals) == (_BYTE)v3 || v13 != 4 )
  {
    if ( Next >= 0 )
    {
      WPP_IFR_SF_(v12, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
LABEL_31:
      _a1 = -1073741808;
      goto LABEL_32;
    }
LABEL_35:
    if ( SLODWORD(m_DeviceBase[1].m_DisposeSingleEntry.Next) < (int)v3 )
      return 0LL;
    goto LABEL_31;
  }
  m_ObjectFlags = m_DeviceBase->m_ObjectFlags;
  FsContext = (unsigned __int64)v3;
  irql = (unsigned __int8)v3;
  if ( m_ObjectFlags < 0 && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &irql, a3);
    v16 = irql;
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v17 = (FxDeviceBase_vtbl *)&m_DeviceBase[2];
  v18 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v19 = v18;
  if ( FileObject )
  {
    while ( v19 != v17 )
    {
      if ( (_FILE_OBJECT *)v19[-1].SetDeviceTelemetryInfoFlags == FileObject )
        goto LABEL_19;
      v19 = (FxDeviceBase_vtbl *)v19->SelfDestruct;
    }
    goto LABEL_51;
  }
LABEL_19:
  FsContext = (unsigned __int64)&v19[-1];
  if ( v19 == (FxDeviceBase_vtbl *)144 )
  {
LABEL_51:
    if ( BYTE4(m_DeviceBase[1].m_Globals) && m_DeviceBase->m_DeviceObject.m_DeviceObject->DeviceType == 27 && v18 != v17 )
    {
      FsContext = (unsigned __int64)&v18[-1];
      if ( v18 == (FxDeviceBase_vtbl *)144 )
        v29 = 0LL;
      else
        v29 = *(const void **)(FsContext + 128);
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, FileObject, v29);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
  }
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v26 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v26, v16, (unsigned __int8)v18);
  }
  else
  {
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v16);
  }
  v12 = globals;
  v3 = 0LL;
  Next = v39;
LABEL_23:
  if ( !FsContext )
  {
    if ( Next >= 0 )
    {
      WPP_IFR_SF_q(v12, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, FileObject);
      WPP_IFR_SF_(v12, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
      IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v30, 9u);
      LODWORD(v3) = 0;
      if ( IsVersionGreaterThanOrEqualTo )
      {
        FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
        LODWORD(v3) = 0;
      }
    }
    goto LABEL_35;
  }
  if ( *(_WORD *)(FsContext + 10) <= (unsigned __int16)v3 )
    return (WDFFILEOBJECT__ *)v3;
  else
    return (WDFFILEOBJECT__ *)(FsContext ^ 0xFFFFFFFFFFFFFFF8uLL);
}
