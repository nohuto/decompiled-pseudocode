/*
 * XREFs of ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x180232464
 * Callers:
 *     ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x180689540 (-Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU-$EventHandler@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815cbceb4935ba_@@QEBA?A_PAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180227BE8 (--$-RAEBUICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@_lambda_b9509f33d83c0e476f815c.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUICompositionTargetStatics3@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806890BC (--$get_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@winrt@@YA-AU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_b9509f33d83c0e476f815cbceb4935ba_ &>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  void (__fastcall **v5)(_QWORD *, __int64 *, __int64 *); // rax
  _QWORD *v6; // rcx
  _DWORD *v8; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v11 = a1;
  v9[0] = 1;
  v10 = L"Windows.UI.Xaml.Media.CompositionTarget";
  v9[1] = 39;
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>(&v12, &v8);
  v4 = v12;
  if ( v12
    && (v5 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v12,
        v11 = 0LL,
        (*v5)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11),
        (v13 = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    _InterlockedIncrement64(&qword_18089CC18);
    v6 = v12;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CC20);
    }
    _lambda_b9509f33d83c0e476f815cbceb4935ba_::operator()<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3 const &>(
      (__int64)v6,
      a2);
    _InterlockedDecrement64(&qword_18089CC18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    *a2 = (__int64)v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}
