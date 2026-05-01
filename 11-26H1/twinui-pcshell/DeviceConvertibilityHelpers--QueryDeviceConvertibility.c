/*
 * XREFs of DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x180108528
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1801083A0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x180108354 (-HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

__int64 __fastcall DeviceConvertibilityHelpers::QueryDeviceConvertibility(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r9d
  __int64 v6; // rdx
  TabletModeHelpers *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r9d
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_LOCAL_MACHINE,
              L"System\\CurrentControlSet\\Control\\PriorityControl",
              L"ConvertibilityEnabled",
              a4,
              &v10) >= 0 )
    return v10 != 0 ? 1 : 3;
  v10 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
              L"ConvertibleChassis",
              v4,
              &v10) >= 0
    && v10 )
  {
    return 1LL;
  }
  else
  {
    return 2 - (unsigned int)TabletModeHelpers::HasConvertibleSlateModeChanged(v7, v6, v8, v9);
  }
}
