/*
 * XREFs of FxIoTargetValidateOpenParams @ 0x1400076EC
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x140006560 (imp_WdfIoTargetOpen.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqqqd @ 0x140094168 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall FxIoTargetValidateOpenParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  int v5; // eax

  switch ( OpenParams->Type )
  {
    case WdfIoTargetOpenUseExistingDevice:
      if ( !OpenParams->TargetDeviceObject )
      {
        v4 = 12;
        goto LABEL_11;
      }
      if ( FxDriverGlobals->IsUserModeDriver )
      {
        v4 = 13;
        goto LABEL_11;
      }
      if ( OpenParams->TargetFileObject
        || *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove == 0LL && !OpenParams->EvtIoTargetRemoveComplete )
      {
        return 0LL;
      }
      v3 = -1073741811;
      WPP_IFR_SF_qqqqd(
        FxDriverGlobals,
        (unsigned __int8)OpenParams,
        0xEu,
        0xEu,
        WPP_FxIoTargetAPI_cpp_Traceguids,
        OpenParams,
        OpenParams->EvtIoTargetQueryRemove,
        OpenParams->EvtIoTargetRemoveCanceled,
        OpenParams->EvtIoTargetRemoveComplete,
        -1073741811);
      break;
    case WdfIoTargetOpenByName:
      if ( OpenParams->TargetDeviceName.Buffer
        && OpenParams->TargetDeviceName.Length
        && OpenParams->TargetDeviceName.MaximumLength )
      {
        return 0LL;
      }
      v4 = 15;
      goto LABEL_11;
    case WdfIoTargetOpenReopen:
      return 0LL;
    case WdfIoTargetOpenLocalTargetByFile:
      v3 = 0;
      if ( !FxDriverGlobals->IsUserModeDriver )
      {
        v4 = 16;
LABEL_11:
        v3 = -1073741811;
        WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, v4, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC000000D);
        return v3;
      }
      if ( *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove != 0LL || OpenParams->EvtIoTargetRemoveComplete )
      {
        v3 = -1073741811;
        WPP_IFR_SF_qqqd(
          FxDriverGlobals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          OpenParams->EvtIoTargetQueryRemove,
          OpenParams->EvtIoTargetRemoveCanceled,
          OpenParams->EvtIoTargetRemoveComplete,
          -1073741811);
      }
      else
      {
        if ( !OpenParams->FileName.Buffer && !OpenParams->FileName.Length && !OpenParams->FileName.MaximumLength )
          return 0LL;
        v5 = FxValidateUnicodeString(FxDriverGlobals, &OpenParams->FileName);
        if ( v5 < 0 )
          return (unsigned int)v5;
      }
      break;
    default:
      v3 = -1073741811;
      WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPI_cpp_Traceguids, OpenParams->Type, -1073741811);
      return v3;
  }
  return v3;
}
