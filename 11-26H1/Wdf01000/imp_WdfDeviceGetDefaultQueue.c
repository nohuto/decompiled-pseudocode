/*
 * XREFs of imp_WdfDeviceGetDefaultQueue @ 0x1400664B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFQUEUE__ *__fastcall imp_WdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 v3; // rax
  FxDevice *flags; // rbx
  FxIoQueue *m_DefaultQueue; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFQUEUE__ *result; // rax
  FxDevice_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxDevice **p_pFxDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
  FxDevice *pFxDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v3) = 0;
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v3 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4098 )
  {
    pFxDevice = flags;
  }
  else
  {
    v15 = v3;
    pFxDevice = 0LL;
    v16 = 0;
    v8 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    p_pFxDevice = &pFxDevice;
    v14 = 4098;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, v10, v11, traceGuid, (const void *)Device, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = pFxDevice;
  }
  m_DefaultQueue = flags->m_PkgIo->m_DefaultQueue;
  if ( m_DefaultQueue )
  {
    m_ObjectSize = m_DefaultQueue->m_ObjectSize;
    result = (WDFQUEUE__ *)((unsigned __int64)m_DefaultQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_q(flags->m_Globals, 3u, 0xDu, 0x35u, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device);
    return 0LL;
  }
  return result;
}
