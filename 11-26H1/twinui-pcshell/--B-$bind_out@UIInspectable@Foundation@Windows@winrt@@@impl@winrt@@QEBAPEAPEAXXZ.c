/*
 * XREFs of ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x180209DE8
 * Callers:
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x18027F644 (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 *     ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x180387A4C (--R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementat.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180598EDC (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 *__fastcall winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(__int64 **a1)
{
  __int64 *v1; // rbx
  char v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 != (__int64 *)&v4 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(*a1);
    *v1 = 0LL;
  }
  return *a1;
}
