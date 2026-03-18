/*
 * XREFs of imp_WdfIoTargetCreate @ 0x1400140A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140014298 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  __int64 v7; // rax
  FxDeviceBase *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  WDFIOTARGET__ *v11; // rcx
  FxDeviceBase_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  KIRQL CurrentIrql; // al
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  FxIoTargetRemote *pTarget; // [rsp+50h] [rbp-20h] BYREF
  FxDeviceBase **p_pDevice; // [rsp+58h] [rbp-18h] BYREF
  __int16 v20; // [rsp+60h] [rbp-10h]
  __int16 v21; // [rsp+62h] [rbp-Eh]
  int v22; // [rsp+64h] [rbp-Ch]
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxDeviceBase *pDevice; // [rsp+A8h] [rbp+38h] BYREF

  pTarget = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(v7) = 0;
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v7 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v7);
  }
  if ( flags->m_Type == 4144 )
  {
    pDevice = flags;
  }
  else
  {
    v21 = v7;
    pDevice = 0LL;
    v22 = 0;
    v12 = flags->FxNonPagedObject::FxObject::__vftable;
    p_pDevice = &pDevice;
    v20 = 4144;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v13, v14, v15, traceGuid, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDevice;
  }
  m_Globals = flags->m_Globals;
  if ( !IoTarget )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)Device);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
  else
  {
    result = FxValidateObjectAttributes(m_Globals, IoTargetAttributes, 0);
    if ( result >= 0 )
    {
      result = FxIoTargetRemote::_Create(m_Globals, IoTargetAttributes, pDevice, &pTarget);
      if ( result >= 0 )
      {
        if ( pTarget->m_ObjectSize )
          v11 = (WDFIOTARGET__ *)((unsigned __int64)pTarget ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v11 = 0LL;
        *IoTarget = v11;
      }
    }
  }
  return result;
}
