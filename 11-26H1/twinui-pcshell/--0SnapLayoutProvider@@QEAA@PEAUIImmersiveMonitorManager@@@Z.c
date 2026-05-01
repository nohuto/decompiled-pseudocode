/*
 * XREFs of ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x1800DA798
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800D9A00 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800DA84C (--0-$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V-$tu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
SnapLayoutProvider *__fastcall SnapLayoutProvider::SnapLayoutProvider(
        SnapLayoutProvider *this,
        struct IImmersiveMonitorManager *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>(
    this,
    a2,
    a3,
    a2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v4 + 16, 1LL);
  *(_QWORD *)this = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<SnapLayoutProvider>::`vftable'{for `winrt::impl::root_implements<SnapLayoutProvider,IInspectable>'};
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 250LL;
  return this;
}
