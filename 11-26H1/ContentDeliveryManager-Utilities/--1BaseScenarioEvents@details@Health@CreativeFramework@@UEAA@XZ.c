/*
 * XREFs of ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x18004CFC4
 * Callers:
 *     ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x18004DF30 (--_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x180048ECC (--$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??$WriteInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthTrackingInfo@123@AEA_N2PEBG@Z @ 0x180048FD4 (--$WriteInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@H.c)
 *     ??$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x1800490CC (--$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@detail.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(
        BYTE *this,
        __int64 a2,
        HKEY a3)
{
  HKEY v4; // r8
  HKEY v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx

  *(_QWORD *)this = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::HealthTrackingInfo>(
    (__int64)this,
    this + 8,
    a3,
    this + 249,
    this + 250);
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
    (__int64)this,
    this + 104,
    v4,
    this + 251,
    this + 252);
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
    (__int64)this,
    this + 144,
    v5,
    this + 253,
    this + 254);
  LOBYTE(v6) = 1;
  std::wstring::_Tidy(this + 216, v6, 0LL);
  LOBYTE(v7) = 1;
  std::wstring::_Tidy(this + 184, v7, 0LL);
}
