/*
 * XREFs of wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::___func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_ @ 0x180612398
 * Callers:
 *     wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x180612C60 (wistd--__function--__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(en_ea_180612C60.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void **__fastcall wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__::___func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__(
        _QWORD *a1)
{
  __int64 *v2; // rcx
  void **result; // rax

  v2 = a1 + 5;
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
