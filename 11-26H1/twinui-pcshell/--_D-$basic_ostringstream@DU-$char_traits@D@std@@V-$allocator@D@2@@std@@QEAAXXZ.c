/*
 * XREFs of ??_D?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1804F8754
 * Callers:
 *     _lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator() @ 0x1804F82D0 (_lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator().c)
 *     ??_E?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1804F886C (--_E-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F9C80 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804FDD60 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804FE870 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180501850 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     __lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator()_::_1_::dtor$5 @ 0x1806F2776 (__lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator()_--_1_--dtor$5.c)
 *     _GamingPosturePositioner::InitializePosition_::_1_::dtor$4 @ 0x1806F294F (_GamingPosturePositioner--InitializePosition_--_1_--dtor$4.c)
 *     _GamingPosturePositioner::ControlLost_::_1_::dtor$7 @ 0x1806F29E8 (_GamingPosturePositioner--ControlLost_--_1_--dtor$7.c)
 *     _GamingPosturePositioner::HandleViewRecovery_::_1_::dtor$10 @ 0x1806F2D1A (_GamingPosturePositioner--HandleViewRecovery_--_1_--dtor$10.c)
 *     _GamingPosturePositioner::OnApplicationViewChanged_::_1_::dtor$4 @ 0x1806F2EE4 (_GamingPosturePositioner--OnApplicationViewChanged_--_1_--dtor$4.c)
 *     _GamingPosturePositioner::OnShellTrackedWindowPosChanged_::_1_::dtor$2 @ 0x1806F2FCD (_GamingPosturePositioner--OnShellTrackedWindowPosChanged_--_1_--dtor$2.c)
 *     _GamingPosturePositioner::OnShowWindowPolicy_::_1_::dtor$4 @ 0x1806F3040 (_GamingPosturePositioner--OnShowWindowPolicy_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F7564 (--1-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::ostringstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 136;
  std::ostringstream::~ostringstream(a1 + 136);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
