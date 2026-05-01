/*
 * XREFs of ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18024E5EC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800B9230 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180134510 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x18024E054 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x1804762E0 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetForegroundAppRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  HMONITOR v5; // rax
  enum DEVICE_SCALE_FACTOR ScaleFactor; // r8d
  float v7[4]; // [rsp+20h] [rbp-E0h] BYREF
  float v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-C0h] BYREF
  enum DEVICE_SCALE_FACTOR v10; // [rsp+68h] [rbp-98h]
  struct tagRECT Rect; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+18h]

  *(_OWORD *)a1 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    Rect = 0LL;
    if ( !GetWindowRect(ForegroundWindow, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1F,
               (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrecthelper.cpp",
               v3);
    v5 = MonitorFromRect(&Rect, 2u);
    if ( !v5 )
      return 2147549183LL;
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v9, v5);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
      ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor((KeyboardHosting::MonitorInformation *)v9);
    else
      ScaleFactor = v10;
    v7[0] = (float)Rect.left;
    v7[2] = (float)(Rect.right - Rect.left);
    v7[1] = (float)Rect.top;
    v7[3] = (float)(Rect.bottom - Rect.top);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                        v8,
                                                        v7,
                                                        ScaleFactor));
  }
  return 0LL;
}
