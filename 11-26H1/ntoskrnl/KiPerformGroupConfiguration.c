/*
 * XREFs of KiPerformGroupConfiguration @ 0x140CD0A5C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 *     HvlIsSingleGroupRequired @ 0x1405BB054 (HvlIsSingleGroupRequired.c)
 *     KiFinalizeGroupAssignment @ 0x1405F21D4 (KiFinalizeGroupAssignment.c)
 *     KiAssignAllSubNodesToGroup0 @ 0x140CD0644 (KiAssignAllSubNodesToGroup0.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140CD0688 (KiPerformAutomaticGroupConfiguration.c)
 *     KiPerformExplicitGroupAssignment @ 0x140CD0868 (KiPerformExplicitGroupAssignment.c)
 *     KiPopulateNodeInformation @ 0x140CD0B2C (KiPopulateNodeInformation.c)
 *     KiPopulateSubNodes @ 0x140CD0EC4 (KiPopulateSubNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v3 = 0;
  KiPopulateNodeInformation(&v4, &v3);
  KiPopulateSubNodes();
  if ( HvlIsSingleGroupRequired() )
    goto LABEL_11;
  if ( !KiPerformExplicitGroupAssignment(*(_DWORD **)(*(_QWORD *)(a1 + 240) + 304LL), v3) )
  {
    if ( strstr(*(const char **)(a1 + 216), "MAXGROUP=OFF") )
    {
      KiMaximizeGroupsCreated = 0;
    }
    else if ( strstr(*(const char **)(a1 + 216), "MAXGROUP") )
    {
      KiMaximizeGroupsCreated = 1;
    }
    if ( KiSubNodeCount != 1 && (KiMaximizeGroupsCreated || v4 > (unsigned int)KiMaximumGroupSize) )
    {
      KiPerformAutomaticGroupConfiguration();
      return KiFinalizeGroupAssignment();
    }
LABEL_11:
    KiAssignAllSubNodesToGroup0();
  }
  return KiFinalizeGroupAssignment();
}
