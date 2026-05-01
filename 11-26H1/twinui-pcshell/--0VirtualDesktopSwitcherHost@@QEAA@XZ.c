/*
 * XREFs of ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x1806ABC98
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180294408 (--$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WR.c)
 * Callees:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1801B3FDC (--0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1806AB53C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIVirtual.c)
 */

// Hidden C++ exception states: #wind=26
VirtualDesktopSwitcherHost *__fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost(
        VirtualDesktopSwitcherHost *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal>(this);
  *(_QWORD *)this = &VirtualDesktopSwitcherHost::`vftable';
  *((_QWORD *)this + 1) = &VirtualDesktopSwitcherHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IVirtualDesktopSwitcherHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 2) = &VirtualDesktopSwitcherHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 16) = &VirtualDesktopSwitcherHost::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 17) = &VirtualDesktopSwitcherHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitcherViewHostInternal>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((VirtualDesktopSwitcherHost *)((char *)this + 440));
  *((_WORD *)this + 228) = 0;
  *((_BYTE *)this + 458) = 0;
  *((_DWORD *)this + 115) = 96;
  *((_DWORD *)this + 116) = 96;
  winrt::Windows::UI::ViewManagement::UISettings::UISettings((VirtualDesktopSwitcherHost *)((char *)this + 472));
  *((_OWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 20) = 16;
  return this;
}
