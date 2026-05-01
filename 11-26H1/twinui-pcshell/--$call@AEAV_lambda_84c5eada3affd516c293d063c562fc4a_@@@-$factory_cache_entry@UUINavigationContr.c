/*
 * XREFs of ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1801DF4A8
 * Callers:
 *     ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802A3464 (--$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationCont.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c293d063c562fc4a_@@QEBA?A_PAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1802C1B54 (--$-RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c29.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA?AUIUINavigationControllerStatics@Input@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x18033FCC8 (--$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  signed __int64 v4; // rbx
  __int64 v5; // rcx
  _DWORD *v7; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a1;
  v8[0] = 1;
  v9 = L"Windows.Gaming.Input.UINavigationController";
  v8[1] = 43;
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(&v11, &v7);
  v4 = (signed __int64)v11;
  v10 = 0LL;
  if ( v11 && ((**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), v10) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
    _InterlockedIncrement64(&qword_1808DB758);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>,
            v4,
            0LL) )
    {
      v4 = 0LL;
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB760);
    }
    _lambda_84c5eada3affd516c293d063c562fc4a_::operator()<winrt::Windows::Gaming::Input::IUINavigationControllerStatics const &>(
      v5,
      a2);
    _InterlockedDecrement64(&qword_1808DB758);
  }
  else
  {
    *a2 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  return a2;
}
