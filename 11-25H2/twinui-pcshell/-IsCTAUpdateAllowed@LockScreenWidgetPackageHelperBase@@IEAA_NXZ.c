/*
 * XREFs of ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0214
 * Callers:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B01C8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18056C358 (--$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool __fastcall LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(LockScreenWidgetPackageHelperBase *this)
{
  if ( wil::reg::get_value_nothrow<unsigned long,0>() < 0 )
    return 0;
  else
    return 0;
}
