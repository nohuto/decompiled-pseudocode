/*
 * XREFs of ??$?0V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@Z @ 0x180093678
 * Callers:
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180093584 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  _DWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x20uLL);
  v4 = *a2;
  v6[2] = 1;
  *((_OWORD *)v6 + 1) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_>::`vftable';
  *a1 = v6;
  return a1;
}
