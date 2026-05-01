/*
 * XREFs of ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUhstring@8@@Z @ 0x18002ABA4
 * Callers:
 *     ?GetXamlTypeByFullName@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x18002C5A0 (-GetXamlTypeByFullName@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18002ACAC (-GetXamlType@-$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Mar.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  DWORD LastError; // ebx
  __int64 *XamlType; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-30h]
  __int64 *v13; // [rsp+38h] [rbp-28h]
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF

  v13 = a2;
  v6 = a1 + 9;
  AcquireSRWLockExclusive(a1 + 9);
  v12 = v6;
  v14[0] = *a3;
  winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
    &a1[7],
    a2,
    v14);
  if ( v6 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v6);
    SetLastError(LastError);
  }
  v12 = 0LL;
  if ( !*a2 )
  {
    v14[0] = *a3;
    XamlType = (__int64 *)winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
                            &a1[6],
                            &v11,
                            v14);
    if ( a2 != XamlType )
    {
      if ( *a2 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
      v10 = *XamlType;
      *XamlType = 0LL;
      *a2 = v10;
    }
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  }
  return a2;
}
