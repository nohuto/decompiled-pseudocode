/*
 * XREFs of ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180190B00 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_266543fa3fad03614622d5bc7064e6b9__void_ @ 0x1805C35BC (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_266543fa3fad03614622d5.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805C6180 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC2CC (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC37C (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
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
  volatile signed __int32 *v12; // [rsp+20h] [rbp-208h] BYREF
  struct tagPOINT v13; // [rsp+28h] [rbp-200h] BYREF
  _BYTE v14[48]; // [rsp+30h] [rbp-1F8h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-1C8h]
  __int128 v16; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v17; // [rsp+80h] [rbp-1A8h]
  __int64 v18[3]; // [rsp+90h] [rbp-198h] BYREF
  char v19[8]; // [rsp+A8h] [rbp-180h] BYREF
  _QWORD v20[14]; // [rsp+B0h] [rbp-178h] BYREF
  char v21[8]; // [rsp+120h] [rbp-108h] BYREF
  _QWORD v22[14]; // [rsp+128h] [rbp-100h] BYREF
  _BYTE v23[120]; // [rsp+198h] [rbp-90h] BYREF

  v13 = a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v14);
  v12 = 0LL;
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v12);
  v5 = v15;
  v12 = v15;
  if ( v15 )
    _InterlockedIncrement(v15 + 80);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v5 + 2));
  *((_BYTE *)v5 + 275) = v4;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
  v6 = -2147483638;
  v7 = v15;
  v12 = v15;
  if ( v15 )
    _InterlockedIncrement(v15 + 80);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
  LOBYTE(v7) = *((_BYTE *)v7 + 275);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
  if ( (_BYTE)v7 )
  {
    v7 = v15;
    v12 = v15;
    if ( v15 )
      _InterlockedIncrement(v15 + 80);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
    *((_BYTE *)v7 + 278) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
  }
  else
  {
    v20[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v20[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v20[13] = v20;
    v22[0] = off_180759818;
    v22[13] = v22;
    v8 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
           v18,
           (__int64)this - 8,
           (__int64)&v13,
           (__int64)v14);
    v16 = *(_OWORD *)v8;
    v17 = v8[2];
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_266543fa3fad03614622d5bc7064e6b9__void_(
      (__int64)v23,
      (__int64)&v16);
    v6 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v23,
           (__int64)v21,
           (__int64)v19);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v23);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v21);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v19);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v15 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v14);
  result = v6;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v10 = v7;
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v14);
      v11 = v15;
      v12 = v15;
      if ( v15 )
        _InterlockedIncrement(v15 + 80);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v11 + 2));
      *((_BYTE *)v11 + 278) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v12);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v15 + 2));
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v14);
      v7 = v10;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}
