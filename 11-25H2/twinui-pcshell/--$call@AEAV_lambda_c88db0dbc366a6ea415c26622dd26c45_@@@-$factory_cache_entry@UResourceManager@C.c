/*
 * XREFs of ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x1801B4D98
 * Callers:
 *     ??$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@winrt@@YA?A_PXZ @ 0x1802C2C9C (--$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIReso.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$?RAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@_lambda_c88db0dbc366a6ea415c26622dd26c45_@@QEBA?A_PAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@Z @ 0x1802AD584 (--$-RAEBU-$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Wind.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@YA?AU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@0@AEBUhstring@param@0@@Z @ 0x18043E3B0 (--$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationMod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>::call<_lambda_c88db0dbc366a6ea415c26622dd26c45_ &>(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rcx
  bool v6; // zf
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-48h] BYREF
  _DWORD *v10; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-30h] BYREF
  const wchar_t *v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF

  v9 = a2;
  v11[0] = 1;
  v11[1] = 55;
  v12 = L"Windows.ApplicationModel.Resources.Core.ResourceManager";
  v10 = v11;
  winrt::get_activation_factory<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(
    &v8,
    &v10);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
  if ( v8 )
  {
    v13 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
    v4 = v13;
    v9 = (_QWORD *)v13;
  }
  else
  {
    v9 = 0LL;
    v4 = 0LL;
  }
  if ( v4 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
    _InterlockedIncrement64(&qword_18089C3B8);
    v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C3C0);
    }
    _lambda_c88db0dbc366a6ea415c26622dd26c45_::operator()<winrt::com_ptr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> const &>(
      v5,
      a2);
    _InterlockedDecrement64(&qword_18089C3B8);
    v6 = v8 == 0LL;
  }
  else
  {
    *a2 = v3;
    if ( v3 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v3)[1])(v3);
    v6 = v3 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
  return a2;
}
