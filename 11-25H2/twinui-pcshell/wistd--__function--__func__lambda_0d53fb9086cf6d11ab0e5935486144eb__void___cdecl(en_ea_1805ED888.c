/*
 * XREFs of wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::___func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_ @ 0x1805ED888
 * Callers:
 *     wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x1805EE0B0 (wistd--__function--__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(en_ea_1805EE0B0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void **__fastcall wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl_enum_wil::RegistryChangeKind__::___func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl_enum_wil::RegistryChangeKind__(
        _QWORD *a1)
{
  __int64 *v2; // rcx
  void **result; // rax

  v2 = a1 + 2;
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
