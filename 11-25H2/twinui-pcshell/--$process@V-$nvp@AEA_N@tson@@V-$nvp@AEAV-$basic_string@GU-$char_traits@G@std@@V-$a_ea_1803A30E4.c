/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1803A30E4
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1803A2664 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_1803A2664.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180621D28 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAH@2@V32@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@01@Z @ 0x180631A0C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_180631A0C.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

_WORD *__fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // rsi
  __int64 v7; // rdx
  char *v8; // rax
  char v9; // cl
  bool v10; // al
  __int64 v11; // rax

  v3 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v7 = *(_QWORD *)this;
  v8 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v8 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 8) = v8 + 1;
    v10 = v9 != 0;
LABEL_6:
    *v6 = v10;
    goto LABEL_7;
  }
  *(_BYTE *)(v7 + 24) = 1;
LABEL_7:
  v11 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v11;
  return tson::load_nothrow(this, (_WORD *)a3[2]);
}
