/*
 * XREFs of ??0?$producers_base@VNPSMDesktopShellComponent@@V?$tuple@UIApplicationViewChangeListener@@@std@@@impl@winrt@@QEAA@XZ @ 0x180232770
 * Callers:
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x18060FE58 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x18028DEB8 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>(a1);
  result = v1;
  *v1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
