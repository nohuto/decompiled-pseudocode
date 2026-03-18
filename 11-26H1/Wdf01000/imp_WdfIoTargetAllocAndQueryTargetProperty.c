/*
 * XREFs of imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x14006B7E8 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int32 DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // rdi
  _FX_DRIVER_GLOBALS *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *v13; // rbp
  _DEVICE_OBJECT *m_TargetPdo; // r9
  unsigned int v15; // edi
  int Property; // eax
  FxIoTarget *pTarget; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  v9 = PropertyMemory;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v10 = pFxDriverGlobals;
  v11 = pFxDriverGlobals;
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v11, 0);
  if ( (int)result >= 0 )
  {
    v13 = PropertyMemoryAttributes;
    result = FxValidateObjectAttributes(v10, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      m_TargetPdo = pTarget->m_TargetPdo;
      if ( m_TargetPdo )
      {
        Property = FxDevice::_AllocAndQueryProperty(
                     v10,
                     0LL,
                     0LL,
                     m_TargetPdo,
                     (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                     PoolType,
                     v13,
                     v9);
        v15 = Property;
        if ( v10->FxVerboseOn )
          WPP_IFR_SF_qdd(v10, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, DeviceProperty, Property);
      }
      else
      {
        v15 = -1073741808;
        WPP_IFR_SF_qd(v10, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, -1073741808);
      }
      return v15;
    }
  }
  return result;
}
