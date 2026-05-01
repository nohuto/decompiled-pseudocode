/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_PerformLocalActionTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806220FC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18062DCA0 (-deserialize@-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4RemoteDesktopLocalAction@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4RemoteDesktopLocalAction@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180617B2C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAW4RemoteDesktopLocalAction@Shell@Internal@Windows@winrt@.c)
 */

char __fastcall _tip_PerformLocalActionTipTest::serialize<tson::input_archive>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  char *v5; // rax
  char v6; // cl
  bool v7; // al
  const char *v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  const char *v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  *((_BYTE *)a2 + 24) = 29;
  v9 = "localActionPerformed";
  v10 = 20;
  v11 = a1 + 16;
  v12 = "isImmersiveRemoteSessionNotTrue";
  v13 = 31;
  v14 = a1 + 21;
  a2[2] = (__int64)"failedToGetHostServicesObject";
  if ( !tson::input_archive::search((tson::input_archive *)a2) )
  {
    v7 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a2, 10, -2147023267);
  v4 = *a2;
  v5 = *(char **)(*a2 + 8);
  if ( (unsigned __int64)v5 < *(_QWORD *)(*a2 + 16) )
  {
    v6 = *v5;
    *(_QWORD *)(v4 + 8) = v5 + 1;
    v7 = v6 != 0;
LABEL_6:
    *(_BYTE *)(a1 + 20) = v7;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction &>>(
             (tson::input_archive *)a2,
             (__int64)&v12,
             (__int64 *)&v9);
  }
  *(_BYTE *)(v4 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction &>>(
           (tson::input_archive *)a2,
           (__int64)&v12,
           (__int64 *)&v9);
}
