/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V12@V12@V12@V12@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x180631B98
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V12@V12@V12@V12@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x18063190C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V-$n.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x1803A07D8 (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  char v9; // r10
  bool *v13; // rdi
  __int64 v14; // rdx
  char *v15; // rax
  char v16; // cl
  bool v17; // al
  __int64 v18; // rax
  __int64 v19; // rax

  v9 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v9;
  v13 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v17 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v14 = *(_QWORD *)this;
  v15 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v15 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v16 = *v15;
    *(_QWORD *)(v14 + 8) = v15 + 1;
    v17 = v16 != 0;
LABEL_6:
    *v13 = v17;
    goto LABEL_7;
  }
  *(_BYTE *)(v14 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>((__int64)this, a3);
  v18 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v18;
  tson::load_nothrow(this, (_WORD *)a4[2]);
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>((__int64)this, a5);
  v19 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v19;
  tson::load_nothrow(this, (_WORD *)a6[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           this,
           a7,
           a8,
           a9);
}
