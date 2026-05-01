/*
 * XREFs of ??1?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@XZ @ 0x1800CB824
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CB6E4 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800DB2E0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ??1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ @ 0x1801630E8 (--1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ.c)
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1801633C4 (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x180269580 (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 *     ??1CSnapAssistControllerBase@@QEAA@XZ @ 0x1805A6A70 (--1CSnapAssistControllerBase@@QEAA@XZ.c)
 *     ??1?$queue@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x180619FD0 (--1-$queue@IV-$deque@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18061A070 (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder_::_1_::dtor$0 @ 0x1806CD92E (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveTabsFromWindowOrder_--_1_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSnappedWindowModel_CSnappedWindowModel_IApplicationView___&_IApplicationViewCollection___&_IImmersiveMonitorManager___&_enum_SnappedWindowOcclusionModel_&__::_1_::dtor$4 @ 0x1806D36B7 (_Microsoft--WRL--Details--MakeAndInitialize_CSnappedWindowModel_CSnappedWindowModel_ea_1806D36B7.c)
 *     _SnapEducationHandler::WindowFocusChanged_::_1_::dtor$0 @ 0x1806D6D5D (_SnapEducationHandler--WindowFocusChanged_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$15 @ 0x1806DD1F7 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$15.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  std::deque<tagRECT>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  return std::_Deallocate<16>(v2, 16LL);
}
