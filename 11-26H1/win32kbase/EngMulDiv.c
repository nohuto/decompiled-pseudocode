/*
 * XREFs of EngMulDiv @ 0x140081830
 * Callers:
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400388B4 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14008145C (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x140081794 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F33C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     RIMTransformCoordinates @ 0x1400F8820 (RIMTransformCoordinates.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x140126618 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140148AC0 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401755E0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401AF324 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021A9B8 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v4; // eax
  unsigned int v5; // ecx
  INT v6; // r8d
  int v7; // r10d
  unsigned __int64 v8; // rax
  INT v9; // ecx
  INT result; // eax

  v4 = -a;
  if ( a > 0 )
    v4 = a;
  v5 = ((a >> 31) & 0xFFFFFFFE) + 1;
  v6 = -b;
  if ( b > 0 )
    v6 = b;
  v7 = -v5;
  if ( b >= 0 )
    v7 = v5;
  if ( c )
  {
    if ( c < 0 )
    {
      v7 = -v7;
      c = -c;
    }
    v8 = (v4 * (__int64)v6 + c / 2) / c;
    v9 = 0x7FFFFFFF;
    if ( v8 <= 0x7FFFFFFF )
    {
      v9 = -(int)v8;
      if ( v7 > 0 )
        return v8;
      return v9;
    }
    if ( v7 > 0 )
      return v9;
    return 0x80000000;
  }
  else
  {
    result = 0x80000000;
    if ( v7 > 0 )
      return 0x7FFFFFFF;
  }
  return result;
}
