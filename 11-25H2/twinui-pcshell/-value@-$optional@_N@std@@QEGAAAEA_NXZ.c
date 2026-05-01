/*
 * XREFs of ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x180332DD0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x180472720 (-IsInputAppEnabled@KeyboardHosting@@YA_NXZ.c)
 *     ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x1805A1AD4 (--$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV-$optional@_N@std@@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BBF8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<bool>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 1) )
    std::_Throw_bad_optional_access();
  return a1;
}
