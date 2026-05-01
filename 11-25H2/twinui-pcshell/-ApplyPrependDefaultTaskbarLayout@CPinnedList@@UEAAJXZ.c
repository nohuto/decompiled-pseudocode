/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298624 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18030B978 (wil--scope_exit__lambda_9a28d18710831121f161eabba1d1115d___.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180664CB0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18066540C (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18066586C (wil--details--lambda_call__lambda_9a28d18710831121f161eabba1d1115d___--_lambda_call__lambda_9a28.c)
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180665BD8 (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18067071C (-StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18067086C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x180671D20 (_CacheAppOrderInIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyPrependDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  void *v18[5]; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v19[42]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  memset_0(v19, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"TaskbarLayoutPrependDefaultActivity");
  v19[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v19);
  LODWORD(pv[0]) = 0;
  pv[1] = 0LL;
  v16 = 0uLL;
  v17 = 0LL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3LL, &pv[1], pv, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v5 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
           &v14,
           (__int64)&pv[1]);
    wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___((__int64)v13, v5);
    if ( LODWORD(pv[0]) )
    {
      v6 = v16 - 1;
      if ( (int)v16 - 1 >= 0 )
      {
        v7 = 8LL * v6;
        v8 = v7;
        do
        {
          std::to_wstring((char **)v18, v6 + 1);
          CacheAppOrderInIDList(*(_QWORD *)((char *)pv[1] + v7), v18, (char *)pv[1] + v8);
          v9 = *(_QWORD *)((char *)pv[1] + v7);
          if ( !(*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v9) )
          {
            v10 = CPinnedList::InternalModify((char *)this - 16, v9, 0LL, 37LL);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA2E,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
          if ( (unsigned int)CPinnedList::InternalModify((char *)this - 16, 0LL, v9, 37LL) )
          {
            v12 = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v12);
          }
          else
          {
            v11 = CPinnedList::InternalModify((char *)this - 16, v9, 1LL, 37LL);
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA35,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v11);
          }
          std::wstring::_Tidy_deallocate(v18);
          v8 -= 8LL;
          v7 -= 8LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
      wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(v13);
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      *(_QWORD *)&v16 = 0LL;
      v17 = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v19);
      return 0LL;
    }
    else
    {
      wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(v13);
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      *(_QWORD *)&v16 = 0LL;
      v17 = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v19);
      return 2147947423LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA12,
      (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[1] )
    {
      CoTaskMemFree(pv[1]);
      pv[1] = 0LL;
    }
    *(_QWORD *)&v16 = 0LL;
    v17 = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v19);
    return v3;
  }
}
