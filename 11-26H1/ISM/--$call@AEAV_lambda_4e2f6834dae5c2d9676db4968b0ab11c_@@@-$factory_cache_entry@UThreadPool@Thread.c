/*
 * XREFs of ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800DD8E0
 * Callers:
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DE564 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007B07C (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18009D431 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800DDA14 (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ??R_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@QEBA@AEBUIThreadPoolStatics@Threading@System@Windows@winrt@@@Z @ 0x1800DDBEC (--R_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@QEBA@AEBUIThreadPoolStatics@Threading@System@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>::call<_lambda_4e2f6834dae5c2d9676db4968b0ab11c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.System.Threading.ThreadPool";
  v9[1] = 35LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::System::Threading::IThreadPoolStatics>(&v11, v10);
  v5 = (signed __int64)v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1802548D8;
    _InterlockedIncrement64(&qword_1802548D8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1802548E0);
    }
    _lambda_4e2f6834dae5c2d9676db4968b0ab11c_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>);
    _InterlockedDecrement64(&qword_1802548D8);
  }
  else
  {
    _lambda_4e2f6834dae5c2d9676db4968b0ab11c_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v11);
  return a2;
}
