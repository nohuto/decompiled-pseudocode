/*
 * XREFs of ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800D73E4
 * Callers:
 *     ??$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_archive@tson@@AEAAXAEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@Z @ 0x1800D499C (--$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_a.c)
 *     ??$process@V?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800D4CA4 (--$process@V-$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V-$nvp@AEA_N@2@V32@V-$.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800D4DA0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800D7294 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 */

char __fastcall tson::input_archive::consume_expected_marker(tson::read_buffer **a1)
{
  unsigned __int8 *v1; // rax
  int v2; // r8d
  __int64 v3; // r9
  char v4; // r10

  v1 = tson::read_buffer::advance(*a1);
  if ( v1 )
  {
    if ( v4 == *v1 )
      return 1;
    if ( *(int *)(v3 + 8) >= 0 )
      *(_DWORD *)(v3 + 8) = v2;
  }
  return 0;
}
