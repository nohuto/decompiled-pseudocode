/*
 * XREFs of imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140041D20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1400422D0 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // ebp
  FxPkgPnp *m_PkgPnp; // r14
  _FX_DRIVER_GLOBALS *v12; // rdx
  _UNICODE_STRING *v13; // rdx
  _SINGLE_LIST_ENTRY *i; // rdi
  SIZE_T Length; // rbx
  FxString *pString; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+90h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v8 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    if ( !RefString || (result = FxValidateUnicodeString(v8, RefString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        WPP_IFR_SF_qd(v8, 2u, 2u, 0xEu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, -1073741808);
        return 3221225488LL;
      }
      else
      {
        FxObjectHandleGetPtr(v8, (unsigned __int64)String, 0x1007u, (void **)&pString);
        v10 = -1073741772;
        m_PkgPnp = pDevice->m_PkgPnp;
        FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v12, 0LL);
        for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
        {
          if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
          {
            if ( RefString )
            {
              if ( RefString->Length == LOWORD(i[-4].Next) )
              {
                Length = RefString->Length;
                if ( RtlCompareMemory(RefString->Buffer, i[-3].Next, Length) == Length )
                {
LABEL_10:
                  v13 = (_UNICODE_STRING *)&i[-2];
                  if ( i[-1].Next )
                    v10 = FxString::Assign(pString, v13);
                  else
                    v10 = -1073741436;
                  break;
                }
              }
            }
            else if ( !LOWORD(i[-4].Next) )
            {
              goto LABEL_10;
            }
          }
        }
        FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, (_FX_DRIVER_GLOBALS *)v13);
        return v10;
      }
    }
  }
  return result;
}
