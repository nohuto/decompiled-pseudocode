/*
 * XREFs of ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805CE5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180190B00 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_77a32147fc6c60e39773a7a23b5bdd9c__void_ @ 0x1805C36B4 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_77a32147fc6c60e39773a7.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805C6180 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC2CC (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC37C (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v2; // si
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // kr00_8
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-1D8h] BYREF
  _BYTE v10[48]; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-198h]
  __int64 v12; // [rsp+68h] [rbp-190h] BYREF
  _BYTE v13[8]; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v15[8]; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v16[14]; // [rsp+F8h] [rbp-100h] BYREF
  _BYTE v17[120]; // [rsp+168h] [rbp-90h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v10);
  *(_QWORD *)&v9 = 0LL;
  v2 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v9);
  v3 = v11;
  *(_QWORD *)&v9 = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 320));
  tip2::details::shared_data<1,0,0>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 275) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
  v4 = -2147483638;
  v5 = v11;
  *(_QWORD *)&v9 = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 320));
  tip2::details::shared_data<1,0,0>::begin_update(v5 + 8);
  LOBYTE(v5) = *(_BYTE *)(v5 + 275);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
  if ( (_BYTE)v5 )
  {
    v5 = v11;
    *(_QWORD *)&v9 = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 320));
    tip2::details::shared_data<1,0,0>::begin_update(v5 + 8);
    *(_BYTE *)(v5 + 279) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
  }
  else
  {
    v14[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v14[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v14[13] = v14;
    v16[0] = off_180759818;
    v16[13] = v16;
    v9 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                      &v12,
                      (__int64)this - 8,
                      (__int64)v10);
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_77a32147fc6c60e39773a7a23b5bdd9c__void_(
      (__int64)v17,
      &v9);
    v4 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v17,
           (__int64)v15,
           (__int64)v13);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v17);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v15);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v13);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock(v11 + 8);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v10);
  result = v4;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v7 = v5;
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v10);
      v8 = v11;
      *(_QWORD *)&v9 = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 320));
      tip2::details::shared_data<1,0,0>::begin_update(v8 + 8);
      *(_BYTE *)(v8 + 279) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v9);
      tip2::details::shared_data<1,0,0>::complete_without_lock(v11 + 8);
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v10);
      v5 = v7;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}
