/*
 * XREFs of ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x180101468
 * Callers:
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180101BE0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Foundation@Windows@winrt@@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@34@@impl@winrt@@QEBA@XZ @ 0x1800A81CC (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4AppModelFrameworkKind@WindowManag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::unbox_value_type_or<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind,std::optional<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,winrt::Windows::Foundation::IUnknown const &,std::nullopt_t const &>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF

  v10 = a3;
  v5 = *a2;
  v10 = 0LL;
  if ( v5 )
  {
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>>,
      &v10);
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6
    || ((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v10),
         v7 = *a2,
         v10 = 0LL,
         v7)
      ? ((**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<int>>, &v10), v8 = v10)
      : (v8 = 0LL),
        v8) )
  {
    *(_DWORD *)a1 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>::Value(&v10);
    *(_BYTE *)(a1 + 4) = 1;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v10);
  }
  else
  {
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v10);
    *(_BYTE *)(a1 + 4) = 0;
  }
  return a1;
}
