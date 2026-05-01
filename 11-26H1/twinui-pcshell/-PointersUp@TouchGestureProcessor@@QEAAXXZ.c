/*
 * XREFs of ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x1805924A4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_820147081c2ae6f68f1e5a53cf83334d__void_::_Do_call @ 0x180593440 (std--_Func_impl_no_alloc__lambda_820147081c2ae6f68f1e5a53cf83334d__void_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18059018C (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059083C (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059088C (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x1805908E4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?PointersUp@TouchGestureTelemetry@@SAXXZ @ 0x1805925B0 (-PointersUp@TouchGestureTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::PointersUp(TouchGestureProcessor *this)
{
  __int64 *v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  __int128 v6; // [rsp+28h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-8h]
  void *v8; // [rsp+50h] [rbp+10h] BYREF
  void *v9; // [rsp+58h] [rbp+18h] BYREF

  v1 = (__int64 *)((char *)this + 8);
  *((_BYTE *)this + 120) = 0;
  v2 = (__int64 *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 1;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 40))(v2, &v5);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v8);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v8) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v8,
                     (__int64 *)&v9)
                + 296) = v4;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v9);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v8);
    v8 = 0LL;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(v1, (__int64 *)&v8);
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v8);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v8) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                    (__int64)&v8,
                    (__int64 *)&v9)
               + 282) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v9);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v8);
    TouchGestureTelemetry::PointersUp();
  }
}
