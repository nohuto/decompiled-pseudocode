/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0
 * Callers:
 *     <none>
 * Callees:
 *     USBD_UrbAllocate @ 0x1400031CC (USBD_UrbAllocate.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14000341C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x140003644 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_i @ 0x140026104 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x140028650 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1400624B8 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     USBD_UrbFree @ 0x140066BC0 (USBD_UrbFree.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int64 Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory_vtbl **SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  __int64 v9; // rax
  FxUsbDevice *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _FX_DRIVER_GLOBALS *v13; // rdx
  __int64 Next_low; // rax
  _MDL *v15; // rbx
  void *MappedSystemVa; // rcx
  FxUsbDeviceControlContext *v17; // rcx
  unsigned int Flags; // edx
  unsigned __int8 v19; // dl
  int v20; // ebx
  FxUsbDevice *v21; // r13
  FxRequestBufferType DataType; // r15d
  FxRequestBase *m_TrueRequest; // rsi
  _WDFMEMORY_OFFSET *Offsets; // rdi
  unsigned __int64 BufferLength; // rax
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v28; // rax
  int v29; // edi
  const void *v30; // rcx
  PIRP Irp; // rax
  _IRP *v32; // rbx
  FxRequestContext *v33; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *v35; // rcx
  _FX_URB_TYPE v36; // di
  void *v37; // rax
  FX_POOL **v38; // rax
  __int64 v39; // rax
  _FX_DRIVER_GLOBALS *v40; // rdx
  IFxMemory *m_RequestMemory; // rax
  IFxMemory *Memory; // r8
  _MDL *v43; // rdx
  __m128i *p_ByteCount; // rdi
  __m128i *v45; // r13
  unsigned __int64 v46; // rax
  FxUsbDevice *v47; // r8
  IFxMemory *v48; // rcx
  IFxMemory_vtbl *v49; // rcx
  _FILE_OBJECT *v50; // rdx
  USBD_HANDLE__ *m_USBDHandle; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v53; // rcx
  _FX_DRIVER_GLOBALS *v54; // rax
  void *v55; // rbx
  signed __int32 v56; // ebx
  __int64 v58; // r8
  __int32 v59; // r15d
  __int64 v60; // r15
  int v61; // edx
  _MDL *v62; // rax
  unsigned __int64 BufferOffset; // rbx
  unsigned int v64; // eax
  FxUsbDevice_vtbl *v65; // rax
  unsigned __int8 v66; // dl
  unsigned int v67; // r8d
  unsigned __int16 v68; // r9
  __int32 v69; // r15d
  _WDFMEMORY_OFFSET *v70; // rax
  _MDL *Next; // rax
  unsigned __int8 v72; // dl
  unsigned int v73; // r8d
  unsigned __int16 v74; // r9
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  signed int v77; // eax
  KIRQL v78; // al
  _FX_DRIVER_GLOBALS *v79; // rcx
  const void *v80; // rax
  const void *v81; // rax
  const void *v82; // rax
  unsigned __int16 v83; // r9
  const void *v84; // rax
  KIRQL CurrentIrql; // al
  const void *v86; // rax
  unsigned __int8 *UnlockWhenFreed; // [rsp+20h] [rbp-E0h]
  _MDL *Mdl[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v89; // [rsp+60h] [rbp-A0h] BYREF
  void *v90; // [rsp+70h] [rbp-90h]
  FxRequestBuffer buf; // [rsp+78h] [rbp-88h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+98h] [rbp-68h] BYREF
  FxSyncRequest _a1; // [rsp+A0h] [rbp-60h] BYREF
  FxUsbDevice *v94; // [rsp+1D0h] [rbp+D0h]
  _WDF_REQUEST_SEND_OPTIONS *Options; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v96; // [rsp+1E0h] [rbp+E0h]
  FxUsbDeviceControlContext context; // [rsp+1F0h] [rbp+F0h] BYREF
  void *retaddr; // [rsp+378h] [rbp+278h]

  v96 = BytesTransferred;
  LOWORD(v9) = 0;
  v90 = (void *)UsbDevice;
  Options = RequestOptions;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  if ( !UsbDevice )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1202uLL);
  v11 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbDevice & 1) != 0 )
  {
    v9 = LOWORD(v11->__vftable);
    v11 = (FxUsbDevice *)((char *)v11 - v9);
  }
  if ( v11->m_Type == 4610 )
  {
    pUsbDevice = v11;
  }
  else
  {
    v89.m128i_i16[5] = v9;
    pUsbDevice = 0LL;
    v89.m128i_i32[3] = 0;
    v65 = v11->__vftable;
    v89.m128i_i64[0] = (__int64)&pUsbDevice;
    v89.m128i_i16[4] = 4610;
    if ( v65->QueryInterface(v11, (FxQueryInterfaceParams *)&v89) < 0 )
    {
      WPP_IFR_SF_qDqD(
        v11->m_Globals,
        v66,
        v67,
        v68,
        (const _GUID *)UnlockWhenFreed,
        (const void *)UsbDevice,
        0x1202u,
        v11,
        v11->m_Type);
      FxVerifierBugCheckWorker(v11->m_Globals, WDF_INVALID_HANDLE, UsbDevice, 0x1202uLL);
    }
    v11 = pUsbDevice;
  }
  m_Globals = v11->m_Globals;
  context.m_CompletionParams.IoStatus.Pointer = 0LL;
  context.m_RequestType = 19;
  context.m_CompletionParams.IoStatus.Information = 0LL;
  context.m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&context.m_UsbParameters;
  v13 = m_Globals;
  context.m_CompletionParams.Size = 72;
  context.__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  context.m_Urb = &context.m_UrbLegacy;
  _a1.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  _a1.m_ChildListHead.Blink = &_a1.m_ChildListHead;
  _a1.m_ChildListHead.Flink = &_a1.m_ChildListHead;
  _a1.m_ChildEntry.Blink = &_a1.m_ChildEntry;
  memset(&context.m_UsbParameters, 0, 40);
  _a1.m_ChildEntry.Flink = &_a1.m_ChildEntry;
  memset(&context.m_CompletionParams.Parameters.Usb + 1, 0, 48);
  context.m_CompletionParams.Type = WdfRequestTypeUsb;
  context.m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
  context.m_PartialMdl = 0LL;
  context.m_UnlockPages = 0;
  *(_DWORD *)&_a1.m_Type = 4104;
  _a1.m_Globals = m_Globals;
  _a1.m_SpinLock.m_Lock = 0LL;
  _a1.m_SpinLock.m_DbgFlagIsInitialized = 1;
  _a1.m_Refcnt = 1;
  *(_DWORD *)&_a1.m_ObjectFlags = 0x10000;
  _a1.m_ParentObject = 0LL;
  _a1.m_DisposeSingleEntry.Next = 0LL;
  _a1.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&_a1, m_Globals, 1u);
    v13 = _a1.m_Globals;
  }
  _a1.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  _a1.m_NPLock.m_Lock = 0LL;
  _a1.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(_a1.m_ObjectFlags) < 0 && v13->FxVerifierLock )
  {
    Mdl[0] = 0LL;
    FxVerifierLock::CreateAndInitialize((FxVerifierLock **)Mdl, v13, &_a1);
    *(_MDL **)&buf.DataType = Mdl[0];
  }
  _a1.m_CsqContext.Irp = (_IRP *)&_a1.120;
  _a1.m_ListEntry.Flink = (_LIST_ENTRY *)&_a1.120;
  _a1.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  *(_DWORD *)&_a1.m_RequestBaseStaticFlags = 0x1000000;
  *(_DWORD *)&_a1.m_Completed = 1;
  memset(&_a1.144, 0, 70);
  _a1.m_AllocatedMdl = 0LL;
  memset(&_a1.218, 0, 17);
  _a1.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&_a1.m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  _a1.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  _a1.m_RequestContext = &context;
  _a1.m_ClearContextOnDestroy = 1;
  if ( Request )
  {
    LOWORD(Next_low) = 0;
    v15 = (_MDL *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Request & 1) != 0 )
    {
      Next_low = LOWORD(v15->Next);
      v15 = (_MDL *)((char *)v15 - Next_low);
    }
    if ( v15->Size == 4104 )
    {
      Mdl[0] = v15;
    }
    else
    {
      v89.m128i_i16[5] = Next_low;
      Mdl[0] = 0LL;
      v89.m128i_i32[3] = 0;
      Next = v15->Next;
      v89.m128i_i64[0] = (__int64)Mdl;
      v89.m128i_i16[4] = 4104;
      if ( (*(int (__fastcall **)(_MDL *, __m128i *))&Next->ByteCount)(v15, &v89) < 0 )
      {
        WPP_IFR_SF_qDqD(
          (_FX_DRIVER_GLOBALS *)v15->Process,
          v72,
          v73,
          v74,
          (const _GUID *)UnlockWhenFreed,
          (const void *)Request,
          0x1008u,
          v15,
          (unsigned __int16)v15->Size);
        FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)v15->Process, WDF_INVALID_HANDLE, Request, 0x1008uLL);
      }
      v15 = Mdl[0];
    }
    _a1.m_TrueRequest = (FxRequestBase *)v15;
    MappedSystemVa = v15[3].MappedSystemVa;
    if ( MappedSystemVa )
    {
      (*(void (__fastcall **)(void *, _MDL *))(*(_QWORD *)MappedSystemVa + 24LL))(MappedSystemVa, v15);
      v15 = Mdl[0];
    }
    v17 = (FxUsbDeviceControlContext *)v15[3].MappedSystemVa;
    if ( v17 != &context )
    {
      if ( v17 )
        ((void (__fastcall *)(FxUsbDeviceControlContext *, __int64))v17->~FxUsbDeviceControlContext)(v17, 1LL);
      v15[3].MappedSystemVa = &context;
      v15 = Mdl[0];
    }
    BYTE2(v15[4].ByteCount) |= 0x10u;
  }
  else
  {
    _a1.m_RequestBaseFlags |= 0x10u;
    _a1.m_TrueRequest = &_a1;
  }
  _a1.m_ObjectSize = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbDeviceAPI_cpp_Traceguids, (const void *)UsbDevice);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxSyncRequest::~FxSyncRequest(&_a1);
      FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
      return 3221225488LL;
    }
  }
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_29;
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
      }
      v29 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v29 = -1073741820;
    }
    FxSyncRequest::~FxSyncRequest(&_a1);
    FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
    return (unsigned int)v29;
  }
