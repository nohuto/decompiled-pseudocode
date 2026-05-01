/*
 * XREFs of ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801DE7A4
 * Callers:
 *     ?EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ @ 0x1801E29D8 (-EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ.c)
 *     _lambda_a71db1969fba7bd0e2e9963c280e5bea_::operator() @ 0x180344738 (_lambda_a71db1969fba7bd0e2e9963c280e5bea_--operator().c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1803D881C (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045A040 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048D0F0 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048D1B0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     ?LogPackagenameForSysprep@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1805D4F4C (-LogPackagenameForSysprep@implementation@Shell@Internal@Windows@winrt@@YAXXZ.c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x1805DA02C (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801DE804 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

signed int __fastcall SHRegSetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  signed int result; // eax
  struct _SECURITY_ATTRIBUTES *v5; // [rsp+30h] [rbp-28h]
  BOOL v6; // [rsp+40h] [rbp-18h] BYREF

  v6 = a4 != 0;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, &v6, 4u, v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
