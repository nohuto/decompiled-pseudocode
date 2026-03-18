/*
 * XREFs of WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DFE0
 * Callers:
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x14006DC80 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfDeviceSetDeviceInterfaceStateEx @ 0x140099AC0 (imp_WdfDeviceSetDeviceInterfaceStateEx.c)
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x14006E314 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall WdfDeviceSetDeviceInterfaceStateWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 State,
        _WDF_TRI_STATE AutoEnableOnFirstStart)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxPkgPnp *m_PkgPnp; // rbp
  _FX_DRIVER_GLOBALS *v12; // rdx
  _SINGLE_LIST_ENTRY *i; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = pFxDriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) < 0
    || RefString && (int)FxValidateUnicodeString(v9, RefString) < 0 )
  {
    goto LABEL_18;
  }
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_q(v9, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_18:
    FxVerifierDbgBreakPoint(v9);
    return;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v10, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_10:
          FxDeviceInterface::SetState((FxDeviceInterface *)&i[-6], State);
          if ( AutoEnableOnFirstStart == WdfFalse )
            BYTE1(i[1].Next) = 0;
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_10;
      }
    }
  }
  FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, v12);
}
