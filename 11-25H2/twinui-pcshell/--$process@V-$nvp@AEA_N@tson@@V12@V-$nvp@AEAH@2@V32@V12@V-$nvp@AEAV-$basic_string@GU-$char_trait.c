/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180621B88
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806221B8 (--$serialize@Vinput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180621D28 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAH@2@V32@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r10
  bool *v9; // rdi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
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
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
             this,
             a6,
             a7);
  }
  *(_BYTE *)(v10 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           this,
           a6,
           a7);
}
