/*
 * XREFs of ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x1801D2E74
 * Callers:
 *     ??$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@winrt@@YA?A_PXZ @ 0x1802B9DA0 (--$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIReso.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$?RAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@_lambda_c88db0dbc366a6ea415c26622dd26c45_@@QEBA?A_PAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@Z @ 0x1802A75D8 (--$-RAEBU-$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Wind.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@YA?AU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@0@AEBUhstring@param@0@@Z @ 0x18044A9D4 (--$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationMod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>::call<_lambda_c88db0dbc366a6ea415c26622dd26c45_ &>(
        __int64 a1,
        signed __int64 *a2)
{
  signed __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v8; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-18h]
  signed __int64 *v11; // [rsp+50h] [rbp-10h] BYREF

  v11 = a2;
  v9[0] = 1;
  v9[1] = 55;
  v10 = L"Windows.ApplicationModel.Resources.Core.ResourceManager";
  v8 = v9;
  winrt::get_activation_factory<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(
    v7,
    &v8);
  v3 = v7[0];
  v11 = 0LL;
  if ( v7[0] )
  {
    (**(void (__fastcall ***)(__int64, __int64 *, __int64 *))v7[0])(
      v7[0],
      &winrt::impl::guid_v<winrt::impl::IAgileObject>,
      (__int64 *)&v11);
    v4 = (__int64)v11;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    _InterlockedIncrement64(&qword_1808DCA68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>,
            v3,
            0LL) )
    {
      v3 = 0LL;
      v7[0] = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DCA70);
    }
    _lambda_c88db0dbc366a6ea415c26622dd26c45_::operator()<winrt::com_ptr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> const &>(
      v5,
      a2);
    _InterlockedDecrement64(&qword_1808DCA68);
  }
  else
  {
    *a2 = v3;
    if ( v3 )
      (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  if ( v3 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v7);
  return a2;
}
