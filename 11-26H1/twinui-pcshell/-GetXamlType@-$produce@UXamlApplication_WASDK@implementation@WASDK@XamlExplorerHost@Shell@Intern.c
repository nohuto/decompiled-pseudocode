/*
 * XREFs of ?GetXamlType@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHUstruct_Windows_UI_Xaml_Interop_TypeName@23@PEAPEAX@Z @ 0x1801D3A30
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUTypeName@Interop@Xaml@UI@78@@Z @ 0x1801D3A90 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inte_ea_1801D3A90.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *XamlType; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  try
  {
    XamlType = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType();
    v5 = *XamlType;
    *XamlType = 0LL;
    *a3 = v5;
    if ( v7[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(v7);
  }
  return result;
}
