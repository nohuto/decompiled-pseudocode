/*
 * XREFs of imp_WdfUsbTargetPipeWdmGetPipeHandle @ 0x140060FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_WdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 UsbPipe)
{
  __int64 v3; // rax
  FxUsbPipe *flags; // rbx
  FxUsbPipe_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxUsbPipe **p_pUsbPipe; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxUsbPipe *pUsbPipe; // [rsp+78h] [rbp+10h] BYREF

  if ( !UsbPipe )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  LOWORD(v3) = 0;
  flags = (FxUsbPipe *)(~UsbPipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbPipe & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxUsbPipe *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4611 )
  {
    pUsbPipe = flags;
  }
  else
  {
    v13 = v3;
    pUsbPipe = 0LL;
    v14 = 0;
    v6 = flags->__vftable;
    p_pUsbPipe = &pUsbPipe;
    v12 = 4611;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbPipe) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)UsbPipe, 0x1203u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, UsbPipe, 0x1203uLL);
    }
    flags = pUsbPipe;
  }
  return flags->m_PipeInformation.PipeHandle;
}
