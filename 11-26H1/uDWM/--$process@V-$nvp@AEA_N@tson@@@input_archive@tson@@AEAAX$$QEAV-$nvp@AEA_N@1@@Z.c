/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800D22D4
 * Callers:
 *     ??$process@V?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800D21D8 (--$process@V-$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V-$nvp@AEA_N@2@V32@V-$.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800D44CC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800D56D8 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>>(__int64 *a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  char v8; // cl

  v2 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v7) = 0;
    goto LABEL_6;
  }
  LOBYTE(v5) = 10;
  tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
  v6 = *a1;
  v7 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v7 < *(_QWORD *)(*a1 + 16) )
  {
    v8 = *v7;
    *(_QWORD *)(v6 + 8) = v7 + 1;
    LOBYTE(v7) = v8 != 0;
LABEL_6:
    *v4 = (_BYTE)v7;
    return (char)v7;
  }
  *(_BYTE *)(v6 + 24) = 1;
  return (char)v7;
}