LABEL_29:
  v20 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 3LL);
  if ( v20 >= 0 )
  {
    v21 = pUsbDevice;
    DataType = buf.DataType;
    m_TrueRequest = _a1.m_TrueRequest;
    v94 = pUsbDevice;
    if ( buf.DataType != FxRequestBufferMdl )
    {
      if ( buf.DataType == FxRequestBufferMemory )
      {
        Offsets = buf.u.Memory.Offsets;
        if ( !buf.u.Memory.Offsets )
        {
LABEL_33:
          LODWORD(BufferLength) = buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory);
          goto LABEL_34;
        }
        goto LABEL_106;
      }
      if ( buf.DataType != FxRequestBufferBuffer )
      {
        if ( buf.DataType != FxRequestBufferReferencedMdl )
          goto LABEL_35;
        Offsets = buf.u.Memory.Offsets;
        if ( !buf.u.Memory.Offsets )
          goto LABEL_33;
LABEL_106:
        if ( !Offsets->BufferOffset && !Offsets->BufferLength )
          goto LABEL_33;
        BufferLength = Offsets->BufferLength;
        if ( !BufferLength )
        {
          BufferOffset = Offsets->BufferOffset;
          LODWORD(BufferLength) = buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory) - BufferOffset;
        }
LABEL_34:
        if ( (unsigned int)BufferLength > 0xFFFF )
        {
          WPP_IFR_SF_i(v21->m_Globals, v19, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, (unsigned int)BufferLength);
          v29 = -1073741811;
          goto LABEL_132;
        }
LABEL_35:
        m_RequestContext = m_TrueRequest->m_RequestContext;
        m_Irp = m_TrueRequest->m_Irp.m_Irp;
        if ( m_RequestContext )
        {
          if ( m_Irp )
          {
            m_RequestContext->ReleaseAndRestore(m_RequestContext, m_TrueRequest);
            v28 = m_TrueRequest->m_Globals;
            if ( v28->FxVerifierOn )
            {
              if ( v28->FxVerifierIO )
                FxRequestBase::ClearVerifierFlags(m_TrueRequest, 128);
            }
          }
        }
        if ( !v21->m_TargetStackSize )
        {
          v29 = -1073741436;
          if ( v21->m_ObjectSize )
            v81 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v81 = 0LL;
          WPP_IFR_SF_qd(m_TrueRequest->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v81, -1073741436);
          goto LABEL_156;
        }
        if ( m_Irp )
        {
          if ( m_Irp->CurrentLocation - 1 >= v21->m_TargetStackSize )
            goto LABEL_47;
          if ( m_TrueRequest->m_IrpAllocation != 1 )
          {
            v29 = -1073741616;
            if ( v21->m_ObjectSize )
              v30 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v30 = 0LL;
            if ( !m_TrueRequest->m_ObjectSize
              || (v82 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
            {
              v82 = m_TrueRequest;
            }
            v83 = 13;
LABEL_155:
            WPP_IFR_SF_qqd(m_TrueRequest->m_Globals, 2u, 0xEu, v83, WPP_FxRequestBase_cpp_Traceguids, v82, v30, v29);
LABEL_156:
            v84 = 0LL;
            if ( v21->m_ObjectSize )
              v84 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            WPP_IFR_SF_qqd(v21->m_Globals, 2u, 0xEu, 0x17u, WPP_FxusbDeviceKm_cpp_Traceguids, v84, m_TrueRequest, v29);
            v55 = v90;
            goto LABEL_79;
          }
        }
        Irp = IoAllocateIrp(v21->m_TargetStackSize, 0);
        if ( !Irp )
        {
          v29 = -1073741670;
          if ( v21->m_ObjectSize )
            v30 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v30 = 0LL;
          if ( !m_TrueRequest->m_ObjectSize
            || (v82 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          {
            v82 = m_TrueRequest;
          }
          v83 = 12;
          goto LABEL_155;
        }
        v32 = m_TrueRequest->m_Irp.m_Irp;
        m_TrueRequest->m_Irp.m_Irp = Irp;
        m_TrueRequest->m_Completed = 0;
        if ( v32 && v32 != Irp && m_TrueRequest->m_IrpAllocation == 1 )
        {
          m_TrueRequest->m_IrpAllocation = 1;
          v79 = m_TrueRequest->m_Globals;
          if ( v79->FxVerboseOn )
          {
            if ( !m_TrueRequest->m_ObjectSize
              || (v80 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
            {
              v80 = m_TrueRequest;
            }
            WPP_IFR_SF_qq(v79, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v32, v80);
          }
          IoFreeIrp(v32);
        }
        else
        {
          m_TrueRequest->m_IrpAllocation = 1;
        }
LABEL_47:
        v33 = m_TrueRequest->m_RequestContext;
        if ( !v33 || v33->m_RequestType != 19 )
        {
          FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(v21, m_TrueRequest);
          v35 = v21->m_Globals;
          v89.m128i_i64[0] = 0LL;
          v36 = FxUrbTypeForRequest;
          v89.m128i_i64[1] = 64LL;
          if ( v35->FxPoolTrackingOn )
            v37 = retaddr;
          else
            v37 = 0LL;
          v38 = FxPoolAllocator(v35, &v35->FxPoolFrameworks, &v89, 0x128uLL, v35->Tag, v37);
          if ( !v38
            || (FxUsbDeviceControlContext::FxUsbDeviceControlContext((FxUsbDeviceControlContext *)v38, v36),
                (v33 = (FxRequestContext *)v39) == 0LL) )
          {
            v29 = -1073741670;
            goto LABEL_132;
          }
          if ( v36 == FxUrbTypeUsbdAllocated )
          {
            Mdl[0] = (_MDL *)v21->m_USBDHandle;
            v77 = USBD_UrbAllocate((USBD_HANDLE__ *)Mdl[0], (_URB **)(v39 + 272));
            v29 = v77;
            if ( v77 < 0 )
            {
              WPP_IFR_SF_D(v21->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v77);
              ((void (__fastcall *)(FxRequestContext *, __int64))v33->~FxRequestContext)(v33, 1LL);
              goto LABEL_132;
            }
            v33[1].m_CompletionParams.Parameters.Write.Buffer = (WDFMEMORY__ *)Mdl[0];
            v78 = KeAcquireSpinLockRaiseToDpc(&m_TrueRequest->m_SpinLock.m_Lock);
            m_TrueRequest->m_ObjectFlags |= 0x800u;
            KeReleaseSpinLock(&m_TrueRequest->m_SpinLock.m_Lock, v78);
          }
          FxRequestBase::SetContext(m_TrueRequest, v33);
        }
        if ( ((DataType - 2) & 0xFFFFFFFD) != 0
          || (v40 = v21->m_Globals,
              Mdl[0] = 0LL,
              v29 = FxRequestBuffer::GetOrAllocateMdl(
                      &buf,
                      v40,
                      Mdl,
                      (_MDL **)&v33[2].m_RequestType,
                      (unsigned __int8 *)&v33[3],
                      IoModifyAccess,
                      0,
                      0LL),
              v29 >= 0) )
        {
          v33->m_CompletionParams.Type = WdfRequestTypeUsb;
          v33->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v33[1];
          m_RequestMemory = v33[2].m_RequestMemory;
          HIDWORD(v33[1].__vftable) = 3;
          *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[4].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[6].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[8].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[10].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[12].__vftable = 0LL;
          *(_OWORD *)&m_RequestMemory[14].__vftable = 0LL;
          m_RequestMemory[16].__vftable = 0LL;
          WORD1(v33[2].m_RequestMemory->__vftable) = 8;
          LOWORD(v33[2].m_RequestMemory->__vftable) = 136;
          if ( DataType == FxRequestBufferMemory )
          {
            v58 = 130LL;
          }
          else
          {
            if ( DataType != FxRequestBufferReferencedMdl )
            {
              Memory = buf.u.Memory.Memory;
              v33->m_RequestMemory = 0LL;
              goto LABEL_60;
            }
            v58 = 135LL;
          }
          buf.u.Memory.Memory->AddRef(
            buf.u.Memory.Memory,
            v33,
            v58,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
          Memory = buf.u.Memory.Memory;
          v33->m_RequestMemory = buf.u.Memory.Memory;
LABEL_60:
          v43 = (_MDL *)v33[2].m_RequestMemory;
          p_ByteCount = &v89;
          v45 = &v89;
          Mdl[0] = v43;
          if ( v43 != (_MDL *)-40LL )
            p_ByteCount = (__m128i *)&v43->ByteCount;
          if ( v43 != (_MDL *)-48LL )
            v45 = (__m128i *)&v43[1];
          if ( DataType == FxRequestBufferBuffer )
          {
            v45->m128i_i64[0] = 0LL;
            p_ByteCount->m128i_i64[0] = (__int64)Memory;
          }
          else
          {
            v59 = DataType - 1;
            if ( !v59 )
            {
              v60 = Memory->GetBuffer(Memory);
              v61 = buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory);
              if ( buf.u.Memory.Offsets )
              {
                v75 = buf.u.Memory.Offsets->BufferLength;
                v76 = buf.u.Memory.Offsets->BufferOffset;
                if ( !v75 )
                  LODWORD(v75) = v61;
                v61 = v75;
                if ( v76 )
                  v60 += v76;
              }
              v62 = Mdl[0];
              v45->m128i_i64[0] = 0LL;
              p_ByteCount->m128i_i64[0] = v60;
              HIDWORD(v62->StartVa) = v61;
              goto LABEL_68;
            }
            v69 = v59 - 1;
            if ( v69 )
            {
              if ( v69 != 2 )
              {
                v45->m128i_i64[0] = 0LL;
                p_ByteCount->m128i_i64[0] = 0LL;
                HIDWORD(v43->StartVa) = 0;
                goto LABEL_68;
              }
              v45->m128i_i64[0] = (__int64)buf.u.RefMdl.Mdl;
              v70 = buf.u.Memory.Offsets;
              p_ByteCount->m128i_i64[0] = 0LL;
              if ( !v70 || (v46 = v70->BufferLength) == 0 )
              {
                LODWORD(v46) = Memory->GetBufferSize(Memory);
                v43 = Mdl[0];
              }
LABEL_67:
              HIDWORD(v43->StartVa) = v46;
LABEL_68:
              v33[2].m_RequestMemory[16].__vftable = *SetupPacket;
              HIWORD(v33[2].m_RequestMemory[16].__vftable) = WORD2(v33[2].m_RequestMemory[4].__vftable);
              LODWORD(v33[2].m_RequestMemory[4].__vftable) = 2;
              if ( *(char *)SetupPacket < 0 )
                LODWORD(v33[2].m_RequestMemory[4].__vftable) |= 1u;
              v47 = v94;
              v48 = v33[2].m_RequestMemory;
              if ( v94->m_OnUSBD )
                v48[3].__vftable = (IFxMemory_vtbl *)v94->m_ControlPipe;
              else
                LODWORD(v48[4].__vftable) |= 8u;
              v49 = *(IFxMemory_vtbl **)&v33[2].m_RequestType;
              if ( v49 )
                v33[2].m_RequestMemory[6].__vftable = v49;
              v50 = (_FILE_OBJECT *)v33[2].m_RequestMemory;
              m_USBDHandle = v47->m_USBDHandle;
              CurrentStackLocation = m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
              *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
              *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
              CurrentStackLocation[-1].FileObject = 0LL;
              m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
              m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
              v53 = m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
              if ( v50 != (_FILE_OBJECT *)(&v33[1].m_CompletionParams.Parameters.Usb + 1) )
              {
                v64 = *((_DWORD *)m_USBDHandle + 54);
                if ( v64 != -1 && v64 >= 0x602 )
                  v53[-1].FileObject = v50;
              }
              v53[-1].Parameters.WMI.ProviderId = (unsigned __int64)v50;
              v54 = m_TrueRequest->m_Globals;
              if ( v54->FxVerifierOn && v54->FxVerifierIO )
                FxRequestBase::SetVerifierFlags(m_TrueRequest, 128);
              if ( m_Globals->FxVerboseOn )
              {
                if ( !_a1.m_TrueRequest->m_ObjectSize
                  || (v86 = (const void *)((unsigned __int64)_a1.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                {
                  v86 = _a1.m_TrueRequest;
                }
                v55 = v90;
                WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbDeviceAPI_cpp_Traceguids, v90, v86);
              }
              else
              {
                v55 = v90;
              }
              v29 = FxIoTarget::SubmitSync(pUsbDevice, _a1.m_TrueRequest, Options, 0LL);
              if ( v96 )
              {
                if ( v29 < 0 )
                  *v96 = 0;
                else
                  *v96 = context.m_Urb->TransferBufferLength;
              }
LABEL_79:
              if ( m_Globals->FxVerboseOn )
                WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbDeviceAPI_cpp_Traceguids, v55, v29);
              _a1.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
              if ( SLOBYTE(_a1.m_ObjectFlags) < 0 && v90 )
                FxTagTracker::UpdateTagHistory(
                  (FxTagTracker *)v90,
                  0LL,
                  129,
                  "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
                  TagRelease,
                  _a1.m_Refcnt - 1);
              v56 = _InterlockedDecrement(&_a1.m_Refcnt);
              if ( !v56 )
                FxObject::FinalRelease(&_a1);
              if ( _a1.m_TrueRequest != &_a1 )
              {
                if ( !_a1.m_ClearContextOnDestroy )
                {
LABEL_89:
                  if ( v56 )
                  {
                    if ( _a1.m_Globals->FxVerboseOn )
                      WPP_IFR_SF_qq(
                        _a1.m_Globals,
                        5u,
                        0xDu,
                        0xAu,
                        WPP_FxSyncRequest_cpp_Traceguids,
                        &_a1,
                        &_a1.m_DestroyedEvent);
                    FxCREvent::EnterCRAndWaitAndLeave(&_a1.m_DestroyedEvent);
                    if ( _a1.m_Globals->FxVerboseOn )
                      WPP_IFR_SF_qq(
                        _a1.m_Globals,
                        5u,
                        0xDu,
                        0xBu,
                        WPP_FxSyncRequest_cpp_Traceguids,
                        &_a1,
                        &_a1.m_DestroyedEvent);
                  }
                  FxRequestBase::~FxRequestBase(&_a1);
                  context.__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
                  if ( context.m_Urb )
                  {
                    if ( context.m_Urb != &context.m_UrbLegacy )
                      USBD_UrbFree(context.m_USBDHandle, (_URB *)context.m_Urb);
                  }
                  return (unsigned int)v29;
                }
                _a1.m_TrueRequest->m_RequestContext = 0LL;
                _a1.m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
              }
              if ( _a1.m_ClearContextOnDestroy )
                _a1.m_RequestContext = 0LL;
              goto LABEL_89;
            }
            v45->m128i_i64[0] = (__int64)Memory;
            p_ByteCount->m128i_i64[0] = 0LL;
          }
          LODWORD(v46) = buf.u.Mdl.Length;
          goto LABEL_67;
        }
LABEL_132:
        v55 = v90;
        goto LABEL_79;
      }
    }
    LODWORD(BufferLength) = buf.u.Mdl.Length;
    goto LABEL_34;
  }
  FxSyncRequest::~FxSyncRequest(&_a1);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v20;
}
