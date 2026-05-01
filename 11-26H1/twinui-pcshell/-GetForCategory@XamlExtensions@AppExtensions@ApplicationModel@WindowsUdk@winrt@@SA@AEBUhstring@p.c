/*
 * XREFs of ?GetForCategory@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18029F684
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1800A1240 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@Z @ 0x1805C090C (--$call@AEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@-$factory_cache_entry@UXamlExtensions@Ap.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions::GetForCategory(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DBDA8;
  _InterlockedIncrement64(&qword_1808DBDA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics2> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics2>);
    _InterlockedDecrement64(&qword_1808DBDA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBDA8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics2>::call<_lambda_88cd0196bed0f4158967f5db888f1fee_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
