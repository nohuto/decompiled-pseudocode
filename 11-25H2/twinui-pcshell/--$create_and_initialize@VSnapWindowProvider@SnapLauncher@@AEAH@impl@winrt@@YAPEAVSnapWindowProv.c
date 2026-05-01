/*
 * XREFs of ??$create_and_initialize@VSnapWindowProvider@SnapLauncher@@AEAH@impl@winrt@@YAPEAVSnapWindowProvider@SnapLauncher@@AEAH@Z @ 0x18059EA30
 * Callers:
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x18059ED8C (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<SnapLauncher::SnapWindowProvider,int &>(int *a1)
{
  _QWORD *result; // rax
  int v3; // ecx

  result = operator new(0x38uLL);
  v3 = *a1;
  *result = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  result[1] = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  result[2] = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  result[4] = 1LL;
  result[1] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IServiceProvider,void>'};
  result[2] = &SnapLauncher::SnapWindowProvider::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  result[3] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable';
  result[5] = 0LL;
  *((_DWORD *)result + 12) = v3;
  *result = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IObjectWithSite,void>'};
  result[1] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IServiceProvider,void>'};
  result[2] = &SnapLauncher::SnapWindowProvider::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  result[3] = &winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vftable';
  return result;
}
