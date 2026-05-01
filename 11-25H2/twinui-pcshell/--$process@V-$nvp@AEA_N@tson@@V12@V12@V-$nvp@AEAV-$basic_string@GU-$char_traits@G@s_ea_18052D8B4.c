/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18052D8B4
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18052D7C4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits_ea_18052D7C4.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18052D998 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@_ea_18052D998.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v10; // r10
  bool *v12; // rdi
  __int64 v13; // rdx
  char *v14; // rax
  char v15; // cl
  bool v16; // al

  v10 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v10;
  v12 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v16 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v13 = *(_QWORD *)this;
  v14 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v14 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v15 = *v14;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    v16 = v15 != 0;
LABEL_6:
    *v12 = v16;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             this,
             a6,
             a7,
             a8,
             a9,
             a10);
  }
  *(_BYTE *)(v13 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a6,
           a7,
           a8,
           a9,
           a10);
}
