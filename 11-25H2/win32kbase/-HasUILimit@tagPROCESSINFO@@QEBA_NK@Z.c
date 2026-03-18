/*
 * XREFs of ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114
 * Callers:
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     NtUserActivateKeyboardLayout @ 0x14016E970 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall tagPROCESSINFO::HasUILimit(tagPROCESSINFO *this, int a2)
{
  __int64 ProcessJob; // rax
  char v4; // bl

  ProcessJob = PsGetProcessJob(*(_QWORD *)this);
  v4 = 0;
  if ( ProcessJob )
    return (a2 & (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob)) == a2;
  return v4;
}
