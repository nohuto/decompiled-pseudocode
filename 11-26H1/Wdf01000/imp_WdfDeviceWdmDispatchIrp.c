/*
 * XREFs of imp_WdfDeviceWdmDispatchIrp @ 0x14004C640
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14004C9C8 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1400E4B94 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 */

NTSTATUS __fastcall imp_WdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 DispatchContext)
{
  __int64 v8; // rax
  FxDevice *flags; // rbx
  FxDevice_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *v15; // [rsp+20h] [rbp-68h]
  FxDevice **v16; // [rsp+50h] [rbp-38h] BYREF
  __int16 v17; // [rsp+58h] [rbp-30h]
  __int16 v18; // [rsp+5Ah] [rbp-2Eh]
  int v19; // [rsp+5Ch] [rbp-2Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxDevice *v21; // [rsp+98h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)((char *)DriverGlobals - 448), WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v8) = 0;
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v8 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v8);
  }
  if ( flags->m_Type == 4098 )
  {
    v21 = flags;
  }
  else
  {
    v18 = v8;
    v21 = 0LL;
    v19 = 0;
    v11 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v16 = &v21;
    v17 = 4098;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&v16) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v14, v15, (const void *)Device, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v21;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( !DispatchContext )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( (DispatchContext & 1) != 0 )
    return FxPkgIo::DispatchStep1(flags->m_PkgIo, Irp, (_LIST_ENTRY *)(DispatchContext & 0xFFFFFFFFFFFFFFFEuLL));
  if ( flags->m_Globals->FxVerifierOn )
  {
    Vf_VerifyWdfDeviceWdmDispatchIrp(
      DriverGlobals,
      (_WDF_DRIVER_GLOBALS *)DriverGlobals,
      flags,
      (void *)DispatchContext);
    flags = v21;
  }
  return FxDevice::DispatchPreprocessedIrp(flags, Irp, (void *)DispatchContext);
}
