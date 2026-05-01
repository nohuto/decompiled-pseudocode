/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180647624
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647CEC (--$serialize@Vinput_archive@tson@@@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXAEAVinput.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  char v4; // r10
  bool *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al
  __int64 v13; // rax
  bool *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rax
  char v17; // cl
  bool v18; // al

  v4 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v4;
  v8 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v9 = *(_QWORD *)this;
    v10 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v9 + 24) = 1;
      goto LABEL_7;
    }
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
  }
  else
  {
    v12 = 0;
  }
  *v8 = v12;
LABEL_7:
  v13 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v13;
  v14 = (bool *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    v18 = 0;
    goto LABEL_12;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v15 = *(_QWORD *)this;
  v16 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v16 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v17 = *v16;
    *(_QWORD *)(v15 + 8) = v16 + 1;
    v18 = v17 != 0;
LABEL_12:
    *v14 = v18;
    return tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(
             (__int64)this,
             a4);
  }
  *(_BYTE *)(v15 + 24) = 1;
  return tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>((__int64)this, a4);
}
