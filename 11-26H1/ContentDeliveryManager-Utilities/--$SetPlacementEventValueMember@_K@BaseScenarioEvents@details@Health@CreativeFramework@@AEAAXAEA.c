/*
 * XREFs of ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x1800488AC
 * Callers:
 *     ??$SetEventValue@$08$$V@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXXZ @ 0x180048780 (--$SetEventValue@$08$$V@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXXZ.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800487DC (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 * Callees:
 *     ??$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x1800490CC (--$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@detail.c)
 *     ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x18004F810 (-EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::SetPlacementEventValueMember<unsigned __int64>(
        CreativeFramework::Health::details::BaseScenarioEvents *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax

  CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(a1);
  result = *a3;
  if ( *a3 != *a2 )
  {
    *a2 = result;
    *((_BYTE *)a1 + 251) = 1;
    return CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
             a1,
             (char *)a1 + 104);
  }
  return result;
}
