/*
 * XREFs of ?get_SystemId@?$produce@URegistrationData@implementation@Shell@Internal@Windows@winrt@@UIRegistrationData@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180661340
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::get_SystemId(
        __int64 a1,
        volatile signed __int32 **a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 24LL;
  winrt::hstring::hstring((winrt::hstring *)&v7, (const struct winrt::hstring *)v4, a3);
  v5 = v7;
  v7 = 0LL;
  *a2 = v5;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  return 0LL;
}
