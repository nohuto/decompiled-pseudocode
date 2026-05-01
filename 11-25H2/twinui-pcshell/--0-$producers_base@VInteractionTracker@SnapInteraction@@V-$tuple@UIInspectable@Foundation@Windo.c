/*
 * XREFs of ??0?$producers_base@VInteractionTracker@SnapInteraction@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029B264
 * Callers:
 *     ??0InteractionTracker@SnapInteraction@@QEAA@XZ @ 0x180235890 (--0InteractionTracker@SnapInteraction@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x180292B48 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@.c)
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029B2A8 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winr.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<SnapInteraction::InteractionTracker,std::tuple<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>>::producers_base<SnapInteraction::InteractionTracker,std::tuple<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::producer_convert<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>(
    a1 + 16,
    a2,
    a1);
  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>();
  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>();
  *v2 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  result = v3;
  *v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
