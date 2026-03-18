/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x140048A00 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x140005568 (-Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x14000B170 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1400241D0 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x140035E50 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x14004BE04 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x140061714 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Invoke@FxFileObjectFileCreate@@QEAAXPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x14006A300 (-Invoke@FxFileObjectFileCreate@@QEAAXPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x140095970 (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _IRP *m_Irp; // rax
  FxFileObject *v6; // r13
  WDFFILEOBJECT__ *id; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FILE_OBJECT *v9; // rdx
  FxDeviceBase *m_DeviceBase; // r15
  int v11; // eax
  _LIST_ENTRY *Blink; // rcx
  _IRP *v13; // rax
  int v14; // r14d
  _FX_DRIVER_GLOBALS *v15; // rdi
  _LIST_ENTRY *v16; // r14
  _IRP *v17; // rcx
  _IO_STACK_LOCATION *v18; // rax
  int v19; // edi
  unsigned __int64 flags; // rdx
  ULONG Tag; // r11d
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rax
  void *v28; // rax
  FX_POOL **v29; // rax
  FX_POOL **v30; // r12
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  KIRQL v33; // al
  unsigned __int8 v34; // r8
  FxVerifierLock **p_m_PhysicalDevice; // rdi
  unsigned __int64 *p_m_Lock; // r13
  KIRQL v37; // r9
  FX_POOL *v38; // rdx
  FxDeviceBase_vtbl *v39; // r8
  FxDeviceBase_vtbl **v40; // rcx
  FxDeviceBase *v41; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v42; // xmm1_8
  FxDeviceBase *v43; // rcx
  FxRequest *v44; // rdi
  _LIST_ENTRY *i; // r15
  unsigned __int8 v46; // r8
  char v47; // r15
  unsigned int *p_m_Flags; // rcx
  char v49; // dl
  FxIoQueue *m_DriverCreatedQueue; // rcx
  FxIoQueue *m_DefaultQueueForCreates; // rcx
  unsigned __int16 v52; // r9
  unsigned __int16 v53; // ax
  const void *v54; // rcx
  const void *v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  bool v59; // zf
  int v60; // eax
  WDFREQUEST__ *v61; // rdi
  _LIST_ENTRY *v62; // rax
  FxDeviceBase *v63; // rdx
  unsigned __int16 v64; // ax
  WDFDEVICE__ *v65; // rdx
  _LIST_ENTRY *j; // rcx
  WDFREQUEST__ *v67; // r8
  FxDeviceBase *v68; // rdx
  unsigned __int16 v69; // ax
  WDFDEVICE__ *v70; // rdx
  FxDeviceBase *v71; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v73; // rcx
  _IO_STACK_LOCATION *v74; // rcx
  _LIST_ENTRY *v75; // r15
  _LIST_ENTRY *v76; // rdx
  unsigned __int64 Flink; // rdx
  unsigned __int16 v78; // ax
  FxDeviceBase *v79; // rcx
  const void *v80; // rdx
  unsigned __int16 v81; // ax
  const void *v82; // rcx
  FxDeviceBase *v83; // rcx
  unsigned __int16 v84; // ax
  const void *v85; // rcx
  _LIST_ENTRY *v86; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v87; // xmm1_8
  FxDeviceBase *v88; // rax
  _LIST_ENTRY *v89; // rdx
  FxDeviceBase *v90; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v92; // ax
  const void *v93; // rdx
  unsigned __int16 v94; // ax
  const void *v95; // rcx
  FxDeviceBase *v96; // rcx
  unsigned __int16 v97; // ax
  const void *v98; // rcx
  int v99; // esi
  FxIoQueue *v100; // rdx
  unsigned __int16 v101; // cx
  const void *v102; // rdx
  const _GUID *InvokeOnSuccess; // [rsp+20h] [rbp-89h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-59h]
  FxRequest *pRequest; // [rsp+58h] [rbp-51h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-49h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+98h] [rbp-11h]
  __m128i v108; // [rsp+A0h] [rbp-9h] BYREF
  _LIST_ENTRY *v109; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  FxRequest *outputRequest; // [rsp+110h] [rbp+67h] BYREF
  unsigned int *PreviousIrql; // [rsp+118h] [rbp+6Fh] BYREF
  ULONG v113; // [rsp+120h] [rbp+77h]

  m_Globals = this->m_Globals;
  LOBYTE(outputRequest) = 0;
  m_Irp = FxIrp->m_Irp;
  memset(&attributes, 0, sizeof(attributes));
  v6 = 0LL;
  id = 0LL;
  pRequest = 0LL;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  globals = m_Globals;
  v109 = 0LL;
  v9 = CurrentStackLocation->FileObject;
  FileObject = v9;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v11 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v11 > 2 )
  {
    v55 = 0LL;
    if ( m_DeviceBase->m_ObjectSize )
      v55 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v55);
    v47 = 0;
    v19 = -1073741790;
    goto LABEL_68;
  }
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( this->m_FileObjectInfoHeadList.Flink != &this->m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v109 = Blink;
    if ( LODWORD(Blink[5].Blink) )
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v13 = FxIrp->m_Irp;
  v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v15 = m_DeviceBase->m_Globals;
  LOBYTE(PreviousIrql) = 0;
  if ( v14 != 1 )
  {
    if ( !v9 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
    {
      if ( v15->FxVerboseOn )
        WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v13);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      v19 = -1073741438;
      goto LABEL_109;
    }
    flags = 0LL;
    Tag = v15->Tag;
    v108.m128i_i64[1] = 64LL;
    v113 = Tag;
    if ( attributes.ContextTypeInfo )
    {
      flags = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        flags = attributes.ContextTypeInfo->ContextSize;
    }
    v23 = 208LL;
    v24 = -1LL;
    v108.m128i_i64[0] = 208LL;
    if ( flags )
    {
      v56 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v56 < flags )
      {
LABEL_108:
        v19 = -1073741670;
LABEL_109:
        v71 = this->m_DeviceBase;
        m_ObjectSize = v71->m_ObjectSize;
        v73 = (const void *)((unsigned __int64)v71 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v73 = 0LL;
        WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v73, v19);
        v47 = 0;
        goto LABEL_112;
      }
      v57 = v56 + 208;
      v58 = -1LL;
      if ( v57 >= 0xD0 )
        v58 = v57;
      v23 = v58;
      v108.m128i_i64[0] = v58;
      LODWORD(id) = v57 < 0xD0 ? 0xC0000095 : 0;
    }
    v25 = v23;
    v26 = v23;
    if ( (int)id < 0 )
      goto LABEL_122;
    if ( v15->FxVerifierHandle )
    {
      v27 = v23 + 48;
      if ( v23 + 48 >= v23 )
        v24 = v23 + 48;
      v23 = v24;
      v108.m128i_i64[0] = v24;
      LODWORD(id) = v27 < v26 ? 0xC0000095 : 0;
      if ( v27 < v25 )
      {
LABEL_122:
        WPP_IFR_SF_DDid(v15, flags, v23, v24, InvokeOnSuccess, 0xA0u, 0, flags, (int)id);
        v23 = v108.m128i_i64[0];
        Tag = v113;
      }
    }
    if ( (int)id >= 0 )
    {
      v108.m128i_i64[0] = 0LL;
      v108.m128i_i64[1] = 64LL;
      if ( v15->FxPoolTrackingOn )
        v28 = retaddr;
      else
        v28 = 0LL;
      v29 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v108, v23, Tag, v28);
      v30 = v29;
      if ( v29 )
      {
        if ( v15->FxVerifierHandle )
        {
          v30 = v29 + 6;
          *(_OWORD *)v29 = 0LL;
          *((_OWORD *)v29 + 1) = 0LL;
          *((_OWORD *)v29 + 2) = 0LL;
          *((_DWORD *)v29 + 8) = 1146058822;
        }
        v30[21] = 0LL;
        v30[22] = 0LL;
        v30[23] = 0LL;
        v30[24] = 0LL;
        v30[25] = 0LL;
        v30[20] = (FX_POOL *)v30;
        ContextTypeInfo = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSizeOverride = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
          memset(v30 + 26, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          ContextTypeInfo = attributes.ContextTypeInfo;
        }
        v30[24] = (FX_POOL *)ContextTypeInfo;
      }
      if ( v30 )
      {
        FxNonPagedObject::FxNonPagedObject(
          (FxNonPagedObject *)v30,
          (_FX_DRIVER_GLOBALS *)0x1018,
          0xA0u,
          m_DeviceBase->m_Globals);
        *v30 = (FX_POOL *)FxFileObject::`vftable'{for `FxNonPagedObject'};
        v30[15] = (FX_POOL *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
        v30[16] = (FX_POOL *)FileObject;
        v30[17] = 0LL;
        v30[12] = (FX_POOL *)m_DeviceBase;
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v30 + 7);
        *((_WORD *)v30 + 12) |= 2u;
        KeReleaseSpinLock((PKSPIN_LOCK)v30 + 7, v33);
        v19 = FxObject::Commit((FxObject *)v30, &attributes, 0LL, m_DeviceBase, 1u);
        if ( v19 >= 0 )
        {
          p_m_PhysicalDevice = (FxVerifierLock **)&m_DeviceBase[-1].m_PhysicalDevice;
          if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 && *p_m_PhysicalDevice )
          {
            FxVerifierLock::Lock(*p_m_PhysicalDevice, (unsigned __int8 *)&PreviousIrql, v34);
            v37 = (unsigned __int8)PreviousIrql;
            p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
          }
          else
          {
            p_m_Lock = &m_DeviceBase->m_NPLock.m_Lock;
            v37 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
          }
          v38 = (FX_POOL *)&m_DeviceBase[2];
          v39 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
          v40 = (FxDeviceBase_vtbl **)(v30 + 18);
          if ( (FxDeviceBase *)v39->~FxObject != &m_DeviceBase[2] )
            __fastfail(3u);
          *v40 = v39;
          v30[19] = v38;
          v39->~FxObject = (void (__fastcall *)(FxObject *))v40;
          *(_QWORD *)&v38->NonPagedLock.m_DbgFlagIsInitialized = v40;
          if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 && *p_m_PhysicalDevice )
            FxVerifierLock::Unlock(*p_m_PhysicalDevice, v37, (unsigned __int8)v39);
          else
            KeReleaseSpinLock(p_m_Lock, v37);
          if ( v14 == 2 )
          {
            FileObject->FsContext = v30;
          }
          else if ( v14 == 3 )
          {
            FileObject->FsContext2 = v30;
          }
          v6 = (FxFileObject *)v30;
          v16 = v109;
          id = (WDFFILEOBJECT__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v75 = this->m_FileObjectInfoHeadList.Blink->Blink;
          if ( !v6->m_ObjectSize )
            id = 0LL;
          while ( 1 )
          {
            if ( v75 == &this->m_FileObjectInfoHeadList )
              goto LABEL_8;
            v16 = v75;
            attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v75[5].Blink;
            if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
            {
              attributes.ParentObject = 0LL;
              attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
              attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
              v19 = FxObjectAllocateContext(v6, &attributes, 1u, 0LL);
              if ( v19 < 0 )
                break;
            }
            v75 = v75->Blink;
          }
          v76 = v75[9].Blink;
          if ( v76 )
            Flink = (unsigned __int64)v76[1].Flink;
          else
            Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
          v78 = *(_WORD *)(Flink + 10);
          v79 = this->m_DeviceBase;
          v80 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v78 )
            v80 = 0LL;
          v81 = v79->m_ObjectSize;
          v82 = (const void *)((unsigned __int64)v79 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v81 )
            v82 = 0LL;
          WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v75[5].Blink, v82, v80, v19);
          v47 = 0;
          goto LABEL_144;
        }
        FxObject::DeleteFromFailedCreate((FxObject *)v30);
        goto LABEL_109;
      }
    }
    goto LABEL_108;
  }
  v16 = v109;
