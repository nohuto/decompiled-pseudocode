/*
 * XREFs of imp_WdfPdoRequestEject @ 0x14008BC80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140026580 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  signed int PdoPackageFromDeviceHandle; // eax
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+20h] BYREF

  pPkgPdo = 0LL;
  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  PdoPackageFromDeviceHandle = GetPdoPackageFromDeviceHandle(
                                 (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
                                 (unsigned __int64)Device,
                                 "imp_WdfPdoRequestEject",
                                 &pPkgPdo,
                                 &pFxDriverGlobals,
                                 &pDevice);
  if ( PdoPackageFromDeviceHandle < 0 )
  {
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxDevicePdoAPI_cpp_Traceguids, PdoPackageFromDeviceHandle);
  }
  else
  {
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
    if ( SafePhysicalDevice )
    {
      IoRequestDeviceEject(SafePhysicalDevice);
      return;
    }
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxDevicePdoAPI_cpp_Traceguids, Device);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
