/*
 * XREFs of ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18016A1FC
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024E9C0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024EDA0 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(float *a1)
{
  float v1; // xmm1_4
  float v2; // xmm0_4
  LONG v3; // eax
  float v4; // xmm1_4
  RECT rc; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[1];
  v2 = *a1 + a1[2];
  rc.left = (int)*a1;
  v3 = (int)v1;
  v4 = v1 + a1[3];
  rc.top = v3;
  rc.right = (int)v2;
  rc.bottom = (int)v4;
  return MonitorFromRect(&rc, 2u);
}
