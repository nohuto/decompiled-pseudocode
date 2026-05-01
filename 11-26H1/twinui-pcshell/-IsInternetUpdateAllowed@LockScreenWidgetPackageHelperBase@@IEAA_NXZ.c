/*
 * XREFs of ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4540
 * Callers:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1805C5B1C (--$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

char __fastcall LockScreenWidgetPackageHelperBase::IsInternetUpdateAllowed(LockScreenWidgetPackageHelperBase *this)
{
  if ( wil::reg::get_value_nothrow<unsigned long,0>() < 0 )
    return 1;
  else
    return 1;
}
