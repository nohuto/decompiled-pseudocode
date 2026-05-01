/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801FB3FC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180367CD0 (-deserialize@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x1803A2FD8 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18047A888 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$Q.c)
 *     ?deserialize@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805922C0 (-deserialize@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archiv.c)
 *     ?deserialize@?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18061CBE0 (-deserialize@-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAE.c)
 *     ?deserialize@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180688AA0 (-deserialize@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@deta.c)
 * Callees:
 *     ??$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z @ 0x18018523C (--$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v6; // dl

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v3;
  tson::input_archive::process<bool &>((tson::input_archive *)a1, *(_BYTE **)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 24) = v6;
  return tson::input_archive::process<bool &>((tson::input_archive *)a1, *(_BYTE **)(a3 + 16));
}
