/*
 * XREFs of wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_0d53fb9086cf6d11ab0e5935486144eb__void_ @ 0x180610190
 * Callers:
 *     ?RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616478 (-RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_0d53fb9086cf6d11ab0e5935486144eb__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  a1[14] = 0LL;
  a1[1] = &off_18075BDD0;
  a1[2] = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[3] = v3;
  a1[14] = a1 + 1;
  if ( a2[1] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2 + 1);
  return a1;
}
