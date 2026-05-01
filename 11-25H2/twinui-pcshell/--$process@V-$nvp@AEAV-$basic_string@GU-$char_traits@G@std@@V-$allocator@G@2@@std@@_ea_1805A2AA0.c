/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A2AA0
 * Callers:
 *     ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V42@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@22$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A2DE8 (--$process@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C08 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opti.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r10
  char v7; // dl
  _BYTE *v8; // rbx
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl

  v4 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v4;
  tson::load_nothrow(this, *(_WORD **)(a2 + 16));
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  v7 = *(_BYTE *)(a4 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a4;
  *((_BYTE *)this + 24) = v7;
  v8 = *(_BYTE **)(a4 + 16);
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v10) = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v9 = *(_QWORD *)this;
  v10 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    LOBYTE(v10) = v11 != 0;
LABEL_6:
    *v8 = (_BYTE)v10;
    return (char)v10;
  }
  *(_BYTE *)(v9 + 24) = 1;
  return (char)v10;
}
