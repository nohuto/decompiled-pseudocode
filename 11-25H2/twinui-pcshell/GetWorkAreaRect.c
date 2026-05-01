/*
 * XREFs of GetWorkAreaRect @ 0x180476484
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1801426F8 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

_OWORD *__fastcall GetWorkAreaRect(_OWORD *a1, __int64 a2)
{
  HMONITOR v4; // rcx
  int v5; // r8d
  float v7[4]; // [rsp+20h] [rbp-50h] BYREF
  float v8[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF

  memset(&mi, 0, sizeof(mi));
  v4 = *(HMONITOR *)a2;
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v4, &mi) )
  {
    v5 = *(_DWORD *)(a2 + 40);
    v8[0] = (float)mi.rcWork.left;
    v8[1] = (float)mi.rcWork.top;
    v8[2] = (float)(mi.rcWork.right - mi.rcWork.left);
    v8[3] = (float)(mi.rcWork.bottom - mi.rcWork.top);
    *a1 = *(_OWORD *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v7, v8, v5);
  }
  else
  {
    *a1 = *(_OWORD *)(a2 + 8);
  }
  return a1;
}
