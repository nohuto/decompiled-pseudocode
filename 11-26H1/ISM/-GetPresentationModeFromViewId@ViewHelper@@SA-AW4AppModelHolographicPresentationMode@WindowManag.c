/*
 * XREFs of ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800FEC4C
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FF5B8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x18004A924 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ABA3C (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 *     ?PresentationMode@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180100104 (-PresentationMode@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppMode.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetPresentationModeFromViewId(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+28h] BYREF

  ViewHierarchyWithWindowManager::GetView(a1, &v8, a2);
  v2 = 0;
  if ( v8 )
  {
    v3 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(
                                                              &v8,
                                                              v6);
    v7 = 0LL;
    if ( v3 )
    {
      (**v3)(
        v3,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v7);
      v4 = v7;
    }
    else
    {
      v4 = 0LL;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v6);
    if ( v4 )
      v2 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::PresentationMode(&v7);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v7);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v8);
  return v2;
}
