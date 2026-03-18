/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x140059520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 v3; // rax
  FxDeviceBase *flags; // rbx
  unsigned __int64 result; // rax
  __int16 v6; // cx
  FxDeviceBase_vtbl *v7; // rax
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDeviceBase; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  int v15; // [rsp+5Ch] [rbp-Ch]
  FxDeviceBase *pDeviceBase; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(v3) = 0;
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v3 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4144 )
  {
    pDeviceBase = flags;
  }
  else
  {
    v14 = v3;
    pDeviceBase = 0LL;
    v15 = 0;
    v7 = flags->FxNonPagedObject::FxObject::__vftable;
    p_pDeviceBase = &pDeviceBase;
    v13 = 4144;
    if ( v7->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDeviceBase) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v8, v9, v10, v11, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDeviceBase;
  }
  result = (unsigned __int64)flags->GetDefaultIoTarget(flags);
  if ( result )
  {
    v6 = *(_WORD *)(result + 10);
    result ^= 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v6 )
      return 0LL;
  }
  return result;
}
