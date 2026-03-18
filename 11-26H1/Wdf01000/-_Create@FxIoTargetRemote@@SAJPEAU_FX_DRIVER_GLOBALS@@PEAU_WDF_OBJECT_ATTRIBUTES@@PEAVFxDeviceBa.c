/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140014298
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1400140A0 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015414 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x14001556C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1400156B0 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  unsigned int Tag; // r13d
  unsigned __int64 ContextSize; // rax
  void *v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  int v14; // ebx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  void *v18; // rax
  _OWORD *v19; // rax
  FxIoTargetRemote *v20; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int8 v23; // dl
  signed int v24; // eax
  unsigned int v25; // esi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // ebx
  void *ParentObject; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a3; // r15
  bool v34; // zf
  unsigned __int16 v35; // ax
  const void *_a2; // rcx
  const void *_a1; // rdx
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-40h]
  FxPoolTypeOrPoolFlags v39; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  void *hTarget; // [rsp+A8h] [rbp+48h] BYREF
  FxObject *pParent; // [rsp+B8h] [rbp+58h] BYREF

  pParent = 0LL;
  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    *(_QWORD *)&v39.UsePoolType = 0LL;
    v39.u.PoolFlags = 5379LL;
    m_DeviceBase = pParent->m_DeviceBase;
    if ( !m_DeviceBase )
    {
      _a1 = (const void *)((unsigned __int64)pParent ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pParent->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(pParent->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
      v29 = -1073741808;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        -1073741808);
      return v29;
    }
    if ( m_DeviceBase != Device )
    {
      m_ObjectSize = Device->m_ObjectSize;
      _a3 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      v34 = m_ObjectSize == 0;
      v29 = -1073741808;
      v35 = m_DeviceBase->m_ObjectSize;
      if ( v34 )
        _a3 = 0LL;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v35 )
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return v29;
    }
  }
  else
  {
    pParent = Device;
  }
  Tag = FxDriverGlobals->Tag;
  v39.u.PoolFlags = 64LL;
  ContextSize = FxGetContextSize(Attributes);
  v11 = -1LL;
  v12 = ContextSize;
  v13 = 560LL;
  v14 = (int)v10;
  if ( ContextSize )
  {
    v27 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v27 < v12 )
    {
LABEL_29:
      v29 = -1073741670;
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, 0xC000009A);
      return v29;
    }
    v28 = v27 + 560;
    v13 = -1LL;
    if ( v28 >= 0x230 )
      v13 = v28;
    v14 = v28 < 0x230 ? 0xC0000095 : 0;
  }
  v15 = v13;
  v16 = v13;
  if ( v14 < 0 )
    goto LABEL_39;
  if ( FxDriverGlobals->FxVerifierHandle != (_BYTE)v10 )
  {
    v17 = v13 + 48;
    if ( v13 + 48 >= v13 )
      v11 = v13 + 48;
    v13 = v11;
    v14 = v17 < v16 ? 0xC0000095 : 0;
    if ( v17 < v16 )
    {
LABEL_39:
      WPP_IFR_SF_DDid(FxDriverGlobals, v11, v15, v16, AssignDriverAsDefaultParent, 0x1F8u, (unsigned int)v10, v12, v14);
      v10 = 0LL;
    }
  }
  if ( v14 < 0 )
    goto LABEL_29;
  v18 = retaddr;
  *(_QWORD *)&v39.UsePoolType = 0LL;
  v39.u.PoolFlags = 64LL;
  if ( FxDriverGlobals->FxPoolTrackingOn == (_BYTE)v10 )
    v18 = v10;
  v19 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v39, v13, Tag, v18);
  v20 = (FxIoTargetRemote *)v19;
  if ( v19 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v20 = (FxIoTargetRemote *)(v19 + 3);
      *v19 = 0LL;
      v19[1] = 0LL;
      v19[2] = 0LL;
      *((_DWORD *)v19 + 8) = 1146058822;
    }
    *(_OWORD *)&v20[1].m_Type = 0LL;
    *(_OWORD *)&v20[1].m_ObjectFlags = 0LL;
    *(_OWORD *)&v20[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v20[1].m_Type = v20;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(&v20[1].m_SpinLock.m_Lock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v20[1].m_ChildListHead.Blink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
    }
  }
  if ( !v20 )
    goto LABEL_29;
  FxIoTarget::FxIoTarget(v20, FxDriverGlobals, 0x1F8u);
  v20->__vftable = (FxIoTargetRemote_vtbl *)FxIoTargetRemote::`vftable';
  v20->m_EvtQueryRemove.m_Method = 0LL;
  v20->m_EvtRemoveCanceled.m_Method = 0LL;
  v20->m_EvtRemoveComplete.m_Method = 0LL;
  FxCREvent::FxCREvent(&v20->m_OpenedEvent, v23);
  memset(&v20->m_OpenParams, 0, sizeof(v20->m_OpenParams));
  v20->m_InStack = 0;
  v20->m_ClearedPointers = 0LL;
  v20->m_OpenState = 1;
  v20->m_TargetHandle = 0LL;
  v20->m_EvtQueryRemove.m_Method = 0LL;
  v20->m_EvtRemoveCanceled.m_Method = 0LL;
  v20->m_EvtRemoveComplete.m_Method = 0LL;
  v20->m_TargetNotifyHandle = 0LL;
  v20->m_Driver = Device->m_Driver;
  v20->m_DeviceBase = Device;
  v20->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v20);
  v24 = FxObject::Commit(v20, Attributes, &hTarget, pParent, 1u);
  v25 = v24;
  if ( v24 < 0 )
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, v24);
    FxObject::DeleteFromFailedCreate(v20);
  }
  else
  {
    *Target = v20;
  }
  return v25;
}
