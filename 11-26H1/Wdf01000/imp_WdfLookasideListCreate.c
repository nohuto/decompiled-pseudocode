/*
 * XREFs of imp_WdfLookasideListCreate @ 0x140094310
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x14001543C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x14001867C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140018874 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qqqqd @ 0x140094168 (WPP_IFR_SF_qqqqd.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x140095BF8 (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r13
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  WDFLOOKASIDE__ **v15; // r12
  __int64 result; // rax
  unsigned int Tag; // r14d
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  FX_POOL **v20; // rax
  FxObject *v21; // rbx
  FX_POOL **v22; // rax
  FxObject *v23; // rax
  FxDeviceBase *v24; // r15
  FxDeviceBase *v25; // rax
  unsigned int v26; // r9d
  _SINGLE_LIST_ENTRY *v27; // rbp
  const void *_a4; // rbp
  bool v29; // zf
  unsigned __int16 m_ObjectSize; // ax
  const void *v31; // r15
  FX_POOL **v32; // rax
  int v33; // edi
  FxObject *pParent; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 retaddr; // [rsp+98h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v37; // [rsp+B0h] [rbp+18h]

  v37 = BufferSize;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], LookasideAttributes, 0);
  v12 = MemoryAttributes;
  v13 = v7;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(v7, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = v7;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtrAndGlobals(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
  v7 = pFxDriverGlobals;
LABEL_6:
  v15 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(v7, retaddr);
  PLookaside = 0LL;
  *v15 = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_D(v7, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(v7, LookasideAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v7, v12, 0);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = v7->Tag;
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(v7, 0);
        if ( (int)result < 0 )
          return result;
        v24 = FxDeviceBase::_SearchForDevice(v7, LookasideAttributes);
        v25 = FxDeviceBase::_SearchForDevice(v7, v12);
        v27 = (_SINGLE_LIST_ENTRY *)v25;
        if ( v24 && v25 && v24 != v25 )
        {
          _a4 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v29 = v25->m_ObjectSize == 0;
          m_ObjectSize = v24->m_ObjectSize;
          if ( v29 )
            _a4 = 0LL;
          v31 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v31 = 0LL;
          WPP_IFR_SF_qqqqd(
            v7,
            0,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            v31,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v32 = FxObjectHandleAlloc2(v7, 0LL, 0x200uLL, v26, LookasideAttributes, 0, FxObjectTypeExternal);
        v21 = (FxObject *)v32;
        if ( !v32 )
          return 3221225626LL;
        FxObject::FxObject((FxObject *)v32, (_FX_DRIVER_GLOBALS *)0x1009, 0x200u, v7);
        LODWORD(v21[1].m_ChildEntry.Flink) = Tag;
        v21->m_ObjectFlags |= 0x11u;
        v21[1].m_SpinLock.m_Lock = 0LL;
        v21[1].m_ParentObject = 0LL;
        v21->__vftable = (FxObject_vtbl *)FxPagedLookasideListFromPool::`vftable';
        v21[1].m_ChildEntry.Blink = 0LL;
        v21[1].m_DisposeSingleEntry.Next = v27;
        v21->m_DeviceBase = v24;
        goto LABEL_36;
      }
      if ( BufferSize >= 0x1000 )
      {
        v22 = FxObjectHandleAlloc2(v7, v18, 0x1C0uLL, v19, LookasideAttributes, 0, FxObjectTypeExternal);
        if ( v22 )
        {
          FxNPagedLookasideListFromPool::FxNPagedLookasideListFromPool((FxNPagedLookasideListFromPool *)v22, v7, Tag);
          v21 = v23;
          goto LABEL_22;
        }
      }
      else
      {
        v20 = FxObjectHandleAlloc2(v7, v18, 0x140uLL, v19, LookasideAttributes, 0, FxObjectTypeExternal);
        v21 = (FxObject *)v20;
        if ( v20 )
        {
          FxObject::FxObject((FxObject *)v20, (_FX_DRIVER_GLOBALS *)0x1009, 0x140u, v7);
          v21[1].m_SpinLock.m_Lock = 0LL;
          v21->__vftable = (FxObject_vtbl *)FxNPagedLookasideList::`vftable';
          v21[1].m_ParentObject = 0LL;
          LODWORD(v21[1].m_ChildEntry.Flink) = Tag;
          goto LABEL_22;
        }
      }
      v21 = 0LL;
LABEL_22:
      if ( !v21 )
        return 3221225626LL;
LABEL_36:
      v33 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v21->__vftable[1].SelfDestruct)(
              v21,
              v37,
              v12);
      if ( v33 < 0 || (v33 = FxObject::Commit(v21, LookasideAttributes, (void **)&PLookaside, 0LL, 1u), v33 < 0) )
        FxObject::DeleteFromFailedCreate(v21);
      else
        *v15 = (WDFLOOKASIDE__ *)PLookaside;
      return (unsigned int)v33;
    }
  }
  return result;
}
