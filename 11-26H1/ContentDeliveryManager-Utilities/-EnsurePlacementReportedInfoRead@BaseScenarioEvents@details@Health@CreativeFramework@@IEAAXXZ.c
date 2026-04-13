/*
 * XREFs of ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x18004F810
 * Callers:
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800487DC (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x1800488AC (--$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA.c)
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18004FD20 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 * Callees:
 *     ??$ReadInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x180048434 (--$ReadInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
      (__int64)this,
      (_DWORD *)this + 26,
      (_OWORD *)this + 7,
      (_BYTE *)this + 251,
      (_BYTE *)this + 252);
}
