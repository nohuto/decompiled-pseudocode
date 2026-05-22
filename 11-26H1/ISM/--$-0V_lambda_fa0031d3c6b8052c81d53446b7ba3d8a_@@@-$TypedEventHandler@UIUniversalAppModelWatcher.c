/*
 * XREFs of ??$?0V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@Z @ 0x1800A7274
 * Callers:
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800A9008 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>(
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
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>,_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_>::`vftable';
  *a1 = v6;
  return a1;
}
