/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1400766F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074614 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x140083660 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall imp_WdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  unsigned int v4; // ebx
  _FX_DRIVER_GLOBALS *v6; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // dl
  _INTERFACE *Interface; // r14
  unsigned __int8 SendQueryToParentStack; // dl
  unsigned __int16 v11; // r9
  int _a3; // eax
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  unsigned __int8 v16; // r8
  FxQueryInterface *v17; // r15
  unsigned __int64 Size; // r9
  ULONG v19; // ecx
  void *v20; // rax
  FX_POOL **v21; // rax
  __m128i v22; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+40h] BYREF
  FxDevice *pDevice; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Device )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !InterfaceConfig )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v6 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    if ( pDevice->m_Legacy )
    {
      v4 = -1073741808;
      WPP_IFR_SF_qd(v6, 2u, 2u, 0xAu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741808);
      return v4;
    }
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v4 = -1073741820;
      WPP_IFR_SF_qddd(
        v6,
        v8,
        2u,
        0xBu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        Device,
        InterfaceConfig->Size,
        48,
        -1073741820);
      return v4;
    }
    SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
    if ( SendQueryToParentStack && !FxDevice::IsPdo(pDevice) )
    {
      v4 = -1073741811;
      v11 = 12;
LABEL_16:
      WPP_IFR_SF_qd(v6, 2u, 2u, v11, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741811);
      return v4;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
        goto LABEL_24;
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v4 = -1073741811;
      v11 = 13;
      goto LABEL_16;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v4 = -1073741811;
      v11 = 14;
      goto LABEL_16;
    }
LABEL_24:
    if ( !Interface || (_a3 = Interface->Size, (unsigned __int16)_a3 >= 0x20u) )
    {
      Tag = v6->Tag;
      v14 = retaddr;
      v22.m128i_i64[0] = 0LL;
      v22.m128i_i64[1] = 256LL;
      if ( !v6->FxPoolTrackingOn )
        v14 = 0LL;
      v15 = FxPoolAllocator(v6, &v6->FxPoolFrameworks, &v22, 0x38uLL, Tag, v14);
      v17 = (FxQueryInterface *)v15;
      if ( !v15 )
      {
        v4 = -1073741670;
        WPP_IFR_SF_qd(v6, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741670);
        return v4;
      }
      v15[3] = (FX_POOL *)pDevice;
      v15[2] = 0LL;
      v15[4] = 0LL;
      v15[5] = 0LL;
      *((_BYTE *)v15 + 50) = 0;
      *((_BYTE *)v15 + 49) = InterfaceConfig->SendQueryToParentStack;
      *((_BYTE *)v15 + 48) = InterfaceConfig->ImportInterface;
      v15[4] = (FX_POOL *)InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
      *(_GUID *)v15 = *InterfaceConfig->InterfaceType;
      if ( Interface )
      {
        Size = Interface->Size;
        v19 = v6->Tag;
        v20 = retaddr;
        v22.m128i_i64[0] = 0LL;
        v22.m128i_i64[1] = 256LL;
        if ( !v6->FxPoolTrackingOn )
          v20 = 0LL;
        v21 = FxPoolAllocator(v6, &v6->FxPoolFrameworks, &v22, Size, v19, v20);
        v17->m_Interface = (_INTERFACE *)v21;
        if ( !v21 )
        {
          v4 = -1073741670;
          WPP_IFR_SF_qd(v6, 2u, 2u, 0x11u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741670);
          FxQueryInterface::`scalar deleting destructor'(v17);
          return v4;
        }
        memmove(v21, Interface, Interface->Size);
        if ( !Interface->InterfaceReference )
          v17->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
        if ( !Interface->InterfaceDereference )
          v17->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
      }
      FxPkgPnp::AddQueryInterface(pDevice->m_PkgPnp, v17, v16);
      return v4;
    }
    v4 = -1073741811;
    WPP_IFR_SF_qddd(v6, 0x20u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, _a3, 32, -1073741811);
    return v4;
  }
  return result;
}
