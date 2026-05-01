/*
 * XREFs of ??0InteractionTracker@SnapInteraction@@QEAA@XZ @ 0x180227324
 * Callers:
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x18059D048 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$producers_base@VInteractionTracker@SnapInteraction@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802926FC (--0-$producers_base@VInteractionTracker@SnapInteraction@@V-$tuple@UIInspectable@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=4
SnapInteraction::InteractionTracker *__fastcall SnapInteraction::InteractionTracker::InteractionTracker(
        SnapInteraction::InteractionTracker *this)
{
  __int64 v2; // rax

  winrt::impl::producers_base<SnapInteraction::InteractionTracker,std::tuple<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>>::producers_base<SnapInteraction::InteractionTracker,std::tuple<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 32, 1LL);
  *(_QWORD *)this = &SnapInteraction::InteractionTracker::`vftable'{for `winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &SnapInteraction::InteractionTracker::`vftable'{for `winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>'};
  *((_QWORD *)this + 3) = &SnapInteraction::InteractionTracker::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 11) = v2;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
