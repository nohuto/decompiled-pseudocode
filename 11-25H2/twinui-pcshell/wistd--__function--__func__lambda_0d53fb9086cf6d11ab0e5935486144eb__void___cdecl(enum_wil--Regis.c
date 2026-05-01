/*
 * XREFs of wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::destroy @ 0x18029FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl_enum_wil::RegistryChangeKind__::destroy(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 16);
  if ( *v1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
  return result;
}
