/*
 * XREFs of ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x1805DA02C
 * Callers:
 *     ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x1805DA0D0 (-WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z @ 0x1805DA10C (-WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z @ 0x1805DA148 (-WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801DE7A4 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(
        LockScreenWidgetPackageHelperBase *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SHRegSetBOOL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36C,
    (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
    (const char *)(unsigned int)v3);
  return v4;
}
