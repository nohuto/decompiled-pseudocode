/*
 * XREFs of imp_WdfUsbTargetDeviceGetNumInterfaces @ 0x1400666A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall imp_WdfUsbTargetDeviceGetNumInterfaces(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice)
{
  __int64 v3; // rax
  FxUsbDevice *flags; // rbx
  FxUsbDevice_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxUsbDevice **p_pUsbDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxUsbDevice *pUsbDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1202uLL);
  LOWORD(v3) = 0;
  flags = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbDevice & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxUsbDevice *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4610 )
  {
    pUsbDevice = flags;
  }
  else
  {
    v13 = v3;
    pUsbDevice = 0LL;
    v14 = 0;
    v6 = flags->__vftable;
    p_pUsbDevice = &pUsbDevice;
    v12 = 4610;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)UsbDevice, 0x1202u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, UsbDevice, 0x1202uLL);
    }
    flags = pUsbDevice;
  }
  return flags->m_NumInterfaces;
}
