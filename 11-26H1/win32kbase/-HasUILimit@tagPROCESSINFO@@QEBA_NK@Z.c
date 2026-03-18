/*
 * XREFs of ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserActivateKeyboardLayout @ 0x1401E1FF0 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagPROCESSINFO::HasUILimit(tagPROCESSINFO *this, int a2)
{
  int ProcessEffectiveUILimits; // eax
  char v4; // cl

  ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)this);
  v4 = 0;
  if ( ProcessEffectiveUILimits )
    return (a2 & ProcessEffectiveUILimits) == a2;
  return v4;
}
