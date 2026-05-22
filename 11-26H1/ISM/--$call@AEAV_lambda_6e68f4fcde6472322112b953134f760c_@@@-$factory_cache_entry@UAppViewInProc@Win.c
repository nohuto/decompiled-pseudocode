/*
 * XREFs of ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x1800A77E8
 * Callers:
 *     ?GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBUWindowId@23456@@Z @ 0x18004AB8C (-GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBU.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??R_lambda_6e68f4fcde6472322112b953134f760c_@@QEBA@AEBUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x18004AC00 (--R_lambda_6e68f4fcde6472322112b953134f760c_@@QEBA@AEBUIAppViewStatics@WindowManagement@Applicat.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007B07C (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18009D431 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800A58CC (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        _QWORD *a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v9[1] = 64LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
    &v11,
    v10);
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
    v12 = &qword_180253D28;
    _InterlockedIncrement64(&qword_180253D28);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180253D30);
    }
    _lambda_6e68f4fcde6472322112b953134f760c_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>);
    _InterlockedDecrement64(&qword_180253D28);
  }
  else
  {
    _lambda_6e68f4fcde6472322112b953134f760c_::operator()(a3, a2, (__int64)&v11);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v11);
  return a2;
}
