/*
 * XREFs of ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1400146DC
 * Callers:
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x140054DDC (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x14006B7E8 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078F20 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009D560 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 * Callees:
 *     ??0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x140015324 (--0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015414 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1400154A0 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxMemoryObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Object)
{
  unsigned int v7; // ebx
  _POOL_TYPE v9; // ebp
  unsigned __int64 v11; // rdx
  char v12; // r14
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rdi
  SIZE_T v15; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r13
  int id; // edi
  void *v21; // rax
  _OWORD *v22; // rax
  FxMemoryBuffer *v23; // rdi
  __int64 v24; // r14
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FxMemoryObject *v28; // rax
  unsigned int v29; // r8d
  unsigned __int64 flags; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  FxMemoryObject *v36; // rax
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+20h] [rbp-78h]
  FxPoolTypeOrPoolFlags v38; // [rsp+50h] [rbp-48h] BYREF
  __int128 v39; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  ULONG Tag; // [rsp+B8h] [rbp+20h]
  FxDeviceBase *v42; // [rsp+C0h] [rbp+28h]

  Tag = PoolTag;
  v7 = 0;
  v9 = PoolType;
  v11 = 4294967039LL;
  if ( BufferSize < 0x1000
    && (!FxDriverGlobals->FxVerifierOn || !FxDriverGlobals->FxPoolTrackingOn)
    && (PoolType & 0xFFFFFEFF) != 1
    && (PoolType & 0xFFFFFEFF) != 5 )
  {
    if ( PoolType == NonPagedPoolMustSucceed
      || PoolType == NonPagedPoolCacheAligned
      || PoolType == NonPagedPoolCacheAlignedMustS )
    {
      v9 = ExDefaultNonPagedPoolType;
    }
    v39 = 0LL;
    LOBYTE(v39) = 1;
    if ( !PoolTag )
      Tag = FxDriverGlobals->Tag;
    flags = FxGetContextSize(Attributes);
    *(_QWORD *)&v39 = (unsigned __int16)(BufferSize + 15);
    v31 = (v39 + 128) & 0xFFFFFFFFFFFFFFF0uLL;
    v32 = v31 + 48;
    if ( v31 + 48 >= v31 )
    {
      v18 = -1LL;
      v19 = v31 + 48;
      id = 0;
      v29 = -1073741675;
      if ( flags )
      {
        v34 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v34 < flags )
          return (unsigned int)-1073741670;
        v35 = v32 + v34;
        v19 = -1LL;
        if ( v35 >= v32 )
          v19 = v35;
        id = v35 < v32 ? 0xC0000095 : 0;
      }
      v32 = v19;
      v33 = v19;
      if ( id >= 0 )
      {
        if ( !FxDriverGlobals->FxVerifierHandle )
          goto LABEL_15;
        v17 = v19 + 48;
        if ( v19 + 48 >= v19 )
          v18 = v19 + 48;
        v19 = v18;
        id = v17 < v33 ? 0xC0000095 : 0;
        if ( v17 >= v32 )
        {
LABEL_15:
          if ( id >= 0 )
          {
            v21 = retaddr;
            v38 = 0LL;
            v38.UsePoolType = 1;
            v38.u.PoolType = v9;
            if ( !FxDriverGlobals->FxPoolTrackingOn )
              v21 = 0LL;
            v22 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v38, v19, Tag, v21);
            v23 = (FxMemoryBuffer *)v22;
            if ( v22 )
            {
              if ( FxDriverGlobals->FxVerifierHandle )
              {
                v23 = (FxMemoryBuffer *)(v22 + 3);
                *v22 = 0LL;
                v22[1] = 0LL;
                v22[2] = 0LL;
                *((_DWORD *)v22 + 8) = 1146058822;
              }
              v24 = (unsigned __int16)((v39 & 0xFFF0) + 128);
              *(_OWORD *)((char *)&v23->FxMemoryObject::FxObject::__vftable + v24) = 0LL;
              *(_OWORD *)((char *)&v23->m_Globals + v24) = 0LL;
              *(_LIST_ENTRY *)((char *)&v23->m_ChildListHead + v24) = 0LL;
              *(FxMemoryBuffer_vtbl **)((char *)&v23->FxMemoryObject::FxObject::__vftable + v24) = (FxMemoryBuffer_vtbl *)v23;
              if ( Attributes )
              {
                ContextTypeInfo = Attributes->ContextTypeInfo;
                if ( ContextTypeInfo )
                {
                  ContextSizeOverride = Attributes->ContextSizeOverride;
                  if ( !ContextSizeOverride )
                    ContextSizeOverride = ContextTypeInfo->ContextSize;
                  memset(
                    &v23->m_SpinLock.m_DbgFlagIsInitialized + v24,
                    0,
                    (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                *(_LIST_ENTRY **)((char *)&v23->m_ChildListHead.Flink + v24) = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
              }
            }
            if ( v23 )
            {
              FxMemoryBuffer::FxMemoryBuffer(v23, FxDriverGlobals, BufferSize);
              if ( v28 )
              {
                *Object = v28;
                return v7;
              }
            }
          }
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      v19 = -1LL;
      id = -1073741675;
    }
    WPP_IFR_SF_DDid(
      FxDriverGlobals,
      v32,
      v29,
      flags,
      (const _GUID *)ObjectType,
      0x78u,
      (unsigned __int16)BufferSize,
      flags,
      id);
    goto LABEL_15;
  }
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
  {
    v42 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, Attributes);
    v12 = 1;
    if ( v42 )
    {
      v36 = (FxMemoryObject *)FxObjectHandleAlloc2(
                                FxDriverGlobals,
                                v11,
                                0x80uLL,
                                PoolTag,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v14 = v36;
      if ( v36 )
      {
        FxMemoryObject::FxMemoryObject(v36, FxDriverGlobals, 0x80u, BufferSize);
        v14[1].FxObject::__vftable = 0LL;
        v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
        v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
        v14->m_DeviceBase = v42;
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v14 )
        return (unsigned int)-1073741670;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = (FxMemoryObject *)FxObjectHandleAlloc2(
                            FxDriverGlobals,
                            v11,
                            0x80uLL,
                            PoolTag,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
  v14 = v13;
  if ( !v13 )
    return (unsigned int)-1073741670;
  FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
  v14[1].FxObject::__vftable = 0LL;
  v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
  v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
LABEL_10:
  v15 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(v9, v15, Tag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v14);
    return (unsigned int)-1073741670;
  }
  if ( v12 )
    v14->m_ObjectFlags |= 0x11u;
  *Object = v14;
  return v7;
}
