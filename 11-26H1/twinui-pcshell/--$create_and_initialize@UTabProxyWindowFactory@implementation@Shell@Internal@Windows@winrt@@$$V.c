/*
 * XREFs of ??$create_and_initialize@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUTabProxyWindowFactory@implementation@Shell@Internal@Windows@1@XZ @ 0x18028DCB4
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18028D838 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInputSwitchExperienceManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x18028DD3C (--0-$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V-$tuple.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

_QWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,>()
{
  _QWORD *v0; // rbx

  v0 = operator new(0x58uLL);
  memset_0(v0, 0, 0x58uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>(v0);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v0 + 2), 1LL);
  v0[3] = 0LL;
  v0[4] = 0LL;
  v0[5] = 0LL;
  v0[6] = 0LL;
  v0[7] = 0LL;
  v0[8] = 0LL;
  v0[9] = 0LL;
  v0[10] = 0LL;
  *v0 = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>'};
  v0[1] = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>'};
  return v0;
}
