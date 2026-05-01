/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063DA9C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D900 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18063D900.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180326EA8 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // r10
  bool *v9; // rdi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v13 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v10 = *(_QWORD *)this;
  v11 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v11 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
LABEL_6:
    *v9 = v13;
    goto LABEL_7;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, a3);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction &>>(
           this,
           a4,
           a5);
}
