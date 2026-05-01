/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1011@Z @ 0x18065769C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806579F4 (--$serialize@Vinput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVinput_archive@t.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180176D74 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  char v7; // r10
  bool *v11; // rdi
  __int64 v12; // rdx
  char *v13; // rax
  char v14; // cl
  bool v15; // al
  __int64 v16; // rax
  __int64 v17; // rax

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  v11 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v15 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v12 = *(_QWORD *)this;
  v13 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v13 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v14 = *v13;
    *(_QWORD *)(v12 + 8) = v13 + 1;
    v15 = v14 != 0;
LABEL_6:
    *v11 = v15;
    goto LABEL_7;
  }
  *(_BYTE *)(v12 + 24) = 1;
LABEL_7:
  v16 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v16;
  tson::load_nothrow(this, (_QWORD *)a3[2]);
  v17 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v17;
  tson::load_nothrow(this, (_QWORD *)a4[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
           this,
           a5,
           a6,
           a7);
}
