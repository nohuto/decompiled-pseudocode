/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D56C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D46C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits_ea_18063D46C.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D738 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@_ea_18063D738.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  char v11; // r10
  bool *v13; // rdi
  __int64 v14; // rdx
  char *v15; // rax
  char v16; // cl
  bool v17; // al

  v11 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v11;
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
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
             this,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  }
  *(_BYTE *)(v14 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
           this,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
