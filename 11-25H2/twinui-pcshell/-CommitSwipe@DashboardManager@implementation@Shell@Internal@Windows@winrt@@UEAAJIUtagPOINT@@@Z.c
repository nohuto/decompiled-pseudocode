/*
 * XREFs of ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805AA560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180084B04 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_281561ec178d518c5a66b2a04dd22605__void_ @ 0x18059F440 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_281561ec178d518c5a66b2.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805A1F40 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8134 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A81E4 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  char v4; // di
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rax
  __int64 result; // rax
  volatile signed __int32 *v10; // kr00_8
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // [rsp+20h] [rbp-258h] BYREF
  __int64 v13; // [rsp+28h] [rbp-250h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-248h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-240h] BYREF
  struct tagPOINT v16; // [rsp+40h] [rbp-238h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-230h] BYREF
  __int128 v18; // [rsp+50h] [rbp-228h] BYREF
  __int64 v19; // [rsp+60h] [rbp-218h]
  _BYTE v20[48]; // [rsp+70h] [rbp-208h] BYREF
  volatile signed __int32 *v21; // [rsp+A0h] [rbp-1D8h]
  _BYTE v22[48]; // [rsp+A8h] [rbp-1D0h] BYREF
  volatile signed __int32 *v23; // [rsp+D8h] [rbp-1A0h]
  __int64 v24[3]; // [rsp+E0h] [rbp-198h] BYREF
  char v25[8]; // [rsp+F8h] [rbp-180h] BYREF
  _QWORD v26[14]; // [rsp+100h] [rbp-178h] BYREF
  char v27[8]; // [rsp+170h] [rbp-108h] BYREF
  _QWORD v28[14]; // [rsp+178h] [rbp-100h] BYREF
  _BYTE v29[120]; // [rsp+1E8h] [rbp-90h] BYREF

  v16 = a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v20);
  v13 = 0LL;
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v13);
  v5 = v21;
  v14 = v21;
  if ( v21 )
    _InterlockedIncrement(v21 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
  *((_BYTE *)v5 + 267) = v4;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v14);
  v6 = -2147483638;
  v7 = v21;
  v15 = v21;
  if ( v21 )
    _InterlockedIncrement(v21 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
  LOBYTE(v7) = *((_BYTE *)v7 + 267);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v15);
  if ( (_BYTE)v7 )
  {
    v7 = v21;
    v17 = v21;
    if ( v21 )
      _InterlockedIncrement(v21 + 78);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
    *((_BYTE *)v7 + 270) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v17);
  }
  else
  {
    v26[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v26[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v26[13] = v26;
    v28[0] = off_18072F5D8;
    v28[13] = v28;
    v8 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(
           v24,
           (__int64)this - 8,
           (__int64)&v16,
           (__int64)v20);
    v18 = *(_OWORD *)v8;
    v19 = v8[2];
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_281561ec178d518c5a66b2a04dd22605__void_(
      (__int64)v29,
      (__int64)&v18);
    v6 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v29,
           (__int64)v27,
           (__int64)v25);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v29);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v27);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v25);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v21 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v20);
  result = v6;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v10 = v7;
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v22);
      v11 = v23;
      v12 = v23;
      if ( v23 )
      {
        _InterlockedIncrement(v23 + 78);
        v11 = v12;
      }
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v11 + 2));
      *((_BYTE *)v11 + 270) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v23 + 2));
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v22);
      v7 = v10;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}
