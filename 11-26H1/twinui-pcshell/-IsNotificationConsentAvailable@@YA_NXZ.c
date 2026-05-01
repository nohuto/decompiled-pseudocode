/*
 * XREFs of ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1805F01A0
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800F545C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1802B5794 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?Setting@?$consume_Windows_UI_Notifications_IToastNotifier@UIToastNotifier@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805F0DFC (-Setting@-$consume_Windows_UI_Notifications_IToastNotifier@UIToastNotifier@Notifications@UI@Wind.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled@@@details@wil@@QEAA_NXZ @ 0x1805F0F80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformI.c)
 */

// Hidden C++ exception states: #wind=2
bool IsNotificationConsentAvailable(void)
{
  bool v0; // bl
  bool v1; // bl
  bool result; // al
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled>::GetImpl'::`2'::impl) )
  {
    winrt::param::hstring::hstring((winrt::param::hstring *)v3, L"Windows.SystemToast.PinConsent");
    try
    {
      winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
        (const struct winrt::param::hstring *)&v4,
        (__int64)v3);
      v0 = (unsigned int)winrt::impl::consume_Windows_UI_Notifications_IToastNotifier<winrt::Windows::UI::Notifications::IToastNotifier>::Setting(&v4) == 0;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
      result = v0;
    }
    catch ( ... )
    {
      return 0;
    }
  }
  else
  {
    winrt::param::hstring::hstring((winrt::param::hstring *)v3, L"Windows.SystemToast.PinConsent");
    winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
      (const struct winrt::param::hstring *)&v4,
      (__int64)v3);
    v1 = (unsigned int)winrt::impl::consume_Windows_UI_Notifications_IToastNotifier<winrt::Windows::UI::Notifications::IToastNotifier>::Setting(&v4) == 0;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
    return v1;
  }
  return result;
}
