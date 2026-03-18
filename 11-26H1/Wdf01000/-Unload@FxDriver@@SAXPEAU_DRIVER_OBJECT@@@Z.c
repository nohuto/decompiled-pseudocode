/*
 * XREFs of ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x140079C20
 * Callers:
 *     imp_WdfDriverMiniportUnload @ 0x140094720 (imp_WdfDriverMiniportUnload.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x140079D40 (-GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxDestroy @ 0x1400820E0 (FxDestroy.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  unsigned __int64 FxDriver; // rax
  unsigned __int64 v3; // rbx
  _FX_DRIVER_GLOBALS *v4; // rdi
  unsigned __int16 *v5; // rsi
  const void *_a1; // rcx
  void (__fastcall *v7)(unsigned __int64); // rax
  const void *v8; // rbp
  unsigned __int64 v9; // rcx

  FxDriver = (unsigned __int64)FxDriver::GetFxDriver(DriverObject);
  v3 = FxDriver;
  if ( FxDriver )
  {
    v4 = *(_FX_DRIVER_GLOBALS **)(FxDriver + 16);
    v5 = (unsigned __int16 *)(FxDriver + 10);
    if ( v4->FxVerboseOn )
    {
      _a1 = (const void *)(FxDriver ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*v5 )
        _a1 = 0LL;
      WPP_IFR_SF_qq(v4, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    v7 = *(void (__fastcall **)(unsigned __int64))(v3 + 360);
    if ( v7 )
    {
      v8 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*v5 )
        v9 = 0LL;
      v7(v9);
      if ( v4->FxVerboseOn )
      {
        if ( !*v5 )
          v8 = 0LL;
        WPP_IFR_SF_qq(v4, 5u, 0x11u, 0xEu, WPP_FxDriver_cpp_Traceguids, v8, DriverObject);
      }
    }
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 48LL))(v3);
    v4->Driver = 0LL;
    FxDestroy(v4);
  }
}
