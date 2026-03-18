/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04
 * Callers:
 *     FxIoTargetValidateOpenParams @ 0x1400076EC (FxIoTargetValidateOpenParams.c)
 *     imp_WdfStringCreate @ 0x1400183B0 (imp_WdfStringCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x14003CC40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x14003CD90 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryQueryString @ 0x14003CE90 (imp_WdfRegistryQueryString.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x14003D440 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfRegistryAssignValue @ 0x14003D640 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x14003D9D0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x14003DB20 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x14003DC80 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x14003EAC0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryQueryValue @ 0x14003ECF0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryQueryULong @ 0x14003EE10 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140041D20 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDriverCreate @ 0x14006BE90 (imp_WdfDriverCreate.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DFE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x14006F010 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceInitAssignName @ 0x140075910 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1400786A0 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078F20 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079990 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C640 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E240 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x140090200 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140091420 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1400921D0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryAssignMemory @ 0x140099CB0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x140099E90 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x14009A130 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x14009A390 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  int _a2; // r8d
  int MaximumLength; // eax

  _a2 = String->Length;
  if ( (_a2 & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, _a2, -1073741811);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else if ( (_WORD)MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else
    {
      if ( (unsigned __int16)_a2 <= (unsigned __int16)MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        _a2,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
