/*
 * XREFs of ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1400824AC
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x140076D70 (imp_WdfCxDeviceInitAllocate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ??0WDFCXDEVICE_INIT@@QEAA@XZ @ 0x140082584 (--0WDFCXDEVICE_INIT@@QEAA@XZ.c)
 */

void __fastcall WDFCXDEVICE_INIT::_AllocateCxDeviceInit(WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *DriverGlobals; // rbx
  void *v3; // rax
  FX_POOL **v4; // rax
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *p_CxDeviceInitListHead; // rcx
  _LIST_ENTRY *Flink; // rdx
  __m128i v8; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  DriverGlobals = DeviceInit->DriverGlobals;
  v8.m128i_i64[0] = 0LL;
  v8.m128i_i64[1] = 64LL;
  if ( DriverGlobals->FxPoolTrackingOn )
    v3 = retaddr;
  else
    v3 = 0LL;
  v4 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v8, 0x290uLL, DriverGlobals->Tag, v3);
  if ( v4 && (WDFCXDEVICE_INIT::WDFCXDEVICE_INIT((WDFCXDEVICE_INIT *)v4), v5) )
  {
    p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
    Flink = DeviceInit->CxDeviceInitListHead.Flink;
    if ( Flink->Blink != &DeviceInit->CxDeviceInitListHead )
      __fastfail(3u);
    v5->Flink = Flink;
    v5->Blink = p_CxDeviceInitListHead;
    Flink->Blink = v5;
    p_CxDeviceInitListHead->Flink = v5;
  }
  else
  {
    WPP_IFR_SF_q(DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxCxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
  }
}
