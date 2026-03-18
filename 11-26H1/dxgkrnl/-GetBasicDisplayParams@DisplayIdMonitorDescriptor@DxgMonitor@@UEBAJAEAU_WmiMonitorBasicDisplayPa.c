/*
 * XREFs of ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140281820
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x14006CCF4 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline @ 0x140099758 (Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14009F4BC (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x14009F58C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  const struct DisplayIDObj *v2; // rsi
  int PhysicalSize; // edi
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  BOOLEAN v8; // al
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v11; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+38h] BYREF

  v2 = (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24);
  v17 = 0;
  v16 = 0;
  v9 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0LL;
  PhysicalSize = DisplayID_GetPhysicalSize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), &v17, &v16);
  if ( PhysicalSize < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 439;
    return (unsigned int)PhysicalSize;
  }
  PhysicalSize = DisplayID_GetNativeLuminance(v2, &v12, &v11, &v10, &v9);
  if ( PhysicalSize < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 442;
    return (unsigned int)PhysicalSize;
  }
  PhysicalSize = DisplayID_GetColorimetryData(
                   v2,
                   (struct DISPLAYID_COLORIMETRY_DATA *)&v15,
                   (struct DISPLAY_COLOR_DEPTHS *)&v13);
  if ( PhysicalSize < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 444;
    return (unsigned int)PhysicalSize;
  }
  a2->VideoInputType = 1;
  if ( (unsigned int)Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (v16 + 5) / 0xA;
    v7 = (v17 + 5) / 0xA;
  }
  else
  {
    v6 = v16 / 0x64;
    v7 = v17 / 0x64;
  }
  a2->MaxHorizontalImageSize = v7;
  a2->MaxVerticalImageSize = v6;
  a2->DisplayTransferCharacteristic = v9 - 100;
  v8 = v15 & 1;
  *(_WORD *)&a2->SupportedDisplayFeatures.HasPreferredTimingMode = 1;
  a2->SupportedDisplayFeatures.sRGBSupported = v8;
  result = 0LL;
  *(_DWORD *)&a2->SupportedDisplayFeatures.StandbySupported = 16843009;
  return result;
}
