/*
 * XREFs of imp_WdfMemoryCreate @ 0x140014B20
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1400101A0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ??0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x140015324 (--0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015414 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x14001543C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1400154A0 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140026C60 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  ULONG v9; // r12d
  FxMemoryObject *v11; // rdi
  unsigned __int64 ParentObject; // rsi
  __int64 v13; // rax
  FxObject *v14; // rbx
  WDFMEMORY__ **v15; // rdx
  unsigned __int8 v16; // r15
  unsigned __int64 v17; // r15
  int result; // eax
  unsigned __int64 v19; // rdx
  unsigned int v20; // r9d
  unsigned __int16 FxDriverGlobals; // r11
  FxDeviceBase *v22; // rax
  FxMemoryObject *v23; // rax
  FxMemoryObject *v24; // rsi
  SIZE_T v25; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  WDFMEMORY__ *v27; // rbx
  int v28; // esi
  void **v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  int id; // esi
  void *v34; // rax
  _OWORD *v35; // rax
  FxMemoryBuffer *v36; // rsi
  __int64 v37; // r15
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FxObject *flags; // rbx
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 m_ObjectSize; // rax
  char *v44; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v47; // rax
  FxMemoryObject *v48; // rax
  FxObject_vtbl *v49; // rax
  unsigned __int8 v50; // dl
  unsigned int v51; // r8d
  unsigned __int16 v52; // r9
  FxObject_vtbl *v53; // rax
  unsigned __int8 v54; // dl
  unsigned int v55; // r8d
  unsigned __int16 v56; // r9
  unsigned __int64 ContextSize; // rax
  void *v58; // r11
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  KIRQL v65; // al
  KIRQL CurrentIrql; // al
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+20h] [rbp-40h]
  FxPoolTypeOrPoolFlags v68; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *v70; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Tag; // [rsp+B8h] [rbp+58h]

  Tag = PoolTag;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v9 = PoolTag;
  v11 = 0LL;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v13) = 0;
        v14 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v13 = LOWORD(v14->__vftable);
          v14 = (FxObject *)((char *)v14 - v13);
        }
        if ( v14->m_Type == 4096 )
        {
          pParent = v14;
        }
        else
        {
          WORD1(v68.u.PoolFlags) = v13;
          pParent = 0LL;
          HIDWORD(v68.u.PoolFlags) = 0;
          v53 = v14->__vftable;
          *(_QWORD *)&v68.UsePoolType = &pParent;
          LOWORD(v68.u.PoolType) = 4096;
          if ( v53->QueryInterface(v14, (FxQueryInterfaceParams *)&v68) < 0 )
          {
            WPP_IFR_SF_qDqD(
              v14->m_Globals,
              v54,
              v55,
              v56,
              (const _GUID *)ObjectType,
              (const void *)ParentObject,
              0x1000u,
              v14,
              v14->m_Type);
            FxVerifierBugCheckWorker(v14->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v14 = pParent;
        }
        m_Globals = v14->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
        0,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  v15 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (PoolType & 0xFFFFFEFF) == 1 || (v16 = 2, (PoolType & 0xFFFFFEFF) == 5) )
    v16 = 1;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > v16 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, v16);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
    v15 = Memory;
  }
  v17 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
  *v15 = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( result < 0 )
    return result;
  if ( !v9 )
  {
    v9 = m_Globals->Tag;
    Tag = v9;
  }
  if ( v17 < 0x1000
    && (!m_Globals->FxVerifierOn || !m_Globals->FxPoolTrackingOn)
    && (PoolType & 0xFFFFFEFF) != 1
    && (PoolType & 0xFFFFFEFF) != 5 )
  {
    if ( PoolType == NonPagedPoolMustSucceed
      || PoolType == NonPagedPoolCacheAligned
      || PoolType == NonPagedPoolCacheAlignedMustS )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    v68 = 0LL;
    v68.UsePoolType = 1;
    if ( !v9 )
      Tag = m_Globals->Tag;
    ContextSize = FxGetContextSize(Attributes);
    v59 = ContextSize;
    v60 = ((unsigned __int16)(v17 + 15) + 128LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v61 = v60 + 48;
    if ( v60 + 48 >= v60 )
    {
      v31 = -1LL;
      v32 = v60 + 48;
      id = (int)v58;
      LOBYTE(v60) = -107;
      if ( ContextSize )
      {
        v63 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v63 < v59 )
          goto LABEL_49;
        v64 = v61 + v63;
        v32 = -1LL;
        if ( v64 >= v61 )
          v32 = v64;
        id = v64 < v61 ? 0xC0000095 : 0;
      }
      v61 = v32;
      v62 = v32;
      if ( id >= 0 )
      {
        if ( m_Globals->FxVerifierHandle == (_BYTE)v58 )
          goto LABEL_36;
        v30 = v32 + 48;
        if ( v32 + 48 >= v32 )
          v31 = v32 + 48;
        v32 = v31;
        id = v30 < v62 ? 0xC0000095 : 0;
        if ( v30 >= v61 )
          goto LABEL_36;
      }
    }
    else
    {
      v32 = -1LL;
      id = -1073741675;
    }
    WPP_IFR_SF_DDid(m_Globals, v60, v61, v59, (const _GUID *)ObjectType, 0x78u, (unsigned __int16)BufferSize, v59, id);
    v58 = 0LL;
LABEL_36:
    if ( id < 0 )
      goto LABEL_49;
    v34 = retaddr;
    v68 = 0LL;
    v68.UsePoolType = 1;
    v68.u.PoolType = PoolType;
    if ( m_Globals->FxPoolTrackingOn == (_BYTE)v58 )
      v34 = v58;
    v35 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v68, v32, Tag, v34);
    v36 = (FxMemoryBuffer *)v35;
    if ( v35 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        v36 = (FxMemoryBuffer *)(v35 + 3);
        *v35 = 0LL;
        v35[1] = 0LL;
        v35[2] = 0LL;
        *((_DWORD *)v35 + 8) = 1146058822;
      }
      v37 = (unsigned __int16)(((BufferSize + 15) & 0xFFF0) + 128);
      *(_OWORD *)((char *)&v36->FxMemoryObject::FxObject::__vftable + v37) = 0LL;
      *(_OWORD *)((char *)&v36->m_Globals + v37) = 0LL;
      *(_LIST_ENTRY *)((char *)&v36->m_ChildListHead + v37) = 0LL;
      *(FxMemoryBuffer_vtbl **)((char *)&v36->FxMemoryObject::FxObject::__vftable + v37) = (FxMemoryBuffer_vtbl *)v36;
      if ( Attributes )
      {
        ContextTypeInfo = Attributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = ContextTypeInfo->ContextSize;
          memset(&v36->m_SpinLock.m_DbgFlagIsInitialized + v37, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        *(_LIST_ENTRY **)((char *)&v36->m_ChildListHead.Flink + v37) = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
      }
    }
    if ( !v36 )
      goto LABEL_49;
    FxMemoryBuffer::FxMemoryBuffer(v36, m_Globals, BufferSize);
    if ( !v48 )
      goto LABEL_49;
    v11 = v48;
    result = 0;
    goto LABEL_50;
  }
  LOBYTE(v70) = FxIsPagedPoolType(PoolType);
  if ( (_BYTE)v70
    && (v22 = FxDeviceBase::_SearchForDevice(m_Globals, Attributes),
        FxDriverGlobals = 0,
        (*(_QWORD *)&v68.UsePoolType = v22) != 0LL) )
  {
    v24 = (FxMemoryObject *)FxObjectHandleAlloc2(m_Globals, v19, 0x80uLL, v20, Attributes, 0, FxObjectTypeExternal);
    if ( v24 )
    {
      FxMemoryObject::FxMemoryObject(v24, m_Globals, 0x80u, v17);
      v24[1].FxObject::__vftable = 0LL;
      v24->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
      v24->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      v24->m_DeviceBase = *(FxDeviceBase **)&v68.UsePoolType;
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v24 )
      goto LABEL_49;
  }
  else
  {
    v23 = (FxMemoryObject *)FxObjectHandleAlloc2(
                              m_Globals,
                              v19,
                              0x80uLL,
                              v20,
                              Attributes,
                              FxDriverGlobals,
                              FxObjectTypeExternal);
    v24 = v23;
    if ( !v23 )
    {
LABEL_49:
      result = -1073741670;
      goto LABEL_50;
    }
    FxMemoryObject::FxMemoryObject(v23, m_Globals, 0x80u, v17);
    v24->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    v24->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
    v24[1].FxObject::__vftable = 0LL;
  }
  v25 = v24->GetBufferSize(&v24->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v25, Tag);
  v24[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v24);
    goto LABEL_49;
  }
  if ( (_BYTE)v70 )
    v24->m_ObjectFlags |= 0x11u;
  v11 = v24;
  result = 0;
LABEL_50:
  if ( result >= 0 )
  {
    flags = 0LL;
    v70 = 0LL;
    if ( v11->m_ObjectSize )
    {
      if ( !Attributes )
        goto LABEL_120;
      if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        v65 = KeAcquireSpinLockRaiseToDpc(&v11->m_SpinLock.m_Lock);
        v11->m_ObjectFlags |= 0x11u;
        KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v65);
        flags = v70;
      }
      v41 = (unsigned __int64)Attributes->ParentObject;
      if ( v41 )
      {
        LOWORD(v42) = 0;
        flags = (FxObject *)(~v41 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (v41 & 1) != 0 )
        {
          v42 = LOWORD(flags->__vftable);
          flags = (FxObject *)((char *)flags - v42);
        }
        if ( flags->m_Type == 4096 )
        {
          v70 = flags;
        }
        else
        {
          WORD1(v68.u.PoolFlags) = v42;
          *(_QWORD *)&v68.UsePoolType = &v70;
          HIDWORD(v68.u.PoolFlags) = 0;
          v49 = flags->__vftable;
          LOWORD(v68.u.PoolType) = 4096;
          if ( v49->QueryInterface(flags, (FxQueryInterfaceParams *)&v68) < 0 )
          {
            WPP_IFR_SF_qDqD(
              flags->m_Globals,
              v50,
              v51,
              v52,
              (const _GUID *)ObjectType,
              (const void *)v41,
              0x1000u,
              flags,
              flags->m_Type);
            FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, v41, 0x1000uLL);
          }
          flags = v70;
        }
      }
      else
      {
LABEL_120:
        if ( !v11->m_ParentObject )
        {
          v47 = v11->m_Globals;
          if ( (FxMemoryObject *)v47->Driver != v11 )
          {
            flags = v47->Driver;
            v70 = flags;
          }
        }
      }
      if ( !flags || (v28 = FxObject::AssignParentObject(v11, flags), v28 >= 0) )
      {
        if ( Attributes )
        {
          m_ObjectSize = v11->m_ObjectSize;
          if ( (_WORD)m_ObjectSize )
            v44 = (char *)v11 + m_ObjectSize;
          else
            v44 = 0LL;
          EvtDestroyCallback = Attributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v44 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = Attributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v44 + 2) = EvtCleanupCallback;
            v11->m_ObjectFlags |= 0x400u;
          }
        }
        v11->m_ObjectFlags |= 8u;
        if ( v11->m_ObjectSize )
          v27 = (WDFMEMORY__ *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v27 = 0LL;
        FxObject::DetectExcessiveAllocation(v11);
        v28 = 0;
        *Memory = v27;
        v29 = Buffer;
        if ( Buffer )
          *v29 = (void *)v11->GetBuffer(&v11->IFxMemory);
        return v28;
      }
    }
    else
    {
      v28 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(v11);
    return v28;
  }
  return result;
}
