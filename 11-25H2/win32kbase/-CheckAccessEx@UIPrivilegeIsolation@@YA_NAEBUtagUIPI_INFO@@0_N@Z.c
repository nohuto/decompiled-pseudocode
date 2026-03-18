/*
 * XREFs of ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8
 * Callers:
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     NtUserSetKeyboardState @ 0x140147150 (NtUserSetKeyboardState.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x140161120 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 *     ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x1401A8A90 (-CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z.c)
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1401F6F4C (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A7180 (Feature_ID51538523__private_ReportDeviceUsage.c)
 *     ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8E70 (-UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall UIPrivilegeIsolation::CheckAccessEx(
        UIPrivilegeIsolation *this,
        const struct tagUIPI_INFO *a2,
        const struct tagUIPI_INFO *a3)
{
  char v3; // bp
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // ebx
  unsigned int v12; // edi
  unsigned int CurrentWin32kSessionId; // eax

  v3 = (char)a3;
  if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline()
    && !UIPrivilegeIsolation::fEnforceUIPI )
  {
    return 1;
  }
  Feature_ID51538523__private_ReportDeviceUsage();
  v6 = *((_DWORD *)a2 + 2);
  if ( !v6 || *((_DWORD *)this + 2) == v6 )
  {
    v7 = *(_DWORD *)this;
    v8 = *(_DWORD *)a2;
    if ( *(_DWORD *)this > *(_DWORD *)a2 )
      return 1;
    if ( v7 == v8 )
    {
      v9 = *((_DWORD *)this + 1);
      v10 = *((_DWORD *)a2 + 1);
      if ( v9 == v10 || v9 == -1 || v10 == -1 )
        return 1;
    }
    if ( v3 )
    {
      if ( v7 == v8 )
      {
        v11 = *((_DWORD *)a2 + 1);
        v12 = *((_DWORD *)this + 1);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        if ( (unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v12, v11) )
          return 1;
      }
    }
  }
  InputTraceLogging::Win32k::UIPIFailure(this, a2, v3);
  return 0;
}
