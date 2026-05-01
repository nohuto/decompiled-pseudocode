/*
 * XREFs of ?get_Host@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801F0570
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Host@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEBA?AUSearchAppHost@3456@XZ @ 0x1801F05CC (-Host@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEBA-AUSearchAppHost.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>::get_Host(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 *)winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::Host(
                    (a1 - 24) & -(__int64)(a1 != 0),
                    &v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return 0LL;
}
