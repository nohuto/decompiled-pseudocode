/*
 * XREFs of ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180134510
 * Callers:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801BD9DC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18024E5EC (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024E9C0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024EB80 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     ?UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ @ 0x180476418 (-UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ.c)
 *     GetWorkAreaRect @ 0x180485E30 (GetWorkAreaRect.c)
 *     GetWorkAreaRect_0 @ 0x180485F40 (GetWorkAreaRect_0.c)
 * Callees:
 *     <none>
 */

float *__fastcall KeyboardHosting::ScalingHelper::PhysicalRectToRelative(float *a1, float *a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v3 = *a2;
  v4 = (float)a3;
  if ( a3 )
    v3 = (float)(v3 * 100.0) / v4;
  *a1 = v3;
  v5 = a2[1];
  if ( a3 )
    v5 = (float)(v5 * 100.0) / v4;
  v6 = a2[2];
  a1[1] = v5;
  if ( a3 )
    v6 = (float)(v6 * 100.0) / v4;
  v7 = a2[3];
  a1[2] = v6;
  if ( a3 )
    v7 = (float)(v7 * 100.0) / v4;
  a1[3] = v7;
  return a1;
}
