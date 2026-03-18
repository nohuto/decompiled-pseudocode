/*
 * XREFs of DrvSetActualPathModalityToDisplayJournal @ 0x1401F8180
 * Callers:
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1401981C0 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 * Callees:
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002D2B4 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvSetActualPathModalityToDisplayJournal(__int64 a1, __int64 a2)
{
  PVOID v2; // rbx
  __int64 v3; // rdx
  PVOID Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality((struct D3DKMT_GETPATHSMODALITY **)&Buffer, a2) >= 0 )
  {
    v2 = Buffer;
    DisplayScenarioJournalSetActualPathModality(
      296 * (unsigned int)*((unsigned __int16 *)Buffer + 10),
      *((unsigned __int16 *)Buffer + 10),
      (char *)Buffer + 56);
    FreePathsModality(v2, v3);
  }
}