LABEL_8:
  if ( this->m_DriverCreatedQueue || (this->m_Flags & 0xC) != 0 )
  {
    if ( this->m_FileObjectInfoHeadList.Flink != &this->m_FileObjectInfoHeadList
      && (v16 = this->m_FileObjectInfoHeadList.Blink, BYTE4(v16[9].Flink)) )
    {
      v62 = v16[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v62[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v62[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v62[4];
      v42 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v62[5].Flink;
    }
    else
    {
      v41 = this->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v41[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v41[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v41[3].m_Globals;
      v42 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v41[3].m_ChildListHead.Flink;
    }
    attributes.ContextTypeInfo = v42;
    v43 = this->m_DeviceBase;
    if ( *(FxDeviceBase **)&v43[1].m_ExecutionLevel != (FxDeviceBase *)&v43[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v19 = FxRequest::_CreateForPackage((FX_POOL *)v43, &attributes, (FX_POOL *)FxIrp->m_Irp, &pRequest);
    if ( v19 >= 0 )
    {
      v44 = pRequest;
      for ( i = this->m_FileObjectInfoHeadList.Blink->Blink; i != &this->m_FileObjectInfoHeadList; i = i->Blink )
      {
        v16 = i;
        if ( BYTE4(i[9].Flink) )
        {
          v86 = i[9].Blink;
          *(_LIST_ENTRY *)&attributes.Size = v86[2];
          *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v86[3];
          *(_LIST_ENTRY *)&attributes.ParentObject = v86[4];
          v87 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v86[5].Flink;
        }
        else
        {
          v88 = this->m_DeviceBase;
          *(_OWORD *)&attributes.Size = *(_OWORD *)&v88[2].m_ExecutionLevel;
          *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v88[3].FxNonPagedObject::FxObject::__vftable;
          *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v88[3].m_Globals;
          v87 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v88[3].m_ChildListHead.Flink;
        }
        attributes.ContextTypeInfo = v87;
        if ( attributes.Size )
        {
          attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
          attributes.ParentObject = 0LL;
          attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
          v19 = FxObjectAllocateContext(v44, &attributes, 1u, 0LL);
          if ( v19 < 0 )
          {
            v89 = i[9].Blink;
            v90 = this->m_DeviceBase;
            if ( v89 )
              m_Driver = (unsigned __int64)v89[1].Flink;
            else
              m_Driver = (unsigned __int64)v90->m_Driver;
            v92 = *(_WORD *)(m_Driver + 10);
            v93 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
            v59 = v92 == 0;
            v94 = v90->m_ObjectSize;
            if ( v59 )
              v93 = 0LL;
            v95 = (const void *)((unsigned __int64)v90 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v94 )
              v95 = 0LL;
            WPP_IFR_SF_qqd(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v95, v93, v19);
            v47 = 0;
            goto LABEL_167;
          }
          v44 = pRequest;
        }
      }
      if ( KeGetCurrentIrql() > 1u )
      {
        v47 = 0;
      }
      else
      {
        KeEnterCriticalRegion();
        v47 = 1;
      }
      p_m_Flags = &this->m_Flags;
      if ( (this->m_Flags & 4) != 0 || !this->m_DriverCreatedQueue )
      {
        PreviousIrql = &this->m_Flags;
        v59 = this->m_ExecutionLevel == WdfExecutionLevelPassive;
        outputRequest = 0LL;
        if ( v59 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v19 = -1073741808;
            v96 = this->m_DeviceBase;
            v97 = v96->m_ObjectSize;
            v98 = (const void *)((unsigned __int64)v96 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v97 )
              v98 = 0LL;
            WPP_IFR_SF_qqd(globals, 2u, 0xDu, 0x1Au, WPP_FxPkgGeneral_cpp_Traceguids, v98, FxIrp->m_Irp, 0xC0000010);
            goto LABEL_167;
          }
          PreviousIrql = &this->m_Flags;
        }
        v60 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, v44, v46);
        m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
        v19 = v60;
        if ( v60 < 0 )
        {
          v52 = 27;
LABEL_61:
          v53 = m_DefaultQueueForCreates->m_ObjectSize;
          v54 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v53 )
            v54 = 0LL;
          WPP_IFR_SF_qd(globals, 2u, 0xDu, v52, WPP_FxPkgGeneral_cpp_Traceguids, v54, v19);
          goto $RequestIsGone;
        }
        if ( FxIoQueue::GetRequest(m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
        {
LABEL_177:
          v19 = 259;
          goto $RequestIsGone;
        }
        p_m_Flags = PreviousIrql;
        v49 = 1;
        v44 = pRequest;
        LOBYTE(outputRequest) = 1;
      }
      else
      {
        v49 = 0;
      }
      if ( (*p_m_Flags & 4) != 0 )
      {
        for ( j = this->m_FileObjectInfoHeadList.Blink; ; j = (_LIST_ENTRY *)*((_QWORD *)PreviousIrql + 1) )
        {
          PreviousIrql = (unsigned int *)j;
          if ( j == &this->m_FileObjectInfoHeadList )
            break;
          v16 = j;
          if ( !BYTE4(j[9].Flink) )
            break;
          if ( v6 )
            v6->m_PkgContext = j->Blink;
          if ( v44->m_ObjectSize )
            v67 = (WDFREQUEST__ *)((unsigned __int64)v44 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v67 = 0LL;
          v68 = this->m_DeviceBase;
          v69 = v68->m_ObjectSize;
          v70 = (WDFDEVICE__ *)((unsigned __int64)v68 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v69 )
            v70 = 0LL;
          if ( FxCxFileObjectFileCreate::Invoke((FxCxFileObjectFileCreate *)&j[2], v70, v67, id) )
            goto LABEL_177;
        }
        v49 = (char)outputRequest;
      }
      m_DriverCreatedQueue = this->m_DriverCreatedQueue;
      if ( m_DriverCreatedQueue )
      {
        if ( !v49 )
        {
          v19 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v44, v46);
          if ( v19 >= 0 )
            goto $RequestIsGone;
          m_DefaultQueueForCreates = this->m_DriverCreatedQueue;
          v52 = 29;
          goto LABEL_61;
        }
        v99 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v44);
        if ( v99 < 0 )
        {
          v100 = this->m_DriverCreatedQueue;
          v101 = v100->m_ObjectSize;
          v102 = (const void *)((unsigned __int64)v100 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v101 )
            v102 = 0LL;
          WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v102, v99);
          FxRequest::Complete(v44, v99);
          v19 = 259;
          goto $RequestIsGone;
        }
      }
      else
      {
        if ( (this->m_Flags & 8) != 0 )
        {
          if ( this->m_CxFileCleanupCloseV2 && v6 )
            v6->m_PkgContext = 0LL;
          if ( v44->m_ObjectSize )
            v61 = (WDFREQUEST__ *)((unsigned __int64)v44 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v61 = 0LL;
          v63 = this->m_DeviceBase;
          v64 = v63->m_ObjectSize;
          v65 = (WDFDEVICE__ *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v64 )
            v65 = 0LL;
          FxFileObjectFileCreate::Invoke((FxFileObjectFileCreate *)&v16[1], v65, v61, id);
          v19 = 259;
          goto $RequestIsGone;
        }
        if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
        {
          FxRequest::Complete(v44, 0);
          v19 = 259;
          goto $RequestIsGone;
        }
        FxPkgGeneral::ForwardCreateRequest(this, FxIrp, FxPkgGeneral::_CreateCompletionRoutine2, v44);
      }
      goto LABEL_177;
    }
    v83 = this->m_DeviceBase;
    v84 = v83->m_ObjectSize;
    v85 = (const void *)((unsigned __int64)v83 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v84 )
      v85 = 0LL;
    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v85, v19);
    v47 = 0;
LABEL_167:
    if ( pRequest )
      FxObject::DeleteFromFailedCreate(pRequest);
LABEL_112:
    if ( !v6 )
    {
LABEL_68:
      FxPkgGeneral::DecrementOpenHandleCount(this);
      FxIrp->m_Irp->IoStatus.Status = v19;
      FxIrp->m_Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(FxIrp->m_Irp, 0);
      FxIrp->m_Irp = 0LL;
$RequestIsGone:
      if ( v47 )
        KeLeaveCriticalRegion();
      return (unsigned int)v19;
    }
LABEL_144:
    FxFileObject::DeleteFileObjectFromFailedCreate(v6);
    goto LABEL_68;
  }
  v17 = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    v18 = v17->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
    *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
    v18[-1].FileObject = v18->FileObject;
    v18[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
           FxIrp->m_Irp,
           FxPkgGeneral::_CreateCompletionRoutine,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v74 = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v74[-1].CompletionRoutine = FxPkgGeneral::_CreateCompletionRoutine;
      v74[-1].Context = this;
      v74[-1].Control = -32;
    }
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v17->IoStatus.Status = 0;
    v19 = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return (unsigned int)v19;
}
