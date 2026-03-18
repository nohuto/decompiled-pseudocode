/*
 * XREFs of ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C
 * Callers:
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x14006D708 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x14016C410 (-CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z.c)
 *     NtUserSetKeyboardState @ 0x14017C0C0 (NtUserSetKeyboardState.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1401E3C50 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     Feature_ID51538523__private_IsEnabledPreCheck @ 0x140162568 (Feature_ID51538523__private_IsEnabledPreCheck.c)
 *     ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8534 (-UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall UIPrivilegeIsolation::CheckAccessEx(
        UIPrivilegeIsolation *this,
        const struct tagUIPI_INFO *a2,
        const struct tagUIPI_INFO *a3)
{
  char v3; // bp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  unsigned int CurrentWin32kSessionId; // eax

  v3 = (char)a3;
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
    && !UIPrivilegeIsolation::fEnforceUIPI )
  {
    return 1;
  }
  Feature_ID51538523__private_IsEnabledPreCheck();
  v6 = *((_DWORD *)a2 + 2);
  if ( !v6 || *((_DWORD *)this + 2) == v6 )
  {
    v7 = *(_DWORD *)a2;
    v8 = *(unsigned int *)this;
    if ( (unsigned int)v8 > *(_DWORD *)a2 )
      return 1;
    if ( (_DWORD)v8 == v7 )
    {
      v9 = *((_DWORD *)a2 + 1);
      v10 = *((_DWORD *)this + 1);
      if ( v10 == v9 || v10 == -1 || v9 == -1 )
        return 1;
    }
    if ( v3 )
    {
      if ( (_DWORD)v8 == v7 )
      {
        v11 = *((_DWORD *)a2 + 1);
        v12 = *((_DWORD *)this + 1);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v8);
        if ( (unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v12, v11) )
          return 1;
      }
    }
  }
  InputTraceLogging::Win32k::UIPIFailure(this, a2, v3);
  return 0;
}
