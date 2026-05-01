/*
 * XREFs of ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805AA350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180084B04 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_3e1cb98417af719679d76878da606356__void_ @ 0x18059F470 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_3e1cb98417af719679d768.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805A1F40 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8134 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A81E4 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v2; // si
  volatile signed __int32 *v3; // rbx
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // kr00_8
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-238h] BYREF
  __int64 v10; // [rsp+28h] [rbp-230h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-228h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-220h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-218h] BYREF
  __int128 v14; // [rsp+50h] [rbp-208h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-1F8h] BYREF
  volatile signed __int32 *v16; // [rsp+90h] [rbp-1C8h]
  _BYTE v17[48]; // [rsp+98h] [rbp-1C0h] BYREF
  volatile signed __int32 *v18; // [rsp+C8h] [rbp-190h]
  __int64 v19; // [rsp+D0h] [rbp-188h] BYREF
  char v20[8]; // [rsp+E0h] [rbp-178h] BYREF
  _QWORD v21[14]; // [rsp+E8h] [rbp-170h] BYREF
  char v22[8]; // [rsp+158h] [rbp-100h] BYREF
  _QWORD v23[14]; // [rsp+160h] [rbp-F8h] BYREF
  _BYTE v24[120]; // [rsp+1D0h] [rbp-88h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v15);
  v10 = 0LL;
  v2 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v10);
  v3 = v16;
  v11 = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v3 + 2));
  *((_BYTE *)v3 + 267) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v11);
  v4 = -2147483638;
  v5 = v16;
  v12 = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
  LOBYTE(v5) = *((_BYTE *)v5 + 267);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
  if ( (_BYTE)v5 )
  {
    v5 = v16;
    v13 = v16;
    if ( v16 )
      _InterlockedIncrement(v16 + 78);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
    *((_BYTE *)v5 + 271) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v13);
  }
  else
  {
    v21[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v21[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v21[13] = v21;
    v23[0] = off_18072F5D8;
    v23[13] = v23;
    v14 = *(_OWORD *)std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
                       &v19,
                       (__int64)this - 8,
                       (__int64)v15);
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_3e1cb98417af719679d76878da606356__void_(
      (__int64)v24,
      &v14);
    v4 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v24,
           (__int64)v22,
           (__int64)v20);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v24);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v22);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v20);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v16 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v15);
  result = v4;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v7 = v5;
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v17);
      v8 = v18;
      v9 = v18;
      if ( v18 )
      {
        _InterlockedIncrement(v18 + 78);
        v8 = v9;
      }
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
      *((_BYTE *)v8 + 271) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v18 + 2));
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v17);
      v5 = v7;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}
