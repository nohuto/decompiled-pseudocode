/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x180176F44
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18036EF10 (-deserialize@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V12@V?$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEA_N@1@1@Z @ 0x1803A9278 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V12@V-.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18048B2CC (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$Q.c)
 *     ?deserialize@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805B62E0 (-deserialize@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archiv.c)
 *     ?deserialize@?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806425B0 (-deserialize@-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@EEAAXAE.c)
 *     ?deserialize@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806AFE30 (-deserialize@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@deta.c)
 * Callees:
 *     ??$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z @ 0x180177014 (--$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // r9
  char v6; // dl

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v3;
  tson::input_archive::process<bool &>(a1, *(_QWORD *)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 24) = v6;
  return tson::input_archive::process<bool &>(a1, *(_QWORD *)(a3 + 16));
}
