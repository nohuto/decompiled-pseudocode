/*
 * XREFs of imp_WdfPdoInitAssignContainerID @ 0x140091420
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140018748 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1400422D0 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int _a1; // ebx
  unsigned __int16 v11; // r9
  FxString *v12; // rax
  FX_POOL **v13; // rax
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !ContainerID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, ContainerID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v11 = 63;
LABEL_9:
        WPP_IFR_SF_D(v5, 2u, 0x12u, v11, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      v12 = DeviceInit->Pdo.ContainerID;
      if ( v12 )
        return FxString::Assign(v12, ContainerID);
      v13 = FxObjectHandleAlloc2(v5, v8, 0x78uLL, v9, 0LL, 0, FxObjectTypeExternal);
      if ( v13 )
      {
        FxString::FxString((FxString *)v13, v5);
        DeviceInit->Pdo.ContainerID = v12;
        if ( v12 )
          return FxString::Assign(v12, ContainerID);
      }
      else
      {
        DeviceInit->Pdo.ContainerID = 0LL;
      }
      _a1 = -1073741670;
      v11 = 64;
      goto LABEL_9;
    }
  }
  return result;
}
