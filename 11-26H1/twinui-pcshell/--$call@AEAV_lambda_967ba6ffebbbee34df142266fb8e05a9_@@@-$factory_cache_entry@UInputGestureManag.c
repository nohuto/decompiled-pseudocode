/*
 * XREFs of ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x1800B7394
 * Callers:
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800B72F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@winrt@@YA?AUIInputGestureManagerStatics@Input@Internal@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1803637E8 (--$get_activation_factory@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        _QWORD *a3)
{
  signed __int64 v5; // rbx
  _DWORD *v7; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsUiInter_0[45] )
    abort();
  v8[0] = 1;
  v8[1] = 45;
  v9 = L"Windows.UI.Internal.Input.InputGestureManager";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>(&v10, &v7);
  v5 = (signed __int64)v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), v11) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    v11 = &qword_1808DBAB8;
    _InterlockedIncrement64(&qword_1808DBAB8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>,
            v5,
            0LL) )
    {
      v5 = 0LL;
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBAC0);
    }
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1808DBAB8);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v10,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
