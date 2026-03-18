/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x14004C7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14004C9C8 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BC08 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  __int64 v6; // rax
  FxDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDevice_vtbl *v10; // rax
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxDevice **v15; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+58h] [rbp-20h]
  __int16 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *v20; // [rsp+88h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v6) = 0;
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v6 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4098 )
  {
    v20 = flags;
  }
  else
  {
    v17 = v6;
    v20 = 0LL;
    v18 = 0;
    v10 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v15 = &v20;
    v16 = 4098;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&v15) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        Device,
        v11,
        v12,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v20;
  }
  m_Globals = flags->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(flags->m_Globals, Device, 0xBu) || m_Globals->FxVerifyDownlevel)
    && flags->m_CxDeviceInfoListHead.Flink != &flags->m_CxDeviceInfoListHead
    && (flags->m_PreprocessInfoListHead.Flink == &flags->m_PreprocessInfoListHead
     || FxDevice::GetCxDeviceInfo(flags, *(FxDriver **)&DriverGlobals[-7].DriverName[8])) )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, v13, WPP_FxDeviceApiKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    flags = v20;
  }
  return FxDevice::DispatchPreprocessedIrp(flags, Irp, flags->m_PreprocessInfoListHead.Flink->Flink);
}
