/*
 * XREFs of imp_WdfIoTargetQueryTargetProperty @ 0x14009BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int32 DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  unsigned int *v9; // r15
  void *v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rbx
  __int64 result; // rax
  _DEVICE_OBJECT *m_TargetPdo; // rcx
  unsigned int v14; // edi
  NTSTATUS _a3; // eax
  FxIoTarget *pTarget; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pGlobals; // [rsp+70h] [rbp+8h] BYREF

  pGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget,
    &pGlobals);
  v9 = ResultLength;
  if ( !ResultLength )
    FxVerifierNullBugCheck(pGlobals, retaddr);
  v10 = PropertyBuffer;
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(pGlobals, retaddr);
  v11 = pGlobals;
  result = FxVerifierCheckIrqlLevel(pGlobals, 0);
  if ( (int)result >= 0 )
  {
    m_TargetPdo = pTarget->m_TargetPdo;
    if ( m_TargetPdo )
    {
      _a3 = IoGetDeviceProperty(m_TargetPdo, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, BufferLength, v10, v9);
      v14 = _a3;
      if ( v11->FxVerboseOn )
        WPP_IFR_SF_qdd(v11, 5u, 0xEu, 0x11u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, DeviceProperty, _a3);
    }
    else
    {
      v14 = -1073741808;
      WPP_IFR_SF_qd(v11, 2u, 0xEu, 0x10u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, -1073741808);
    }
    return v14;
  }
  return result;
}
