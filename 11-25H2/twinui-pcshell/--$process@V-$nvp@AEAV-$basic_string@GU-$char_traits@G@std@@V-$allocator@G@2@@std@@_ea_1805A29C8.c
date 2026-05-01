/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAV?$optional@_N@std@@@2@V32@V32@V?$nvp@AEA_N@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@11$$QEAV?$nvp@AEA_N@1@111@Z @ 0x1805A29C8
 * Callers:
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@V?$nvp@AEA_N@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22$$QEAV?$nvp@AEA_N@1@222@Z @ 0x1805A209C (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tra_ea_1805A209C.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C08 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opti.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  char v6; // r10
  __int64 v8; // rax
  bool *v9; // rbx
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  tson::load_nothrow(this, *(_WORD **)(a2 + 16));
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  v8 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v8;
  v9 = (bool *)a6[2];
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
    return tson::input_archive::process<tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(this);
  }
  *(_BYTE *)(v10 + 24) = 1;
  return tson::input_archive::process<tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(this);
}
