/*
 * XREFs of ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140280B30
 * Callers:
 *     <none>
 * Callees:
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1400427F0 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140042BB8 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403F2E20 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetColorimetryData(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  int ColorimetryData; // ebx
  unsigned __int8 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h]

  *(_QWORD *)a2 = 0LL;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  ColorimetryData = EDID_V1_GetColorimetryData(0, v7, a2);
  if ( ColorimetryData >= 0 )
    goto LABEL_5;
  v8 = (unsigned int)Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState;
  if ( (Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState & 0x10) == 0 )
  {
    LODWORD(v8) = Feature_AllowEDIDColorimetryWithoutCEAExtension__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_AllowEDIDColorimetryWithoutCEAExtension__private_descriptor,
      v8,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v8,
      3,
      (__int64)&Feature_AllowEDIDColorimetryWithoutCEAExtension__private_descriptor);
  }
  if ( ColorimetryData == -1073741275 )
LABEL_5:
    ColorimetryData = EDID_V1_GetColorDepths(0, v7, a3);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v7);
  return (unsigned int)ColorimetryData;
}
