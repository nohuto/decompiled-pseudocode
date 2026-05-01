/*
 * XREFs of ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806600E0
 * Callers:
 *     ??$create_and_initialize@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUProcessTracker@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18065FA20 (--$create_and_initialize@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$producers_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIProcessTrackerStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1806600A4 (--0-$producers_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@V-$tupl.c)
 *     ??0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180660174 (--0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *__fastcall winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::ProcessTracker(
        winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *this)
{
  _QWORD *v3; // [rsp+38h] [rbp+10h]

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IProcessTrackerStatics>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 8, 1LL);
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>::`vftable';
  v3 = operator new(0x78uLL);
  memset_0(v3, 0, 0x78uLL);
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessTracker((winrt::Windows::Internal::Shell::implementation::ProcessTracker *)v3);
  *v3 = &winrt::Windows::Internal::Shell::implementation::ProcessTracker::`vftable';
  *((_QWORD *)this + 4) = v3 + 2;
  return this;
}
