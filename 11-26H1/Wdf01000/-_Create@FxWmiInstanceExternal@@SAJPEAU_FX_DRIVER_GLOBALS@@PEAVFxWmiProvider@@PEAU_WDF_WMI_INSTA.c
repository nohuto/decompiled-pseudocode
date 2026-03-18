/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x140058014
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x140057970 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x140058348 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x140058508 (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_iid @ 0x14008DF50 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x14008E040 (WPP_IFR_SF_iqdd.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  FxWmiInstanceExternal **v6; // r12
  WDFWMIINSTANCE__ **v8; // r13
  unsigned int m_Flags; // eax
  char *ContextSize; // rsi
  __int64 result; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // r14d
  FX_POOL **v18; // rax
  __int64 v19; // rax
  FxObject *v20; // rdi
  unsigned int v21; // ebx
  const void *_a5; // rbx
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rsi
  unsigned __int64 ContextSizeOverride; // rax
  unsigned __int64 m_MinInstanceBufferSize; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v28; // rbx
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+20h] [rbp-68h]
  int level; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+58h] [rbp-30h]
  WDFWMIINSTANCE__ *hInstance; // [rsp+98h] [rbp+10h] BYREF

  v6 = Instance;
  v8 = WmiInstance;
  hInstance = 0LL;
  m_Flags = Provider->m_Flags;
  ContextSize = 0LL;
  *Instance = 0LL;
  *v8 = 0LL;
  if ( (m_Flags & 1) != 0
    && (WmiInstanceConfig->UseContextForQuery
     || WmiInstanceConfig->EvtWmiInstanceQueryInstance
     || WmiInstanceConfig->EvtWmiInstanceSetInstance
     || WmiInstanceConfig->EvtWmiInstanceSetItem
     || WmiInstanceConfig->EvtWmiInstanceExecuteMethod) )
  {
    _a5 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      _a5 = 0LL;
    WPP_IFR_SF_qdqqqqd(
      FxDriverGlobals,
      0,
      (unsigned int)WmiInstanceConfig,
      (unsigned __int16)InstanceAttributes,
      (const _GUID *)ObjectType,
      _a5,
      WmiInstanceConfig->UseContextForQuery,
      WmiInstanceConfig->EvtWmiInstanceQueryInstance,
      WmiInstanceConfig->EvtWmiInstanceSetInstance,
      WmiInstanceConfig->EvtWmiInstanceSetItem,
      WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
      v31);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1);
  v17 = result;
  if ( (int)result < 0 )
    return result;
  if ( !WmiInstanceConfig->UseContextForQuery )
    goto LABEL_4;
  EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
  if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
  {
    WPP_IFR_SF_qqd(
      FxDriverGlobals,
      2u,
      0x12u,
      0xCu,
      WPP_FxWmiInstance_cpp_Traceguids,
      EvtWmiInstanceSetInstance,
      WmiInstanceConfig->EvtWmiInstanceSetItem,
      0xC000000D);
    return 3221225485LL;
  }
  if ( !InstanceAttributes || (ContextTypeInfo = InstanceAttributes->ContextTypeInfo) == 0LL )
  {
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, -1073741811);
    return 3221225485LL;
  }
  ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
  ContextSize = (char *)ContextTypeInfo->ContextSize;
  if ( ContextSizeOverride )
  {
    if ( &ContextSize[ContextSizeOverride] < ContextSize )
    {
      v21 = -1073741675;
      WPP_IFR_SF_iid(FxDriverGlobals, 0, v15, v16, (const _GUID *)ObjectType, -1LL, ContextSizeOverride, -1073741675);
      return v21;
    }
    ContextSize += ContextSizeOverride;
    v17 = 0;
  }
  if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
  {
    v21 = -1073741675;
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      0,
      0x12u,
      0xFu,
      WPP_FxWmiInstance_cpp_Traceguids,
      ContextSize,
      0xFFFFFFFF,
      0xC0000095);
    return v21;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  if ( (unsigned __int64)ContextSize >= m_MinInstanceBufferSize )
  {
LABEL_4:
    v18 = FxObjectHandleAlloc2(FxDriverGlobals, 0LL, 0xB8uLL, v16, InstanceAttributes, 0, FxObjectTypeExternal);
    if ( v18 )
    {
      FxWmiInstanceExternal::FxWmiInstanceExternal(
        (FxWmiInstanceExternal *)v18,
        FxDriverGlobals,
        WmiInstanceConfig,
        Provider);
      v20 = (FxObject *)v19;
      if ( v19 )
      {
        if ( ContextSize )
          *(_DWORD *)(v19 + 176) = (_DWORD)ContextSize;
        if ( v17 < 0
          || (v17 = FxObject::Commit((FxObject *)v19, InstanceAttributes, (void **)&hInstance, Provider, 1u), v17 < 0) )
        {
          FxObject::DeleteFromFailedCreate(v20);
        }
        else
        {
          *v8 = hInstance;
          *v6 = (FxWmiInstanceExternal *)v20;
        }
        return (unsigned int)v17;
      }
    }
    v21 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, 0xC000009A);
    return v21;
  }
  m_ObjectSize = Provider->m_ObjectSize;
  v28 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v28 = 0LL;
  WPP_IFR_SF_iqdd(
    FxDriverGlobals,
    0,
    v15,
    v16,
    (const _GUID *)ObjectType,
    (__int64)ContextSize,
    v28,
    m_MinInstanceBufferSize,
    level);
  return 3221225507LL;
}
