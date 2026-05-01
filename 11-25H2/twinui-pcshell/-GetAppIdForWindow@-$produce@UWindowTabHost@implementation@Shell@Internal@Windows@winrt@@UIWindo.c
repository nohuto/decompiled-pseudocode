/*
 * XREFs of ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x180559CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x180064178 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetAppIdForWindow(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  winrt::hstring *AppIdForWindow; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (a1 - 32) & -(__int64)(a1 != 0);
  try
  {
    AppIdForWindow = winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
                       v4,
                       (winrt::hstring *)&v8,
                       a2);
    v6 = *(_QWORD *)AppIdForWindow;
    *(_QWORD *)AppIdForWindow = 0LL;
    *a3 = v6;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
