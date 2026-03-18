/*
 * XREFs of EngMulDiv @ 0x1400623C0
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14002D388 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1400431E4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x140062318 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140062BA4 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1400661B4 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     RIMTransformCoordinates @ 0x140076844 (RIMTransformCoordinates.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x140088FE8 (-vMakeIso@DC@@QEAAXXZ.c)
 *     NtUserGetDpiForMonitor @ 0x140089500 (NtUserGetDpiForMonitor.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF43C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA8D0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401810B0 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401E585C (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x140214F4C (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
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
  if ( a >= 0 )
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
